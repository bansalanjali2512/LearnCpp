#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 2; i++) {
        for(int i = 0; i < 3; i++) {
            for(int i = 0; i < 4; i++) {
                cout << i << " ";
            }
            cout << "\n";
        }
        cout << "\n\n";
    }
    return 0;
}
