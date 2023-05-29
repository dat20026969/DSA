#include "b2.h"
void readFile() {
	ifstream inFile;
	inFile.open("input.txt");
	int n;
	inFile >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			int t;
			inFile >> t;
			create_record(t);
		}
	}
}