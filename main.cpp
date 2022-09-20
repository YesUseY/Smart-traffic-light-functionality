#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    bool S1=0, S2=0, S3=0;
    int c1, c2, c3;
    c1 = rand()%3;
    c2 = rand()%3;
    c3 = rand()%3;
    if (c1>=c2&&c1>=c3) {
        S1=1;
        cout << "Zalia dega PIRMOJI GATVE" << endl;
    }
    else if (c2>=c1&&c2>=c3){
        S2=1;
        cout << "Zalia dega ANTROJI GATVE" << endl;
        }
    else if (c3>=c1&&c3>=c2){
        S3=1;
        cout << "Zalia dega TRECIOJI GATVE" << endl;
    }
    int x=1;
    int y=0;
    while (x>0) {
        y=0;
        while (S1) {
            cout << " Vaziuoja masinos" << endl;
            c1 = c1 + rand()%2;
            c2 = c2 + rand()%2;
            c3 = c3 + rand()%2;
            c1--;
            Sleep(500);
            y++;
            if (y>10||c1<1) {
                cout << endl;
                cout << " Pirmoje Gatveje Isijunge Raudona Sviesa" << endl;
                cout << " Pirmoje Gatveje Laukia Masinu: " << c1 << endl;
                cout << " Antroje Gatveje Laukia Masinu: " << c2 << endl;
                cout << " Trecioje Gatveje Laukia Masinu: " << c3 << endl;
                Sleep(2000);
                if (c2>0) {
                    S1 = 0;
                    S2 = 1;
                    S3 = 0;
                    cout << " Uzsidege Zalia Sviesa Antroje Gatveje" << endl;
                    Sleep(500);
                }
                else if (c3>0) {
                    S1 = 0;
                    S2 = 0;
                    S3 = 1;
                    cout << " Uzsidege Zalia Sviesa Trecioje Gatveje" << endl;
                    Sleep(500);
                }
                else {
                    y=9;
                }
            }
        }


         y=0;
        while (S2) {
            cout << " Vaziuoja masinos" << endl;
            c1 = c1 + rand()%2;
            c2 = c2 + rand()%2;
            c3 = c3 + rand()%2;
            c2--;
            Sleep(500);
            y++;
            if (y>10||c2<1) {
                cout << endl;
                cout << " Antroje Gatveje Isijunge Raudona Sviesa" << endl;
                cout << " Pirmoje Gatveje Laukia Masinu: " << c1 << endl;
                cout << " Antroje Gatveje Laukia Masinu: " << c2 << endl;
                cout << " Trecioje Gatveje Laukia Masinu: " << c3 << endl;
                Sleep(2000);
                if (c3>0) {
                    S1 = 0;
                    S2 = 0;
                    S3 = 1;
                    cout << " Uzsidege Zalia Sviesa Trecioje Gatveje" << endl;
                    Sleep(500);
                }
                else if (c1>0) {
                    S1 = 1;
                    S2 = 0;
                    S3 = 0;
                    cout << " Uzsidege Zalia Sviesa Pirmoje Gatveje" << endl;
                    Sleep(500);
                }
                else {
                    y=9;
                }
            }
        }


        y=0;
        while (S3) {
            cout << " Vaziuoja masinos" << endl;
            c1 = c1 + rand()%2;
            c2 = c2 + rand()%2;
            c3 = c3 + rand()%2;
            c3--;
            Sleep(500);
            y++;
            if (y>10||c3<1) {
                cout << endl;
                cout << " Trecioje Gatveje Isijunge Raudona Sviesa" << endl;
                cout << " Pirmoje Gatveje Laukia Masinu: " << c1 << endl;
                cout << " Antroje Gatveje Laukia Masinu: " << c2 << endl;
                cout << " Trecioje Gatveje Laukia Masinu: " << c3 << endl;
                Sleep(2000);
                if (c1>0) {
                    S1 = 1;
                    S2 = 0;
                    S3 = 0;
                    cout << " Uzsidege Zalia Sviesa Pirmoje Gatveje" << endl;
                    Sleep(500);
                }
                else if (c2>0) {
                    S1 = 0;
                    S2 = 1;
                    S3 = 0;
                    cout << " Uzsidege Zalia Sviesa Antroje Gatveje" << endl;
                    Sleep(500);
                }
                else {
                    y=9;
                }
            }
        }

    }
    cout << c1 << endl;
    return 0;
}
