#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <random>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include "bai14.h"
using namespace std;
int main() {
	int d = 1, di = 0, dj = 0, i = 0, j = 0;
	int m, n;
	int** a;
	cout << "Nhap so dong m va so cot n: "; 
	cin >> m >> n;
	a = new int* [m];
	for (int i = 0; i < m; i++) {
		a[i] = new int[n];
	}
	while (d <= m * n) {
		for (j = dj; j < n - dj - 1 && d <= m * n; j++) {
			a[i][j] = d; d++;
		}
		for (i = di; i < m - di - 1 && d <= m * n; i++) {
			a[i][j] = d; d++;
		}
		for (j = n - dj - 1; j > dj && d <= m * n; j--) { 
			a[i][j] = d; d++;
		}
		for (i = m - di - 1; i > di && d <= m * n; i--) { 
			a[i][j] = d; d++; 
		}
		di++;
		dj++;
		i++;
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(3) << a[i][j];
		}
		cout << endl;
	}
	return 0;
}