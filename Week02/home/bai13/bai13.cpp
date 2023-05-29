#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <random>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdio>
#include "bai13.h"
using namespace std;
int readfile(record* a){
    int i = 0;
    FILE* fp;
    if ((fp.open("employee.txt", ios::in)) != nullptr){
        while (!fp.eof()){
            cin.getline >> a[i].ID >> a[i].name >> a[i].age;
            i++;
        }
    }
    return(i - 1);
}
void writefile(record* a, int n){
    FILE* fp;
    if ((fp.open("sortedemponage.txt", ios::out)) != nullptr){
        for (int i = 0; i < n; i++) {
            cout << a[i].ID << a[i].name << a[i].age << endl;
        }
    }
}
void merge(record* a, int l, int m, int n){
    record c[10]; int i, j, k;
    i = l;
    j = m + 1;
    k = 0;
    while (i <= m && j <= n){
        if (a[i].age < a[j].age){
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= m){
        c[k] = a[i];
        i++;
        k++;
    }
    while (j <= n){
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = l, j = 0; i <= n; i++, j++) {
        a[i] = c[j];
    }
}
void mergeSort(record* a, int i, int j){
    int k = 0;
    if (i < j){
        k = (i + j) / 2;
        mergeSort(a, i, k);
        mergeSort(a, k + 1, j);
        merge(a, i, k, j);
    }
}
void quick(record* a, int b, int c){
    record temp; int piv, d, e;
    bool pivot_places = false;
    d = b;
    e = c;
    piv = b;
    if (b >= c) {
        return;
    } 
    while (pivot_places == false){
        while (a[piv].age <= a[e].age && piv != e) {
            e--;
        }
        if (piv == e) {
            pivot_places = true;
        }
        if (a[piv].age > a[e].age){
            temp = a[piv];
            a[piv] = a[e];
            a[e] = temp;
            piv = e;
        }
        while (a[piv].age >= a[d].age && piv != d) {
            d++;
        }
        if (piv == d) {
            pivot_places = true;
        }
        if (a[piv].age < a[d].age){
            temp = a[piv];
            a[piv] = a[d];
            a[d] = temp;
            piv = d;
        }
    }
    quick(a, b, piv - 1);
    quick(a, piv + 1, c);
}