#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput() {
    cout << "Masukkan Nilai luas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas() {
    return 0.5 * alas * tinggi;
}

double hitungLuas2(double a, double t) {
   return 0.5 * a * t; 
}
    


void procedurOutput() {
    cout << "luas segitiga = " << hitungLuas() << endl;
}

void procedurOutput2() {
    cout << "luas segitiga = " << hitungLuas2(alas, tinggi) << endl;
}
int main() {
    procedurInput();
    procedurOutput();
    procedurOutput2();

}

