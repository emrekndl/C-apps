#include "trie.h"
#include <cstring>
#include <iostream>
#include <memory>
#include <unordered_map>
#include <vector>

using namespace std;


struct Node {
  bool end = false;
  unordered_map<char, unique_ptr<Node>> next;
};

static unique_ptr<Node> root;


extern "C" void init_trie(const char **words, int count) {
  root = make_unique<Node>();

  for (int i = 0; i < count; i++) {
    // to_lower(words[i]);
    const char *w = words[i];
    Node *current = root.get();

    for (int j = 0; w[j]; j++) {
      char c = w[j];
      if (!current->next[c]) {
        current->next[c] = make_unique<Node>();
      }
      current = current->next[c].get();
    }
    current->end = true;
  }
}

extern "C" bool trie_contains(const char *word) {
  Node *current = root.get();
  // to_lower(word);
  for (int i = 0; word[i]; i++) {
    char c = word[i];
    auto it = current->next.find(c);
    if (it == current->next.end()) {
      return false;
    }
    current = it->second.get();
  }
  return current->end;
}



extern "C" void init_trie_from_bin() {
  FILE* bin_file = fopen("words.dat", "rb");
  if (bin_file == NULL) {
      std::cout << "words.dat not found!\n";
      exit(-1);
  }

  // Read file size
  fseek(bin_file, 0, SEEK_END);
  long file_size = ftell(bin_file);
  rewind(bin_file);

  // Read entire file into buffer
  vector<char> buffer(file_size);
  fread(buffer.data(), 1, file_size, bin_file);
  fclose(bin_file);

  // Parse words from buffer
  vector<const char*> words;
  const char* ptr = buffer.data();
  const char* end = buffer.data() + file_size;
  
  while (ptr < end) {
    words.push_back(ptr);
    ptr += strlen(ptr) + 1;  // Move to next word
  }

  // Initialize trie with words
  init_trie(words.data(), words.size());
}


// int main(int argc, char *argv[]) {
    
//   init_trie_from_bin();

//   // string query;
//   // cout << "Search word: ";
//   // while (cin >> query) {
//   //   cout << query << " -> " << (trie_contains(query.c_str()) ? "Yes" : "No")
//   //        << "\n";
//   //   cout << "Search word: ";
//   // }

//   return 0;
// }
