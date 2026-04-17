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
    cout << "\n===== Input Data Array =====\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << i + 1 << " = ";
        cin >> element[i];
    }
}

void BubbleSortArray()
{
    int pass = 1;

    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= nPanjang - 1);
}

void display()
{
    cout << "\n===== Array Setelah Sorting =====\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << element[i];
        if (i < nPanjang - 1)
            cout << " -> ";
    }

    cout << endl;
}

void binarySearch()
{
    char ulang;

    do
    {
        cout << "\n===== Binary Search =====\n";
        cout << "Masukkan elemen yang dicari: ";
        cin >> x;

        int low = 0;
        int high = nPanjang - 1;
        bool ditemukan = false;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (element[mid] == x)
            {
                cout << "[✓] Elemen " << x << " ditemukan pada indeks " << mid << endl;
                ditemukan = true;
                break;
            }
            else if (x < element[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (!ditemukan)
        {
            cout << "[X] Elemen " << x << " tidak ditemukan.\n";
        }

        cout << "Cari lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');
}