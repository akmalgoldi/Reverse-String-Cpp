#include <iostream>
#include <string>

using namespace std;

string balikString(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string nama, nim, umur, asal;
    
    cout << "Masukkan nama: ";
    getline(cin, nama);
    
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    
    cout << "Masukkan umur: ";
    getline(cin, umur);
    
    cout << "Masukkan asal daerah: ";
    getline(cin, asal);

    cout << "\nHasil pembalikan string:\n";
    cout << "Nama dibalik: " << balikString(nama) << endl;
    cout << "NIM dibalik: " << balikString(nim) << endl;
    cout << "Umur dibalik: " << balikString(umur) << endl;
    cout << "Asal daerah dibalik: " << balikString(asal) << endl;

    return 0;
}
