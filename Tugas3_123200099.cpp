#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    string user, pass;
    int pilih;
    float h1, uts1, uas1, h2, uts2, uas2, hasil1, hasil2;
    char pilihan;
    do{ system("cls");
    cout << "Login akun =========="<<endl;
    cout << "Username        : ";cin >> user;
    cout << "Password        : ";cin >> pass;
    if(user == "123200099" && pass == "qwerty"){
        cout << "====================="<<endl;
        cout << "Login berhasil!"<<endl<<endl;
        cout << "Input Nilai Mata Kuliah"<<endl;
        cout << "1. Algoritma dan Pemrograman"<<endl;
        cout << "2. Kalkulus"<<endl;
        cout << "Pilih : ";cin >> pilih;
        switch (pilih){
            case 1:
                cout << "Nilai Harian\t: ";cin >> h1;
                cout << "Nilai UTS\t: ";cin >> uts1;
                cout << "Nilai UAS\t: ";cin >> uas1;
                hasil1 = (h1+uts1+uas1)/3;
                if(hasil1 >= 80){
                    cout << "Anda lulus Algoritma dan Pemrograman dengan nilai "<<hasil1<<endl<<endl;

                }else {
                    cout << "Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<hasil1<<endl<<endl;
                } break;
            case 2:
                cout << "Nilai Harian\t: ";cin >> h2;
                cout << "Nilai UTS\t: ";cin >> uts2;
                cout << "Nilai UAS\t: ";cin >> uas2;
                hasil2 = (h2+uts2+uas2)/3;
                if(hasil1 >= 80){
                    cout << "Anda lulus Kalkulus dengan nilai "<<hasil2<<endl<<endl;
                }else {
                    cout << "Anda tidak lulus Kalkulus dengan nilai "<<hasil2<<endl<<endl;
                } break;
            default:
                cout << "Input anda salah!"<<endl<<endl<<endl;
                cout << "Coba lagi (Y/N) ? "; cin>>pilihan;
        }
    }else if(user != "123200099" && pass == "qwerty"){
        cout << "====================="<<endl<<endl;
        cout << "Username anda salah!"<<endl<<endl<<endl;
        cout << "Coba lagi (Y/N) ? "; cin>>pilihan;
    }else if(user == "123200099" && pass != "qwerty"){
        cout << "====================="<<endl<<endl;
        cout << "Username anda salah!"<<endl<<endl<<endl;
        cout << "Coba lagi (Y/N) ? "; cin>>pilihan;
    }else {
        cout << "====================="<<endl<<endl;
        cout << "Username dan Password anda salah!"<<endl<<endl<<endl;
        cout << "Coba lagi (Y/N) ? "; cin>>pilihan;
    }
    }while(pilihan == 'Y' || pilihan == 'y');
}
