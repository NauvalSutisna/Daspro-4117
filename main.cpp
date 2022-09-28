#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    // Nomor 1
    int a;

    cout << "Input bilangan genap antara 25 - 50 = ";
    cin >> a;

    if (a % 2 == 0 && 25<a && a<50){
        cout << "Bilangan ini sesuai";
    }

    else{
        cout << "Bilangan ini tidak sesuai";
    }


    // Nomor 2

    int b;

    cout << "\nBilangan Ganjil antara lebih dari 13 atau kurang dari 5 = ";
    cin >> b;

    if (b % 2 == 1 || b>13 && b<5){
        cout << "Bilangan ini sesuai";
    }

    else {
        cout << "Bilangan ini tidak sesuai";
    }


    // Nomor 3

    int c;

    cout << "\nBilangan bulat antara 25-50 atau bilangan ganjil antara 3-15 = ";
    cin >> c;

    if (25 <= c && c <= 50 || (3 <= c && c <= 15 && c % 2 == 1)){
        cout << "Bilangan ini sesuai";
    }

    else {
        cout << "Bilangan ini tidak sesuai" << endl;
    }


    //tugas pertemuan 7
    int s;

    string  p1 = "Teknik Informatika";
    string  p2 = "Sistem Informasi";
    string  p3 = "DKV" ;
    cout << "\nPilih Jurusan Anda" << endl;
    cout << "1. " << p1 << endl;
    cout << "2. " << p2 << endl;
    cout << "3. " << p3 << endl;
    cout << "Jawaban Anda : ";
    cin >> s;

    if (s == 1){
        cout << "Jurusan Yang Anda pilih : " << p1 << endl;
    }

    if (s == 2){
        cout << "Jurusan Yang Anda pilih : " << p2 << endl;
    }

    if (s == 3){
        cout << "Jurusan Yang Anda pilih : " << p3 << endl;
    }

    if (s < 0 || s > 3){
        cout << "Pilihan anda tidak ada dilist.";
    }

    return 0;
}
