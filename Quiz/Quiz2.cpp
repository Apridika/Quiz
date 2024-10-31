#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    float berat_apel, berat_jeruk, berat_semangka;
    const float harga_apel_per_kg = 24000;
    const float harga_jeruk_per_kg = 16250;
    const float harga_semangka_per_kg = 8000;

    // Input berat masing-masing buah
    cout << "Masukkan berat apel (kg): ";
    cin >> berat_apel;
    cout << "Masukkan berat jeruk (kg): ";
    cin >> berat_jeruk;
    cout << "Masukkan berat semangka (kg): ";
    cin >> berat_semangka;

    // Menghitung total berat
    float total_berat = berat_apel + berat_jeruk + berat_semangka;

    // Menghitung harga total tanpa diskon
    float total_harga = (berat_apel * harga_apel_per_kg) + (berat_jeruk * harga_jeruk_per_kg) + (berat_semangka * harga_semangka_per_kg);

    // Menentukan diskon berdasarkan total berat
    float diskon = 0;
    if (total_berat > 10) {
        diskon = 0.05; // Diskon 5%
    }
    else if (total_berat > 8) {
        diskon = 0.02; // Diskon 2%
    }

    // Menghitung total harga setelah diskon
    float total_harga_setelah_diskon = total_harga * (1 - diskon);

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "Total yang harus dibayar Okarun: Rp " << total_harga_setelah_diskon << endl;

    return 0;
}