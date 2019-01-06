#include <iostream>

using namespace std;

int main()
{
    cout << " ___________________________ " << endl;
    cout << "|                           |" << endl;
    cout << "|    Program Hitung Angka   |" << endl;
    cout << "|___________________________|" << endl << endl;
    // Penambahan//
    cout << "Penambahan (+)" << endl;
    int a,b;
    cout << "Masukan angka pertama                           : "; cin >> a;
    cout << "Masukan angka yang akan di tambah angka pertama : "; cin >> b;
    cout << a << " + " << b << " = " << a+b << endl << endl;
    //Pengurangan//
    cout << "Pengurangan (-)" << endl;
    cout << "Masukan angka pertama                            : "; cin >> a;
    cout << "Masukan angka yang akan di kurangi angka pertama : "; cin >> b;
    cout << a << " - " << b << " = " << a-b << endl << endl;
    //Perkalian//
    cout << "Perkalian (*)" << endl;
    cout << "Masukan angka pertama                         : "; cin >> a;
    cout << "Masukan angka yang akan di kali angka pertama : "; cin >> b;
    cout << a << " * " << b << " = " << a*b << endl << endl;
    //Pembagian//
    cout << "Pembagian (/)" << endl;
    cout << "Masukan angka pertama                         : "; cin >> a;
    cout << "Masukan angka yang akan di bagi angka pertama : "; cin >> b;
    cout << a << " / " << b << " = " << a/b << endl << endl;





    return 0;
}
