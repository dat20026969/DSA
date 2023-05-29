#include "b31.h"
using namespace std;
int main() {
	char a[10000];
	cout << "Nhap chuoi chu: " << endl;
	cin.getline(a, 30);
	daoNguocStack(a);
	cout << "sau khi dao nguoc, sap xep lai, chuoi chu moi la`: " << a;
	return 0;
}