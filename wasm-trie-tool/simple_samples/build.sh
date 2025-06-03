#!/usr/bin/env bash

# Emscripten ile JavaScript wrapper ve WASM üretimi
emcc trie.cpp \
    -O3 -s WASM=1 \
    -s EXPORTED_FUNCTIONS="['_init_trie','_trie_contains']" \
    -s EXPORTED_RUNTIME_METHODS="['cwrap','getValue']" \
    -o trie.js
#
#
#######
# # 1) Word list’i C dizisine dönüştür
# echo "const char* words[] = {" > words_data.c
# while IFS= read -r w; do
# echo " \"$w\"," >> words_data.c
# done < word_list.txt
# echo "};" >> words_data.c
# echo "int count = sizeof(words)/sizeof(words[0]);" >> words_data.c
#
# # 3) JS Wrapper
# emcc trie.cpp words_data.c \
# -O3 -s WASM=1 \
# -o trie.js \
# -s EXPORTED_FUNCTIONS="['_init_trie','_trie_contains']" \
# -s EXPORTED_RUNTIME_METHODS="['cwrap','getValue']
