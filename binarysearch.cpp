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

    cout << "\n=============================\n";
    cout << "     masukkan element array    \n";
    cout << "===============================\n";
    for (int i = 0; i < npanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

void bubblesortarray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= npanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element [j];
                element [j] = element[j + 1];
                element [j + 1] = temp;
            }
        }
        pass++;
    }while (pass <= npanjang - 1);
}

void display()
{
    cout << "\n====================================\n";
    cout << "element array setelah diurutkan (asc) \n";
    cout << "======================================\n";
    for (int j = 0; j < npanjang; j++)
    {
        cout << element [j];
        if (j < npanjang - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
}

void binarysearch()
{
    char ulang ;
    do
    {
        cout << "\n====================================\n";
        cout << "      pencarian binary search         \n";
        cout << "======================================\n";
        cout << "masukkan element yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = npanjang - 1;

        do 
        {
            int mid = (low + high) / 2;
            if (element [mid] == x )
            {
                cout << "\n elemen " << x << "ditemukan pada indeks "<< mid << ".\n";
                return;
            }
            if (x < element [mid])
            {
                high = mid - 1;
            }
            if (x > element[mid])
            {
                low = mid - 1;
            }
        } while (low <= high);
        if (low > high)
        {
            cout << "\n element " << x << "tidak ditemukan dalam array.\n";
        }
        cout << "\ningin mencari lagi? (y/n): ";
        cin >> ulang;
    }while (ulang == 'y' || ulang == 'Y');
}