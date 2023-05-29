#include "b1.h"
void initial(singleList*& list) {
	list = new singleList;
	list->pHead = NULL;
}
void createList(singleList& n) {
	n.pHead = n.pTail = NULL;
}
void inputStudent(SINHVIEN* sv) {
    SINHVIEN* sv = new SINHVIEN;
    cout << "Nhap MSSV:";
    cin >> sv->MSSV;
    cin.ignore();
    cout << "Nhap ho va ten SV:";
    fflush(stdin);
    getline(cin, sv->TenSV);
    cout << "Nhap Diem trung binh cua SV: ";
    cin >> sv->DTB;
}
node1* createNode(SINHVIEN *sv) {
	SINHVIEN* sv = new SINHVIEN;
	inputStudent(sv);
	node1* p = new node1;
	if (p == NULL) {
		cout << "RAM is not enough to create more." << endl;
		return 0;
	}
	p->data = sv;
	p->link = NULL;
	return p;
}
void insertLast(singleList*& list, SINHVIEN* sv){
	NODE* pNode = createNode(sv);
	if (list->pHead == NULL){
		list->pHead = pNode;
	}
	else{
		node1* pTemp = list->pHead;
		while (pTemp->pNext != NULL)
		{
			pTemp = pTemp->pNext;
		}
		pTemp->pNext = pNode;
	}
}
void show(SINHVIEN l) {
	for (node1* k = l.pHead; k != NULL; k = k->link) {
		cout << "MSSV : " << k->data->MSSV << endl;
		cout << "Ten  : " << k->data->TenSV << endl;
		cout << "DTB: " << k->data->DTB << endl;
		cout << "==============================SV================\n";
	}
}
void showNode(node1* k) {
	cout << "==============================SV================\n";
	cout << "MSSV : " << k->data->MSSV << endl;
	cout << "Ten  : " << k->data->TenSV << endl;
	cout << "DTB :" << k->data->DTB << endl;
}
void sortList(singleList*& list){
	for (node1* pTmp = list->pHead; pTmp != NULL; pTmp = pTmp->pNext){
		for (node1* pTmp2 = pTmp->pNext; pTmp2 != NULL; pTmp2 = pTmp2->pNext){
			SINHVIEN* svTemp = pTemp->data;
			SINHVIEN* svTemp2 = pTemp2->data;
			if (svTemp2->mas < svTemp->mas){
				int ma = svTemp->ma;
				char ten[150];
				strcpy(ten, svTemp->TenSV);
				svTmp->ma = svTemp2->mas;
				strcpy(svTemp->ten, svTemp2->ten);
				svTmp2->mas = mas;
				strcpy(svTemp2->TenSV, TenSV);
			}
		}
	}
}
void deleteSinhVien(SINHVIEN& l) {
	string del;
	cin.ignore();
	cout << "Nhap Ma So SV hoac Ten SV Can Xoa :" << endl;
	fflush(stdin);
	getline(cin, del);
	node1* g = new PNODE;
	if (del.compare(l.pHead->data->name) == 0 && l.pHead->link == NULL) {
		l.pHead = NULL;
	}
	else {
		for (PNODE* k = l.pHead; k != NULL; k = k->link) {
			if (del.compare(k->data->name) == 0) {
				g->link = k->link;
				k = g;
			}
			g = k;
		}
	}
}