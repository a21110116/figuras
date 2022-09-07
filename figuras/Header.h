#ifndef Header
#define Header
#include<iostream>
#include<stdlib.h>
#include<string.h>
class Figura
{
private:
    char cara;
    int x, y;
public:
    Figura() {};
    Figura(char a, int x, int y);
    char getChar();
    int getx();
    int gety();

};

class FiguraBidimensional : public Figura
{
private:
    int ancho, alt;
public:
    FiguraBidimensional(char cara, int x, int y, int ancho, int alt) : Figura(cara, x, y)
    {
        this->ancho = ancho;
        this->alt = alt;
    };
    int getAncho();
    int getAlt();
};

class Cuadrado : public FiguraBidimensional
{
public:
    Cuadrado(char cara, int x, int y, int ancho, int alt) : FiguraBidimensional(cara, x, y, ancho, alt) {};
    void dibujarCuadrado();
};
class Triangulo : public FiguraBidimensional
{
public:
    Triangulo(char cara, int x, int y, int ancho, int alt) : FiguraBidimensional(cara, x, y, ancho, alt) {};
    void dibujarTriangulo();
};
class Circulo : public FiguraBidimensional
{
public:
    Circulo(char cara, int x, int y, int ancho, int alt) : FiguraBidimensional(cara, x, y, ancho, alt) {};
    void dibujarCirculo();
};

#endif
