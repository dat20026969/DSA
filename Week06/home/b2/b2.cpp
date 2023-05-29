#include "b2.h"

void init(link& root) {
	root = nullptr;
}

void insertFirst(link& root, infor inf) {
	link t = new Node;
	t->inf.id = inf.id;
	t->inf.name = inf.name;
	t->inf.dob.day = inf.dob.day;
	t->inf.dob.month = inf.dob.month;
	t->inf.dob.year = inf.dob.year;
	t->inf.stt = inf.stt;
	t->left = nullptr;
	t->right = nullptr;
	if (root == nullptr) {
		root = t;
	}
	else {
		if (inf.name > root->inf.name) {
			insertFirst(root->right, inf);
		}
		else insertFirst(root->left, inf);
	}
}


void readFile(link& root, int& n){
	ifstream inFile;
	inFile.open("student.data");
	if (inFile.is_open()) {
		inFile >> n;
		while (!inFile.eof()) {
			infor a;
			char t;
			inFile >> inf.id >> inf.name >> inf.dob.day >> t >> inf.dob.month >> t >> inf.dob.year >> inf.stt;
			insertFirst(root, inf);
		}
	}
	inFile.close();
}

void createAndInsert(link& root, int& n) {
	infor inf;
	char tr;
	cout << "Nhap ID sinh vien: ";
	cin >> inf.id;
	cin.ignore(1);
	cout << "Nhap ten sinh vien: ";
	cin >> inf.name;
	cout << "Nhap ngay thang nam sinh (dd/MM/YYYY) (Thi du: 25/03/2002): ";
	cin >> inf.dob.day >> tr >> inf.dob.month >> tr >> inf.dob.year;
	cout << "Nhap status (1 hoac 0) ";
	cin >> inf.stt;
	cin.ignore(1);
	n++;
	insertFirst(root, inf);

}

void print(link root) {
	cout << root->inf.name << endl;
	cout << root->inf.id << endl;
	cout << root->inf.dob.day << "|" << root->inf.dob.month << "|" << root->inf.dob.year << endl;
	cout << root->inf.stt << endl;
	if (root->left != nullptr) {
		cout << root->left;
	}
	if (root->right != nullptr) {
		cout << root->right;
	}
}

int findStudentHCMUS(link root, int id) {
	if (root->inf.id == NULL) {
		return 0;
	}
	if (root->inf.id == id) {
		return 1;
	}
	else if (root->inf.id > id) {
		return findStudentHCMUS(root->left, id);
	}
	else if (root->inf.id < id) {
		return findStudentHCMUS(root->right, id);
	}

}

void findAndReplace(link root, int id) {
	if (root == nullptr) {
		return;
	}
	if (root->inf.id == id) {
		char tr;
		cout << "Ban co muon update info cua sinh vien? (Y/N) ";
		cin >> tr;
		if (tr == 'Y' || t == 'y') {
			int id;
			birthDay dob;
			bool stt;
			char p;
			cout << "Nhap ID sinh vien moi: ";
			cin >> id;
			cout << "Nhap ngay sinh moi (dd/MM/YYYY) (Thi du: 25/03/2002): ";
			cin >> dob.day >> p >> dob.month >> p >> dob.year;
			cout << "Nhap tinh trang tot nghiep (Dau/Rot/...): ";
			cin >> stt;
			root->inf.id = id;
			root->inf.dob.day = dob.day;
			root->inf.dob.month = dob.month;
			root->inf.dob.year = dob.year;
			root->inf.stt = stt;
			return;
		}
	}
	else {
		findAndReplace(root->left, id);
		findAndReplace(root->right, id);
	}
}

void printnLexicographic(link root) {
	if (root->left != nullptr) {
		printnLexicographic(root->left);
	}
	cout << root->inf.name << endl;
	cout << root->inf.id << endl;
	cout << root->inf.dob.day << "/" << root->inf.dob.month << "/" << root->inf.dob.year << endl;
	cout << root->inf.stt << endl;
	if (root->right != nullptr) {
		printnLexicographic(root->right);
	}

}

void printGraduatedOrNot(link root) {
	if (root->inf.stt == true) {
		cout << root->inf.name << endl;
		cout << root->inf.id << endl;
		cout << root->inf.dob.day << "/" << root->inf.dob.month << "/" << root->inf.dob.year << endl;
		cout << root->inf.stt << endl;
	}
	if (root->left != nullptr) {
		printGraduatedOrNot(root->left);
	}
	if (root->right != nullptr) {
		printGraduatedOrNot(root->right);
	}
}