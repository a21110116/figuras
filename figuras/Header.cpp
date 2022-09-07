#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include "Header.h"

using namespace std;

Figura::Figura(char a, int x, int y)
{
    this->cara = a;
    this->x = x;
    this->y = y;
}
char Figura::getChar()
{
    return cara;
}
int Figura::getx()
{
    return x;
}
int Figura::gety()
{
    return y;
}

int FiguraBidimensional::getAncho()
{
    return ancho;
}

int FiguraBidimensional::getAlt()
{
    return alt;
}




void Cuadrado::dibujarCuadrado()
{
    char w, matriz[100][100];
    int a, b, x, y, i, j;
    w = getChar();
    a = getAncho();
    b = getAlt();
    x = getx();
    y = gety();
    for (i = 0; i < a; i++)
    {

        for (j = 0; j < b; j++)
        {
            matriz[i][j] = w;
        }

    }
    for (i = 1; i < y; i++)
        cout << " " << endl;
    for (i = 0; i < a; i++)
    {
        cout << setw(x);
        for (j = 0; j < b; j++)
        {

            cout << matriz[i][j];
        }
        cout << "  " << endl;
    }

}


void Triangulo::dibujarTriangulo()
{
    char w;
    int a, i, j;
    w = getChar();
    a = getAlt();
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << w;
        cout << endl;
    }

}


void Circulo::dibujarCirculo()
{
    char w;
    int a, i, j;
    w = getChar();
    a = getAlt();
    for (j = 0; j <= a * 2; j++)
    {
        for (i = 0; i <= a * 2; i++)
        {
            if (pow(i - a, 2) + pow(j - a, 2) <= pow(a, 2))
                cout << w;
            else
                cout << " ";
        }
        cout << endl;
    }
}