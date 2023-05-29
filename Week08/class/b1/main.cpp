#include "b1.h"
int main() {
	int a[1000], n, k;
	cin >> n >> k;
	nhapMang(a, n);
	Hash h(k);
	for (int i = 0; i < n; i++) {
		h.insertItem(a[i]);
	}
	h.deleteItem(12);
	h.displayHash();
	/*-----------------------------*/
	HashMap<int, int>* h1 = new HashMap<int, int>;
	h1->insertNode(1, 1);
	h1->insertNode(2, 2);
	h1->insertNode(2, 3);
	h1->display();
	cout << h1->sizeofMap() << endl;
	cout << h1->deleteNode(2) << endl;
	cout << h1->sizeofMap() << endl;
	cout << h1->isEmpty() << endl;
	cout << h1->get(2);
	/*-----------------------------*/
	int hash_table[1000];
	for (int i = 0; i < k; i++) {
		hash_table[i] = -1;
	}
	hashing(hash_table, n, a, k);
	/*-----------------------------*/
	DoubleHash h2;
	for (int i = 0; i < n; i++) {
		h2.insertHash(a[i]);
	}
	h2.search(36); 
	h2.search(100); 
	h2.displayHash1();
	return 0;
}