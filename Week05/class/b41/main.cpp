#include "b41.h"
void menu(){
Stack s;
Init(s);
nhap(s);
xuat(s);
int lc, k;
do {
	cout << "\n*LUA CHON CUA THAY:\n1_Xuat.\n2_Push.\n3_Pop.\n0_Exit.\n_Thay chon ? ";
	cin >> lc;
	switch (lc) {
	case 0: break;
	case 1: xuat(s); break;
	case 2: cout << "Nhap k: " << endl;
		cin >> k;
		Push(s, k);
		break;
	case 3:
		Pop(s);
		break;
	default:
		cout << "Nhap sai, nhap lai!" << endl;
		}
	} 
	while (lc);
}
int main() {
	menu();
	return 0;
}
