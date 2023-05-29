#include "b33.h"
extern char* que = nullptr;
extern char* sta = nullptr;
extern long int cuoi = -1;
extern long int dau = -1;
extern long int index = 0;
bool emptyQueue() {
	return dau == cuoi;
}
void enqueue(char a) {
	cuoi = cuoi + 1;
	que[cuoi] = a;
}
char front() {
	if (dau == cuoi) {
		cout << "queue rong tui!" << endl;
		return 0;
	}
	dau = dau + 1;
	char giaTri = que[dau];
	return giaTri;
}
bool emptyStack() {
	if (index == 0) {
		return true;
	}
	return false;
}
void push(char a) {
	sta[index++] = a;
}
char toptrending() {
	char a = sta[--index];
	return a;
}
string chuanHoa(string s) {
	string ab;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
			ab += s[i];
		}
	}
	return ab;
}
bool doiXung() {
	while (!emptyStack() || !emptyQueue()) {
		if (toptrending() != front()) {
			return false;
		}
	}
	return true;
}
void processes() {
	string s;
	cout << "Nhap chuoi can kiem tra: " << endl;
	getline(cin, s);
	s = chuanHoa(s);
	que = new char[s.size() + 1];
	sta = new char[s.size() + 1];
	for (int i = 0; i < s.size(); ++i) {
		enqueue(s[i]);
		push(s[i]);
	}
	if (doiXung()) {
		cout << "YES!" << endl;
	}
	else {
		cout << "NO!" << endl;
	}
	delete[]que;
	delete[]sta;
}