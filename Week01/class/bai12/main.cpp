#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "bai12.h"
using namespace std;
int main() {
    char a[200];
    fflush(stdin);
    fgets(a, 200, stdin);
    int dem = 0;
    while (a[dem] != '\0')
        dem++;
    cout << "So luong ki tu la: " << dem << endl;

    return 0;
}