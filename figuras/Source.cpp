#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include "Header.h"
using namespace std;

int main()
{
    char q;
    int opc = 1, * ptrfig, w, e, r, t;
    cout << "\tBienbenido al dibujo en Programacion" << endl
        << "Atencion, la orientacion del del plano del dibujo de las figuras es:" << endl
        << "-Hacia abajo x positivo" << endl
        << "hacia la derecha y positivo " << endl
        << "nota: Cualquier valor ingresado deve de ser un numero natural " << endl;
    system("Pause");
    system("CLS");
    while (opc == 1)
    {
        ptrfig = new int;
        cout << "¿ Que figura desea dibujar?" << endl
            << "\t1 -> Cuadrado" << endl
            << "\t2 -> Rectangulo" << endl
            << "\t3 -> Triangulo" << endl
            << "\t4 -> Circulo" << endl;
        cin >> *ptrfig;
        system("cls");
        cout << "ingrese el caracter con el que desea dibujar: ";
        cin >> q;
        if (*ptrfig == 1 || *ptrfig == 2)
        {
            do
            {
                cout << "Ingrese la cordenada en x: ";
                cin >> w;

            } while (w <= 0);
            do
            {
                cout << "Ingrese la cordenada en y: ";
                cin >> e;

            } while (e <= 0);
            system("CLS");
            if (*ptrfig == 1)
            {
                do
                {
                    cout << "Ingrese la longitud de un lado del cuadrado: ";
                    cin >> r;

                } while (r <= 0);

                Cuadrado fig1(q, w, e, r, r);
                fig1.dibujarCuadrado();
            }
            if (*ptrfig == 2)
            {
                do
                {
                    cout << "Ingrese la longitid de la base del rectangulo: ";
                    cin >> r;

                } while (r <= 0);
                do
                {
                    cout << "ingrese la longitud de la altura del rectangulo: ";
                    cin >> t;

                } while (t <= 0);



                Cuadrado fig1(q, w, e, t, r);
                fig1.dibujarCuadrado();
            }
        }
        if (*ptrfig == 3)
        {
            do
            {
                cout << "ingresar la longitud de la altura del tiangulo: ";
                cin >> r;

            } while (r <= 0);

            Triangulo fig1(q, 0, 0, r, r);
            fig1.dibujarTriangulo();
        }
        if (*ptrfig == 4)
        {
            do
            {
                cout << "Ingrese la longitud del radio del circulo ";
                cin >> r;

            } while (r <= 0);

            Circulo fig1(q, 0, 0, r, r);
            fig1.dibujarCirculo();
        }

        cout << "\nDesea dibujar otra figura? \n 1-> SI\n  2-> NO" << endl;
        cin >> opc;
        system("CLS");
        delete ptrfig;

    }

    cout << "Gracias Por usar el programa, hasta luego " << endl;
    system("PAUSE");
    return 0;
}