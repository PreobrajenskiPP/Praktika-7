#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

class Mishka
{
private:
    float rost;
    int ves;

    struct pitanie
    {
        char zavtrak[21];
        char obed[21];
        char uzin[21];

    };


    pitanie menuNed[7];
    void tipichniyRacion()//Первая (из двух) функция в приватной области класса
    {
        for (int i = 0; i < 7; i++)
        {
            menuNed[i] = { "ягоды", "заяц","рыба" };

            //menuNed[i].obed = 'заяц';
            //menuNed[i].uzin = 'рыба';
        }
        cout << "\nТипичный ежедневный рацион медведя подготовлен!\n";
    }
    float stepenOgirenia()//Вторая (из двух) функция в приватной области класса
    {
        return (ves / rost);

    }




public:

    Mishka(float r, int v)
    {
        rost = r; ves = v;
        //cvet = { 'б','у' };
        cout << "\nКонструктор медведя";
        printf_s("\n\n Медведь с ростом %.2f метра и весом %i кг создан\n\n\n", rost, ves);
        tipichniyRacion();
        massUkaz[0].pVozrast = &vozrast;//Заполняем массив указателей на данные класса "Mishka"
        massUkaz[0].pRost = &rost;
        massUkaz[0].pVes = &ves;
        massUkaz[0].pCvet = cvet;

        massUkaz[0].pMenuNed = menuNed;
        massUkaz[0].pKoefOgir = &koefOgir;
        koefOgir = stepenOgirenia();

        //cout<<"------------------->>>" << *(massUkaz[0].pKoefOgir);
        //cout << koefOgir;

    }
    ~Mishka()
    {
        cout << "\n\n\nДеструктор медведя\n\n\n";

    }
    float koefOgir;
    int vozrast;
    //float koefOgir = stepenOgirenia();

    struct Ukazateli
    {
        int* pVozrast;
        float* pRost;
        int* pVes;
        char* pCvet;
        pitanie* pMenuNed;
        float* pKoefOgir;
    };

    Ukazateli massUkaz[1];

    int getVozrast()//Первая (из 3) функция в публичной части класса
    {
        return vozrast;
    }
    void setVozrast(int vz)//Вторая (из 3) функция в публичной части класса
    {
        vozrast = vz;
    }

    void izmRaciona(int dn, char z[21], char o[21], char u[21])//Третья (из 3) функция в публичной части класса
    {
        for (int i = 0; i < 21; i++)
        {
            menuNed[dn].zavtrak[i] = z[i]; menuNed[dn].obed[i] = o[i]; menuNed[dn].uzin[i] = u[i];
        }

    }
    void vivodRacionaMishki()
    {
        cout << "Рацион мишки на неделю: \n";
        vivodRaciona();

    }



protected:
    char cvet[20] = { 'б','у','р','ы','й' };
    void vivodRaciona()
    {

        for (int i = 0; i < 7; i++)
        {
            printf_s("День недели: %i   Завтрак: %21s   Обед: %21s   Ужин: %21s\n", i + 1, menuNed[i].zavtrak, menuNed[i].obed, menuNed[i].uzin);
            //cout << i+1 << ": " << "    Завтрак: " << menuNed[i].zavtrak << "   Обед: " << menuNed[i].obed << "    Ужин: " << menuNed[i].uzin << "\n";
        }



    }







};


//157
//37

