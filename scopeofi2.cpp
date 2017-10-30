#include <iostream>
using namespace std;

int main() {
    int i = 10;
    cout << "Inside main: " << i << "\n";
    {
        int i = 20;
        cout << "Inside block: " << i;
    }
    return 0;
}

