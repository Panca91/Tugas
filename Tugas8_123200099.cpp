#include <iostream>
#define phi 3.14
using namespace std;
float luas(float r){
    float L = phi*r*r;
    return L;
}
float keliling(float r){
    float K = phi*2*r;
    return K;
}
float volume(float r, float t){
    float V = phi*r*r*t;
    return V;
}
int main(){
    char ulang;
    int pilih;
    float r, t;
    do {
    cout << "Hitung Lingkaran ==========" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Keliling Lingkaran" << endl;
    cout << "3. Volume Tabung" << endl;
    cout << "Pilih: "; cin >> pilih;
    switch(pilih){
    case 1 :
        cout<<"Jari - jari\t: "; cin>>r;
        cout<<"Luas lingkaran adalah "<<luas(r)<<endl;
        cout<<"Ulangi program? (y/n) ";cin>>ulang;
        cout<<endl;
        break;
    case 2 :
        cout<<"Jari - jari\t: "; cin>>r;
        cout<<"Keliling lingkaran adalah "<<keliling(r)<<endl;
        cout<<"Ulangi program? (y/n) ";cin>>ulang;
        cout<<endl;
        break;
    case 3 :
        cout<<"Jari - jari\t: "; cin>>r;
        cout<<"Tinggi\t\t: ";cin>>t;
        cout<<"Volume tabung adalah "<<volume(r, t)<<endl;
        cout<<"Ulangi program? (y/n) ";cin>>ulang;
        cout<<endl;
    }
    }while(ulang == 'y');
    cout << "Program selesai, Terima kasih :)"<<endl;
	return 0;
}
