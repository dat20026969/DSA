#include "b44.h"
int main(){
    insertNode(5);
    insertNode(4);
    insertNode(10);
    insertNode(8);
    insertNode(7);
    cout << "Danh sach luc dau: " << endl;
    print();
    insertionSort();
    cout << "Sau khi sort, danh sach luc sau: " << endl;
    print();
    return 0;
}