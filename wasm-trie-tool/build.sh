#!/usr/bin/env bash

set -e

# Convert wordlist to binary format
python3 - << EOF
import sys

with open('wordlist.txt', 'r') as f:
    words = [line.strip() for line in f if line.strip()]

with open('words.dat', 'wb') as f:
    for word in words:
        f.write(word.encode('utf-8') + b'\0')
EOF

# Compile WASM module
emcc trie.cpp \
  -O3 \
  --embed-file words.dat \
  -s WASM=1 \
  -s FORCE_FILESYSTEM=1 \
  -s EXPORTED_FUNCTIONS="['_malloc','_free','_trie_contains','_init_trie','_init_trie_from_bin']" \
  -s EXPORTED_RUNTIME_METHODS="['cwrap','UTF8ToString','stringToUTF8']" \
  -s MODULARIZE=1 \
  -s EXPORT_ES6=1 \
  -o trie.js

# # WASM dosyasını build et
# emcc trie.cpp \
#   -O3 \
#   --embed-file words.bin \
#   -s WASM=1 \
#   -s FORCE_FILESYSTEM=1 \
#   -s EXPORTED_FUNCTIONS="['_malloc', '_free', '_trie_contains', '_init_trie_from_bin']" \
#   -s EXPORTED_RUNTIME_METHODS="['cwrap', 'getValue', 'setValue', 'UTF8ToString', 'stringToUTF8']" \
#   -o trie.js

# -s EXTRA_EXPORTED_RUNTIME_METHODS="['cwrap','ccall', getValue']
# emcc trie.c -o trie.js -s MODULARIZE=1 -s EXPORT_ES6=0 -s 'EXPORTED_FUNCTIONS=["_malloc","_free","_trie_contains","_init_trie_from_bin"]' -s 'EXPORTED_RUNTIME_METHODS=["cwrap","getValue","setValue","UTF8ToString","stringToUTF8"]'

