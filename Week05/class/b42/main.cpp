#include "b42.h"
int main() {
    queue a;
    int x;
    cin >> x;
    a.enqueue(x);
    a.dequeue();
    cout << "Queue Front : " << (a.front)->data << endl;
    cout << "Queue Rear : " << (a.rear)->data;
    return 0;
}