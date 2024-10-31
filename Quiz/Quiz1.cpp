#include <iostream>
using namespace std;

void hitungEK(float massa, float kecepatan) {
    float Ek = 0.5 * massa * (kecepatan * kecepatan);
    cout << "Energi Kinetik: " << Ek << " Joule";
}

int main() {
    float sepeda_gram, andika_kg, kecepatan;

    cout << "massa sepeda (gram): ";
    cin >> sepeda_gram;
    cout << "massa andika (kg): ";
    cin >> andika_kg;
    cout << "kecepatan mengendara (m/s): ";
    cin >> kecepatan;

    float massatotal_kg = (sepeda_gram / 1000) + andika_kg;

    hitungEK(massatotal_kg, kecepatan);

    return 0;
}