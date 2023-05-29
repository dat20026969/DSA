#ifndef _DICT_H_
#define _DICT_H_
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
struct Trie {
    bool eow;
    std::unordered_map<char, Trie*> map;
    string meaning;
};
Trie* getNewTrieNode();

#endif