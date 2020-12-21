#include <iostream>
using namespace std;
float rata(float a, float b){
    float R = a/b;
    return R;
}
int main(){
    int n, gede, beda, cilik;
    float jumlah = 0;
    cout<<"Masukkan banyak angka : ";cin>>n;
    int angka[n], selisih[n];
    for(int i=0; i<n; i++){
        cout<<"Angka ke-"<<i+1<<" : ";cin>>angka[i];
        jumlah += angka[i];
    }
    for(int i=0; i<n-1; i++){
        selisih[i] = angka[i+1] - angka[i];
        if(selisih[i] < 0){
            selisih[i] = -selisih[i];
        }
    }
    gede = angka[0];
    cilik = angka[0];
    beda = selisih[0];
    cout<<"\n\n_____Hasil_____"<<endl;
    cout<<"Deret\t\t: ";
    for(int i=0; i<n; i++){
        cout<<angka[i]<<" ";
        if(angka[i] > gede){
            gede = angka[i];
        }
        if(angka[i] < cilik){
            cilik = angka[i];
        }
    }
    for(int i=0; i<n-1; i++){
        if(selisih[i] > beda){
            beda = selisih[i];
        }
    }
    cout<<"\nMaksimum\t: "<<gede<<endl;
    cout<<"Minimum\t\t: "<<cilik<<endl;
    cout<<"Rata-rata\t: "<<rata(jumlah, n)<<endl;
    cout<<"Selisih Max\t: "<<beda<<endl;
}
