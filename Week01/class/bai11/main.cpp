#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "bai11.h"
using namespace std;
int main() {
	ofstream ofstream_disk("File1.txt", ios::out);
	char arr[] = "Hello World";
	ofstream_disk << "Hello World!" << endl;
	ofstream_disk.close();
	return 0;
}



