#include <iostream>
using namespace std;

double luas, alas, tinggi;

void procedurInput(){
    cout << "Masukkan Nilai luas : ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi : ";
    cin >> tinggi;
}

double hitungLuas() {
    return 0.5 * alas * tinggi;
}

void procedurOutput(){
    cout << "luas segitiga = " << hitungLuas() << endl;
}

int main() {
    procedurInput();
    procedurOutput();

}