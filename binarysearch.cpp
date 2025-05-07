#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10) : ";
        cin >> npanjang;
        if (npanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] jumlah element tidak boleh lebih dari 10. Silahkan coba lagi.\n";

        }
    }
}