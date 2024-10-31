#include <iostream>
#include <iomanip>
using namespace std;


void main() {
    float apel_kg, jeruk_kg, semangka_kg;
    const float hrg_apel_kg = 24000;
    const float hrg_jeruk_kg = 16250;
    const float hrg_semangka_kg = 8000;

    cout << "masukkan berat apel (kg): ";
    cin >> apel_kg;
    cout << "masukkan berat jeruk (kg): ";
    cin >> jeruk_kg;
    cout << "masukkan berat semangka (kg): ";
    cin >> semangka_kg;

    float beratTotal = apel_kg + jeruk_kg + semangka_kg;

    float hargaTotal = (apel_kg * hrg_apel_kg) + (jeruk_kg * hrg_jeruk_kg) + (semangka_kg * hrg_semangka_kg);

    float diskon = 0;
    if (beratTotal > 10) {
        diskon = 0.05;
    }
    else if (beratTotal > 8) {
        diskon = 0.02;
    }

    float harga_diskon = hargaTotal * diskon;
    float hargaTotalDiskon = hargaTotal - harga_diskon;

    cout << fixed << setprecision(2);
    cout << "harga yang harus dibayar okarun: Rp " << hargaTotalDiskon;

}