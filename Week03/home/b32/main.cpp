#include "b22.h"
using namespace std;
int main() {
	Trie* root = NULL;
	fstream f;
	f.open("input.txt", ios::in);
	string data;
	string line;
	while (!f.eof()) {
		getline(f, line);
		data += line;
	}
	f.close();
	cout << data;
}