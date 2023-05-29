#ifndef _BAI18_H_
#define _BAI18_H_
struct Student {
    char fullname[50];
    int age;
    char address;
};
void readbinfile(struct Student& list, string const filename);
void display(struct Student sv);




#endif
