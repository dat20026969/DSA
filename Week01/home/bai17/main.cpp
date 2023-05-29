#include <iostream>
#include <string>
#include <fstream>
#include "bai17.h"
using namespace std;
int main() {
	Student sv;
	fstream f;
	f.open("dulieuSV.dat", ios::out | ios::binary);
	if (f.is_open()) {
		f.write(reinterpret_cast<char*>(&sv), sizeof(Student));
		f.close();
	}
	else {
		cout << "Nothing" << endl;
	}
	return 0;
}