// Judul : TUGAS 13 ENUM
// NAMA  : RIZQI ADITYA
// NIM   : A11.2022.14411
// KELAS : A11.4211
#include <iostream>

//Kamus :
enum class Weather {
    SUNNY,
    RAINY,
    CLOUDY,
    WINDY
};

enum class VehicleGear {
    PARK,
    REVERSE,
    NEUTRAL,
    DRIVE,
    SECOND_GEAR,
    FIRST_GEAR
};

enum class Grade {
    A,
    B_PLUS,
    B,
    C_PLUS,
    C,
    D,
    F
};

// Deskripsi :
int main() {
    Weather todayWeather = Weather::SUNNY;
    VehicleGear currentGear = VehicleGear::NEUTRAL;
    Grade myGrade = Grade::A;

    // Contoh penggunaan Enum
    std::cout << "Cuaca hari ini: ";
    switch (todayWeather) {
        case Weather::SUNNY:
            std::cout << "Cerah\n";
            break;
        case Weather::RAINY:
            std::cout << "Hujan\n";
            break;
        case Weather::CLOUDY:
            std::cout << "Berawan\n";
            break;
        case Weather::WINDY:
            std::cout << "Berangin\n";
            break;
    }

    std::cout << "Gigi saat ini: ";
    switch (currentGear) {
        case VehicleGear::PARK:
            std::cout << "Parkir\n";
            break;
        case VehicleGear::REVERSE:
            std::cout << "Mundur\n";
            break;
        case VehicleGear::NEUTRAL:
            std::cout << "Netral\n";
            break;
        case VehicleGear::DRIVE:
            std::cout << "Maju\n";
            break;
        case VehicleGear::SECOND_GEAR:
            std::cout << "Gigi 2\n";
            break;
        case VehicleGear::FIRST_GEAR:
            std::cout << "Gigi 1\n";
            break;
    }

    std::cout << "Nilai saya: ";
    switch (myGrade) {
        case Grade::A:
            std::cout << "A\n";
            break;
        case Grade::B_PLUS:
            std::cout << "B+\n";
            break;
        case Grade::B:
            std::cout << "B\n";
            break;
        case Grade::C_PLUS:
            std::cout << "C+\n";
            break;
        case Grade::C:
            std::cout << "C\n";
            break;
        case Grade::D:
            std::cout << "D\n";
            break;
        case Grade::F:
            std::cout << "F\n";
            break;
    }

    return 0;
}
