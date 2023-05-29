#include <iostream>
#include <fstream>
#include <map>
#include <set>
#include <random>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include "bai13.h"
using namespace std;
int main() {
    int n;
    n = readfile(employee);
    mergeSort(employee, 0, n - 1);
    writefile(employee, n);
    cout << "-----------------------------------------";
    quick(employee, 0, n - 1);
    writefile(employee, n);
}