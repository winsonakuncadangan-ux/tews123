#include <iostream>
#include <string>
using namespace std;

int main() {
    int rows = 5;
    while (rows > 0) {
        cout << string(rows, ' ') + string(5 - (rows - 1), '*') << endl;
        rows -= 1;
    }
    return 0;
}
