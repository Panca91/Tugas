#include <iostream>
using namespace std;
int main()
{
    unsigned int p,a,b,y=0,z=1;
    cout << "===================================="<<endl;
    cout << "||    Perkalian & Perpangkatan    ||"<<endl;
    cout << "===================================="<<endl;
    cout << "1. Perkalian"<<endl;
    cout << "2. Perpangkatan"<<endl;
    cout << "Mau pilih 1 atau 2 ? ";cin >> p;

    switch(p){
        case 1 :
            cout << "Masukkan nilai N : ";cin >> a;
            cout << "Masukkan nilai M : ";cin >> b;
            cout << "\n------------------------------------"<<endl<<endl;
            cout << "Hasil "<<a<<" x "<<b<<endl;
            for(int i=1; i < b; i++){
                cout << a << " + ";
            }cout << a << " = ";
            for(int i=1; i<=b; i++){
                y = y + a;
            }
            cout << y <<endl<<endl;
        break;
        case 2 :
            cout << "Masukkan nilai N : ";cin >> a;
            cout << "Masukkan nilai M : ";cin >> b;
            cout << "\n------------------------------------"<<endl<<endl;
            cout << "Hasil "<<a<<" ^ "<<b<<endl;
            for(int i=1; i < b; i++){
                cout << a << " x ";
            }cout << a << " = ";
            for(int i=1; i <= b; i++){
                z = z * a;
            }cout << z <<endl<<endl;
        break;
        default :
            cout << "System Error 404"<<endl<<endl;
        break;
    }
    cout << "------------------------------------"<<endl<<endl;
    cout << "Terima kasih :)"<<endl;
    return 0;
}
