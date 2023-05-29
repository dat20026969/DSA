#include <iostream>
#include <string>
#include<conio.h>
#include<stdio.h>
#include <string.h>
#include <fstream>
#include "bai17.h"
using namespace std;
void nhap(Student& sv) {
    cout << "Nhap ten: " << endl;
    fflush(stdin);
    cin >> sv.fullname;
    cout << " Nhap tuoi: " << endl;
    cin >> sv.age;
    cout << "Nhap dia chi: " << endl;
    cin >> sv.address;

}