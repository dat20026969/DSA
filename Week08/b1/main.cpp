#include "b1.h"
int main(int argc, char** argv) {
    singleList* list;
    SINHVIEN sv;
    initial(list);
    SINHVIEN* teo = inputStudent(sv);
    addTailToStudent(list, teo);
    SINHVIEN* ty = inputStudent(sv);
    addTailToStudent(list, ty);
    SINHVIEN* bin = inputStudent();
    insertLast(list, bin);
    show(list);
    showNode(list);
    sortList(list);
    cout << "after sorted: " << endl;
    show(list);
    cout << "remove MSSV: " << endl;
    int mas;
    cin >> mas;
    deleteNode(list, mas);
    cout << "after deleted: " << endl;
    show(list);
    return 0;
}