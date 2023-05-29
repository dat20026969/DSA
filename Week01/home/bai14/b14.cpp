#include <fstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#include <random>
#include <string>
#include "bai14.h"
using namespace std;
void readAndShow(char a1[], char a2[]) {
	ifstream infile1, infile2;
	infile1(a1); infile2(a2);
	int line1 = 0, line2 = 0;
	string str;
	if (infile1.fail()) {
		cout << "File 1 is fail" << endl;
	}
	else if (infile2.fail()) {
		cout << "File 2 is fail!" << endl;
	}
	else {
		while (!infile1.eof()) {
			line1++;
			getline(infile1, str);
		}
		while (!infile2.eof()) {
			line2++;
			getline(infile2, str);
		}

		infile1.close(); infile2.close();
		infile1.open(a1); infile2.open(a2);
		int len1 = max(line1, line2);
		while (len1-- != 0) {
			string s1, s2;
			getline(infile1, s1);
			getline(infile2, s2);
			if (strcmp(s1.c_str(), s2.c_str()) != 0) cout << "< " << s1 << "\n" << "> " << s2 << endl;
		}
	}
}