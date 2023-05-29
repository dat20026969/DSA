#include "b2.h"
int main() {
	link rt;
	int n, id;
	cin >> n;
	readFile(rt, n);
	createAndInsert(rt, n);
	print(rt);
	findStudentHCMUS(rt, id);
	findAndReplace(rt, id);
	printnLexicographic(rt);
	printGraduatedOrNot(rt);
	return 0;
}