#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "bai12.h"
using namespace std;
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}
void evenOddSort(int a[], int n){    
    int b = 0, c = n - 1;
    int k = 0;
    while (b < c){
        while (a[b] % 2 != 0){
            b++;
            k++;
        }        
        while (a[c] % 2 == 0 && b < c) {
            c--;
        }       
        if (b < c) {
            swap(a[b], a[c]);
        }
    }   
    sort(a, a + k, greater<int>());
    sort(a + k, a + n);
}