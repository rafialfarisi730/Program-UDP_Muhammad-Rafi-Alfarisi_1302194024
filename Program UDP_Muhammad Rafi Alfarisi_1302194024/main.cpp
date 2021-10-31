#include <iostream>
#include "UDP.h"

using namespace std;

int main()
{
    char x[20];

    cout << "Nama  : Muhammad Rafi Alfarisi" << endl;
    cout << "NIM   : 1302194024" << endl;
    cout << "Kelas : SE-43-03" << endl;
    cout << endl;

    cout << "---------------Program UDP----------------" << endl;
    cout << "Masukkan UDP Header: ";
    cin >> x;
    cout << endl;
    cout << "Hasilnya : " << endl;
    scNumber(x);
    desNumber(x);
    totLength(x);
    directed(x);
}
