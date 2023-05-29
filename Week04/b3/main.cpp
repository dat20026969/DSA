#include "b3.h"
int main() {
	int a[1000], b[1000], c[2001], n1, n2, x;
	nhapMang(a, n1);
	nhapMang(b, n2);
	quickSortDescendingOrder(a, 0, n1 - 1);
	quickSortIncreasingOrder(b, 0, n2 - 1);
	gopHaiMang(a, n1, b, n2, c, x);
	quickSortDescendingOrder(c, 0, x - 1);
	return 0;
}