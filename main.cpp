#include <iostream>
using namespace std;
int main()
{
     int p, q, r, s, a, b, c, d, e;
     cout << "Umur Ayah\t: "; cin >> p;
     if(p <= 12){
        a = 15000;
     } else if(p > 12 && p <= 20){
        a = 20000;
     } else if(p > 20){
        a = 30000;
     } else {
        return 0;
     }
     cout << "Umur Ibu\t: "; cin >> q;
     if(q <= 12){
        b = 15000;
     } else if(q > 12 && q <= 20){
        b = 20000;
     } else if(q > 20){
        b = 30000;
     } else {
        return 0;
     }
     cout << "Umur Anak 1\t: "; cin >> r;
     if(r <= 12){
        c = 15000;
     } else if(r > 12 && r <= 20){
        c = 20000;
     } else if(r > 20){
        c = 30000;
     } else {
        return 0;
     }
     cout << "Umur Anak 2\t: "; cin >> s;
     if(s <= 12){
        d = 15000;
     } else if(s > 12 && s <= 20){
        d = 20000;
     } else if(s > 20){
        d = 30000;
     } else {
        return 0;
     }
     cout << "Tagihan satu bulan adalah Rp.";
     cout << 30*(a+b+c+d)<< endl;
     return 0;
}
