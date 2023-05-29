#include "b1.h"
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap mang: " << endl;
        cin >> a[i];
    }
}
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
/* CHAINING METHOD */
Hash::Hash(int n) {
    this->BUCKET = n;
    table = new list < int >[BUCKET];
}
void Hash::insertItem(int key) {
    int index = hashFunction(key);
    table[index].push_back(key);
}
void Hash::deleteItem(int key) {
    int index = hashFunction(key);
    list < int >::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++) {
        if (*i == key)
            break;
    }
    if (i != table[index].end())
        table[index].erase(i);
}
void Hash::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i])
            cout << " --> " << x;
        cout << endl;
    }
}
/* LINEAR PROBING */ //TRONG FILE B1.H
/* QUADRATIC HASHING */
void hashing(int table[], int tsize, int arr[], int N){
    for (int i = 0; i < N; i++) {
        int hv = arr[i] % tsize;
        if (table[hv] == -1) {
             table[hv] = arr[i];
        }
        else{
            for (int j = 0; j < tsize; j++){
                int t = (hv + j * j) % tsize;
                if (table[t] == -1) {
                    table[t] = arr[i];
                    break;
                }
            }
        }
    }
    xuatMang(table, N);
}
/* DOUBLE HASHING */ //TRONG FILE .H
