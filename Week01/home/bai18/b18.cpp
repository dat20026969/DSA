#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <random>
#include <iomanip>
#include <vector>
#include <string>
#include "b18.h"
using namespace std;
void readbinfile(struct Student& list, string const filename){
	fstream input(filename, ios::in | ios::binary);
	if (input.is_open()){
		input.seekg(0, ios::end);
		long long sizes = input.tellg();
		input.seekg(0, ios::beg);
		list.n = (sizes / sizeof(Student));
		list.infor = new Student[list.n];
		input.read((char*)list.a, sizes);
	}
	input.close();
}

void display(struct Student sv){
	for (int i = 0; i < sv.n; ++i){
		cout << "Thong tin hoc sinh thu " << i + 1 << ""<<endl;
		cout << "Ho va ten:  " << sv.infor[i].fullname << "\n";
		cout << "Tuoi: " << sv.infor[i].age << "\n";
		cout << "Dia chi: " << sv.infor[i].address << "\n";
	}
}