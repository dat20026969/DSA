#include <iostream>
#include <iomanip>
#include <algorithm>
#include "bai11.h"
#include <ctime>
using namespace std;
int main() {
	int a[1000], b, c, d, n;
	int arraySize = sizeof(a) / sizeof(a[0]);
	cin >> n >> c >> d;
	nhapMang(a, n);
	xuatMang(a, n);
	insertionSort(a, n);
	heapSort(a, n);
	/* ---------------------- */
	cout << "mang da cho la: " << endl;
	xuatMang(a, n);
	mergeSort(a, 0, arraySize-1);
	xuatMang(a, n);
	/* ---------------------- */
	quickSort(a, 0, n - 1);
	xuatMang(a, n);
	clock_t start = clock();
	cout << "Time run: " << (double)(clock()-start) / CLOCKS_PER_SEC << " s" << endl;
	return 0;
}