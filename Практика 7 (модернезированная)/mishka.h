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
    void tipichniyRacion()//������ (�� ����) ������� � ��������� ������� ������
    {
        for (int i = 0; i < 7; i++)
        {
            menuNed[i] = { "�����", "����","����" };

            //menuNed[i].obed = '����';
            //menuNed[i].uzin = '����';
        }
        cout << "\n�������� ���������� ������ ������� �����������!\n";
    }
    float stepenOgirenia()//������ (�� ����) ������� � ��������� ������� ������
    {
        return (ves / rost);

    }




public:

    Mishka(float r, int v)
    {
        rost = r; ves = v;
        //cvet = { '�','�' };
        cout << "\n����������� �������";
        printf_s("\n\n ������� � ������ %.2f ����� � ����� %i �� ������\n\n\n", rost, ves);
        tipichniyRacion();
        massUkaz[0].pVozrast = &vozrast;//��������� ������ ���������� �� ������ ������ "Mishka"
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
        cout << "\n\n\n���������� �������\n\n\n";

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

    int getVozrast()//������ (�� 3) ������� � ��������� ����� ������
    {
        return vozrast;
    }
    void setVozrast(int vz)//������ (�� 3) ������� � ��������� ����� ������
    {
        vozrast = vz;
    }

    void izmRaciona(int dn, char z[21], char o[21], char u[21])//������ (�� 3) ������� � ��������� ����� ������
    {
        for (int i = 0; i < 21; i++)
        {
            menuNed[dn].zavtrak[i] = z[i]; menuNed[dn].obed[i] = o[i]; menuNed[dn].uzin[i] = u[i];
        }

    }
    void vivodRacionaMishki()
    {
        cout << "������ ����� �� ������: \n";
        vivodRaciona();

    }



protected:
    char cvet[20] = { '�','�','�','�','�' };
    void vivodRaciona()
    {

        for (int i = 0; i < 7; i++)
        {
            printf_s("���� ������: %i   �������: %21s   ����: %21s   ����: %21s\n", i + 1, menuNed[i].zavtrak, menuNed[i].obed, menuNed[i].uzin);
            //cout << i+1 << ": " << "    �������: " << menuNed[i].zavtrak << "   ����: " << menuNed[i].obed << "    ����: " << menuNed[i].uzin << "\n";
        }



    }







};


//157
//37

