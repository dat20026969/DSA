#include "b1.h"
int main(){
	fstream f("input.txt", ios::in);
	if (f.fail()) {
		cout << "Failed to open this file!!!!" << endl;
	}
	while (!f.eof()) {
		Tree Tr;
		Tr = NULL;
		family* p = NULL;
		item temp;
		Tr = createBinTree(temp);
		cout << "Duyet cay theo thu tu giua: " << endl;
		preOrder(Tr);
		puts("");
		cout << "Duyet cay theo thu tu truoc:" << endl;
		preOrder(Tr);
		puts("");
		cout << "Duyet cay theo thu tu sau: " << endl;
		inOrder(Tr);
	}
	f.close();
	return 0;
}
