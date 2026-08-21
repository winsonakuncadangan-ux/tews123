#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int i=rows; i>=1; i--)
    {
        cout << string(i, '*') << endl;
    }
    return 0;
}
