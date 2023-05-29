#include "b32.h"
using namespace std;
int main() {
	int a[1000], n, step, rear, nguyen;//n luc nay cung la kich thuoc cua mang so tu nhien.
	int front = 0;
	cout << "Nhap so phan tu trong mang: " << endl;
	cin >> n;
	addArray(a, n);
	cout << "Input the number of steps: " << endl;
	cin >> step;
	cout << "Nhap phan tu se duoc them o lan tiep theo: " << endl;
	cin >> rear;
	for (int i = 0; i < step; i++) {
		nguyen = chooseFront(a, front);
		addRear(a, nguyen, rear, n);
		removeFront(a, front, rear);
	}
	for (int i = front; i < rear; i++) {
		cout << a[i];
	}
	cout << endl;
	return 0;
}