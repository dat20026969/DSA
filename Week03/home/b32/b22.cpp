#include "b22.h"
using namespace std;
Trie* getNewTrieNode(){
    Trie* node = new Trie;
    node->eow = false;
    return node;
}
void insert(Trie*& root, const string& str,const string& meaning){
    if (root == NULL) {
        root = getNewTrieNode();
    }
    Trie* temp = root;
    for (int i = 0; i < str.length(); i++) {
        char x = str[i];        
        if (temp->map.find(x) == temp->map.end()) {
            temp->map[x] = getNewTrieNode();
        }
        temp = temp->map[x];
    }
    temp->eow = true;
    temp->meaning = meaning;
}
string getMeaning(Trie* root, const string& word){
    if (root == NULL) {
        return "";
    }
    Trie* temp = root;
    for (int i = 0; i < word.length(); i++) {
        temp = temp->map[word[i]];
        if (temp == NULL) {
            return "";
        }
    }
    if (temp->eow) {
        return temp->meaning;
    }
    return "";
}
//thao khao tren mang.