//Output Problem 1 : On using pointers

#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int *p, **q, ***r;

    p = &i;
    *p = 15;

    q = &p;
    **q = 20;

    r = &q;
    ***r = ++(*p);

    cout << i << endl;

    return 0;
}
