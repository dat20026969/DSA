#ifndef _HASH1_
#define _HASH1_
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <random>
#include <algorithm>
#include <list>
using namespace std;
/* FOR ALL */
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
/* HASHING WITH SEPERATE CHAINING METHOD*/
class Hash{
    int BUCKET;    
    list<int>* table;
public:
    Hash(int n);  
    void insertItem(int x);
    void deleteItem(int key);
    int hashFunction(int x) {
        return (x % BUCKET);
    }
    void displayHash();
};

/* HASING WITH LINEAR PROBING */
template<typename A, typename B>
class HashMap{
    hashNode<A, B> **a;
    int capac;
    int size;
    hashNode<A, B>* dummy;
public:
    hashMap(){
        int capac = 20;
        int size = 0;
        a = new HashNode<A, B>*[capac];
        for (int i = 0; i < capac; i++) {
            a[i] = NULL;
        }
        dummy = new HashNode<A, B>(-1, -1);
    }
    int hashCode(A key){
        return key % capac;
    }
    void insertNode(A key, B value){
        HashNode<A, B>* temp = new HashNode<A, B>(key, value);
        int hashIndex = hashCode(key);
        while (a[hashIndex] != NULL && a[hashIndex]->key != key && a[hashIndex]->key != -1){
            hashIndex++;
            hashIndex %= capac;
        }
        if (a[hashIndex] == NULL || a[hashIndex]->key == -1) {
            size++;
        }
        arr[hashIndex] = temp;
    }
    B deleteNode(int key){
        int hashIndex = hashCode(key);
        while (a[hashIndex] != NULL){
            if (a[hashIndex]->key == key) {
                HashNode<A, B>* temp = a[hashIndex];
                a[hashIndex] = dummy;
                size--;
                return temp->value;
            }
            hashIndex++;
            hashIndex %= capac;
        }
        return NULL;
    }
    B get(int key) {
        int hashIndex = hashCode(key);
        int counter = 0;
        while (a[hashIndex] != NULL) {
            int counter = 0;
            if (counter++ > capac) {
                return NULL;
            }
            if (a[hashIndex]->key == key) {
                return a[hashIndex]->value;
            }
            hashIndex++;
            hashIndex %= capac;
        }
        return NULL;
    }
    int sizeofMap(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void display(){
        for (int i = 0; i < capac; i++)
        {
            if (arr[i] != NULL && a[i]->key != -1)
                cout << "khoa k = " << a[i]->key
                << " Gia tri la = " << a[i]->value << endl;
        }
    }
};
/* HASHING WITH QUADRATIC PROBING */
void hashing(int table[], int tsize, int arr[], int N);
/* HASHING WITH DOUBLE HASHING */
#define TABLE_SIZE 13
#define PRIME 7
class DoubleHash {
    int* hashTable;
    int curr_size;

public:   
    bool isFull(){
        return (curr_size == TABLE_SIZE);
    }
    int hash1(int key){
        return (key % TABLE_SIZE);
    }
    int hash2(int key){
        return (PRIME - (key % PRIME));
    }
    void doubleHash(){
        hashTable = new int[TABLE_SIZE];
        curr_size = 0;
        for (int i = 0; i < TABLE_SIZE; i++) {
            hashTable[i] = -1;
        }
    }
    void insertHash(int key){
        if (isFull()) {
            return;
        }
        int index = hash1(key);
        if (hashTable[index] != -1) {
            int index2 = hash2(key);
            int i = 1;
            while (1) {
                int newIndex = (index + i * index2) % TABLE_SIZE;
                if (hashTable[newIndex] == -1) {
                    hashTable[newIndex] = key;
                    break;
                }
                i++;
            }
        }
        else {
            hashTable[index] = key;
        }
        curr_size++;
    }
    void search(int key){
        int index1 = hash1(key);
        int index2 = hash2(key);
        int i = 0;
        while (hashTable[(index1 + i * index2) % TABLE_SIZE] != key) {
            if (hashTable[(index1 + i * index2) % TABLE_SIZE] == -1) {
                cout << key << " khong ton tai!" << endl;
                return;
            }
            i++;
        }
        cout << key << " da duoc tim thay" << endl;
    }
    void displayHash1(){
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (hashTable[i] != -1)
                cout << i << " -> "
                << hashTable[i] << endl;
            else {
                cout << i << endl;
            }
        }
    }
};
#endif