#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;
void randnum();

int main()
{
    int nilai;
    int nl_random;
    srand(time(NULL));


    cout << "Masukan maksimal nilai (10-100): " ;
    cin >> nilai;
    nl_random=rand()%nilai;
    cout << "Nilai random: " << nl_random << endl ;

    if (nilai < 10){
        cout << "Nilai yang dimasukan kurang dari 10" << endl;
    }
    else if (nilai > 100){
        cout << "Nilai yang dimasukan lebih dari 100" << endl;
    }


    int i;
    int nyawa = 3;
    int nl_tebakan;
    for (i=0; i<nyawa; i++){

        cout << "Masukan tebakan: "; cin >> nl_tebakan;
        if (nl_tebakan < nl_random){
            cout << "tebakan terlalu kecil" << endl;
            nyawa--;
            cout << "sisa nyawa: " << nyawa << endl;
        }
        else if (nl_tebakan > nl_random){
            cout << "tebakan terlalu besar" << endl;
            nyawa--;
            cout << "sisa nyawa: " << nyawa  << endl;
        }
        else if (nyawa=0){
            cout << "game over" << endl;
        }

        else if (nl_tebakan == nl_random){
            cout << "jawaban benar" << endl;
            break;
        }

    }


    return 0;
}

