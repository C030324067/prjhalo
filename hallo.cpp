#include <iostream>
using namespace std;

int main() {
    char nama[100][20];
    int jumlah;

    cout << "Masukkan jumlah nama yang ingin diproses (maksimal 100): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 100) {
        cout << "Jumlah tidak valid!" << endl;
        return 1;
    }

    cin.ignore(); // penting untuk membersihkan karakter newline

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin.getline(nama[i], 20);
    }

    cout << "\nDaftar Nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << endl;
    }

    return 0;
}