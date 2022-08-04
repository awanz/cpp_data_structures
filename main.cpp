#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int globalVariable = 1;
typedef struct{
    int angka;
}Matematika;

int main()
{
    Matematika Mtk;

    // akses variable local dan global
    int localVariable = 2;
    cout << globalVariable << localVariable << endl;
    getch();

    // mengetahui ukuran variable
    char variable;
    variable = 'a';
    cout << sizeof(variable) << endl;

    // mengakses isian berdasarkan index
    char nama[] = "awan";
    cout << nama[3] << endl;

    // mengetahui panjang variable
    cout << "length string is " << strlen(nama) << endl;

    // copy isian variable ke variable lain
    char namaBaru[5];
    strcpy(namaBaru, nama);
    cout << namaBaru << endl;

    // membandingkan 2 string, jika sama akan mengeluarkan 0
    char aku[] = "awan";
    cout << strcmp(nama, aku) << endl;

    // struct
    struct vNilai {
        int UTS;
        int UAS;
        int kuis;
        int tugas;
    }nilai;
    nilai.UTS = 97;
    nilai.UAS = 98;
    nilai.kuis = 99;
    nilai.tugas = 100;
    cout << nilai.UTS << endl;

    // typedef
    Mtk.angka = 15;
    cout << "Angka: " << Mtk.angka << endl;

    return 0;
}
