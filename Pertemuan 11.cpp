#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Tugas Daspro Pertemuan 11" << endl;
    cout << "Membuat fibonancci Bilangan terbesar kurang dari 100" << endl;

    int f = 100, q1 = 0, q2 = 1, hasil;
    hasil = q1 + q2;

    while (hasil <= f){
        cout << hasil << "\n";
        q1 = q2;
        q2 = hasil;
        hasil = q1 + q2;
    }
    return 0;
}
