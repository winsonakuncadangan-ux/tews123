#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nilai = 80;

    switch (nilai / 10)
    {
        case 10: 
        case 9:  
            cout << "Nilai Anda A" << endl;
            break;

        case 8: 
            cout << "Nilai Anda B" << endl;
            break;

        case 7: 
            cout << "Nilai Anda C" << endl;
            break;

        default: 
            cout << "Nilai Anda D" << endl;
            break;
    }

    return 0;
}
