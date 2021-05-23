#ifndef PENGELOLAJUMLAHKLIK_H
#define PENGELOLAJUMLAHKLIK_H
#include <fstream>
#include <iostream>

using namespace std;

class PengelolaJumlahKlik
{
private:
    int jmlKlik;

public:
    PengelolaJumlahKlik(){
        string jumlahKlik;
        ifstream MyReadFile("klik.txt");
        while(getline(MyReadFile, jumlahKlik)) {
            jmlKlik = stoi(jumlahKlik);
        }
        MyReadFile.close();
    }

    void tambahKlik() {
        jmlKlik += 1;
        ofstream MyFile("klik.txt");
        MyFile<<jmlKlik;
        MyFile.close();
    }

    int getJmlKlik() {
        return jmlKlik;
    }

    void reset() {
        jmlKlik = 0;
        ofstream MyFile("klik.txt");
        MyFile<<"0";
        MyFile.close();
    }

    void kurang() {
        jmlKlik -= 1;
        ofstream MyFile("klik.txt");
        MyFile<<jmlKlik;
        MyFile.close();
    }
};

#endif // PENGELOLAJUMLAHKLIK_H
