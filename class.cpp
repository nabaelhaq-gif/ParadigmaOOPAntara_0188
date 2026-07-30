#include <iostream>
using namespace std;

class Mahasiswa{ //blue print atau cetakan
    public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs; //pembuatan object
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90.5;

    Mahasiswa mhs1;
    mhs1.nim = 2022;
    mhs1.nama = "Naya";
    mhs1.nilai = 80.5;

    mhs.printData();
    mhs1.printData();
}