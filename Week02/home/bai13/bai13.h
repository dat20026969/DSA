#ifndef _BAI13_H_
#define _BAI13_H_
typedef struct employee{
    int ID[10];
    char name[100];
    int age;
}record;
record employee[1000];

int readfile(record* a);
void writefile(record* a, int n);
void merge(record* a, int l, int m, int n);
void mergeSort(record* a, int i, int j);
void quick(record* a, int b, int c);

#endif