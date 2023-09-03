#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void game(){
    srand(static_cast<unsigned int>(time(nullptr)));

    // Arvo satunnainen luku väliltä 1-20
    int etsittavaLuku = rand() % 20 + 1;

    int arvaus;
    int yritykset = 0;

    cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 1-20." << endl;

    do {
        cout << "Syötä arvauksesi: ";
        cin >> arvaus;
        yritykset++;

        if (arvaus < etsittavaLuku) {
            cout << "Luku on suurempi." << endl;
        } else if (arvaus > etsittavaLuku) {
            cout << "Luku on pienempi." << endl;
        } else {
            cout << "Onneksi olkoon! Arvasit oikein luvulla " << etsittavaLuku << ". Tarvitsit " << yritykset << " yritystä." << endl;
        }
    } while (arvaus != etsittavaLuku);

}

int main() {
    // Alusta satunnaislukugeneraattori
    game();
    return 0;
}


