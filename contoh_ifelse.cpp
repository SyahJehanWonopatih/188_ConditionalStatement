#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
    cout << "Masukkan Nilai luas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}


double hitungLuas2(double a, double t) {
   return 0.5 * a * t; 
}

string ukuranSegitiga(double l) {
   //jika luas > 60 
   if (l > 60) {
         return "besar";
   }
   else{
         return "kecil";
   }
}
    

void procedurOutput2() {
    cout << "luas segitiga = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}
int main() {
    procedurInput();
    
    procedurOutput2();

}