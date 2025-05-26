#include <iostream>
using namespace std;
int main() {
    char nama[5][20];

    strcpy(nama[0], "febia"); 
    strcpy(nama[0], "risma"); 
    strcpy(nama[0], "nadya"); 
    strcpy(nama[0], "mutiara"); 
    strcpy(nama[0], "dita"); 

    cout << "Daftar Nama:\n";
    for (int i = 0; i < 5; i++){
        cout << "Nama ke-" << i + 1 << ": " << nama[i] << end1;
    }
    return 0;
}
