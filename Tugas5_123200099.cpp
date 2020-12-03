#include <iostream>
using namespace std;
int main(){
    int pilih, p, l, t, x;
    cout << "Gambar Bangun Datar ===========" << endl;
    cout << "1. Kotak Bolong" << endl;
    cout << "2. Segitiga" << endl;
    cout << "Pilih : "; cin >> pilih;
    cout << endl;
    switch(pilih){
    case 1 :
        cout << "Panjang : "; cin >> p ;
        cout << "Lebar : "; cin >> l;
        for(int a=1; a <= p; a++){
            for(int b=1; b <= l; b++) {
                if((a==1) || (a==p) || (b==1) || (b==l)) {
                    cout<<("* ");
                }else{
                    cout<<("  ");
                }
            }
            cout << endl;
        }
        break;
    case 2 :
        cout << "Tinggi\t: "; cin >> t;
        for(int a=1; a <= t; a++){
            for(int b=1; b <= a; b++){
                if(b == 1){
                    cout << a << " ";
                }else if(b == 2){
                    x = a + (t - 1);
                    cout << x << " ";
                }else if(b >= 3){
                    x = x + (t - b + 1);
                    cout << x << " ";
                }
            }
            cout << endl;
        }
        break;
    }
    cout << endl;
	return 0;
}
