#include <iostream>
using namspace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
            break;
        else
            cout << "[!] Jumlah elemen tidak boleh lebih dari 10!\n";
    }
    
}
