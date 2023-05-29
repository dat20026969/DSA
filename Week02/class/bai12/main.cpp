#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include "bai12.h"
using namespace std;
int main() {
	int a[1000], n;
	cout << "Nhap so luong phan tu trong mang: " << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu trong mang: " << endl;
		cin >> a[i];
		cout << a[i] << endl;
	}	
	evenOddSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}