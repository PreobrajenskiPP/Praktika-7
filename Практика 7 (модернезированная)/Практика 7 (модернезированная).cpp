/*
Вариант 0

Актуальные версии моих работ также можно посмотреть по ссылке (по мере возможности буду стараться совершенствовать решения):
https://drive.google.com/drive/folders/1I4RN2DFhiXigC-DgHR0U69RtWTaGcBZH?usp=sharing
*/

#include <iostream>
#include <windows.h>
#include "mishka.h"
using namespace std;



int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int bofer, denNed;
    char racionZ[21], racionO[21], racionU[21];
    class Mishka rusMiska1(2.5, 700);//Передача в конструктор класса роста и веса объекта rusMiska1
    //rusMiska1.vozrast = 37;
    //(rusMiska.pVozrast) = &rusMiska.vozrast;

    cout << "\nВведите возраст Вашего медведя: "; cin >> bofer;  rusMiska1.setVozrast(bofer);

    cout << "\nВведите номер дня недели (Пн - 1, Вт - 2...Вс - 7), в который у медведя нетипичный рацион: "; cin >> denNed; denNed--;
    cout << "\nЧто мишка кушает на завтрак? : "; cin >> racionZ;
    cout << "\nЧто мишка кушает на обед? : "; cin >> racionO;
    cout << "\nЧто мишка кушает на ужин? : "; cin >> racionU; cout << "\n\n";



    rusMiska1.izmRaciona(denNed, racionZ, racionO, racionU);


    //cout << "На завтрак: " << menuNed[2].zavtrak << "\n";

    rusMiska1.vivodRacionaMishki();


    cout << "\n\n\t\tОсновные данные нашего мишки:\n";
    printf_s("\nВозраст русского медведя: %d (лет)", rusMiska1.getVozrast());

    printf_s("\nЦвет русского медведя: %s", (rusMiska1.massUkaz[0].pCvet));

    printf_s("\nРост русского медведя: %.2f (м)", *(rusMiska1.massUkaz[0].pRost));
    printf_s("\nКоэффициент ожирения русского медведя: %.2f", *(rusMiska1.massUkaz[0].pKoefOgir));

    //printf_s("\n----------------->>>>>>>>>>>>>>>>>>>: %s", rusMiska1.massUkaz[0].pMenuNed);

}