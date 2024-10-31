#include <iostream>
using namespace std;

//Menghitung Kecepatan
void hitungEK(float massa, float kecepatan) {
    float Ek = 0.5 * massa * (kecepatan * kecepatan);
    cout << "Energi Kinetik: " << Ek << " Joule";
}

int main() {
    float massa_sepeda_gram, massa_andika_kg, kecepatan;

    // Input massa dan kecepatan dari pengguna
    cout << "Masukkan massa sepeda dalam gram: ";
    cin >> massa_sepeda_gram;
    cout << "Masukkan massa Andika dalam kg: ";
    cin >> massa_andika_kg;
    cout << "Masukkan kecepatan dalam m/s: ";
    cin >> kecepatan;

    // Mengubah massa sepeda ke kg dan menjumlahkannya dengan massa Andika
    float massa_total = (massa_sepeda_gram / 1000) + massa_andika_kg;

    // Memanggil fungsi hitungEK
    hitungEK(massa_total, kecepatan);

    return 0;
}