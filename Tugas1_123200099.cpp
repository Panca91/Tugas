#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string nama, nim;
    float uts, uas, akhir;
    cout << "Nama\t\t: "; getline(cin, nama);
    cout << "NIM\t\t: "; getline(cin, nim);

    cout << "Nilai UTS\t: "; cin >> uts;
    cout << "NIlai UAS\t: "; cin >> uas;
    akhir = (uts + uas)/2;
    cout << "\nHai, nama saya " << nama << ", nim "<<nim;
    cout << "\nNilai akhir saya adalah "<<akhir << endl;
    system("pause"); cout << endl << " " << endl;
}
