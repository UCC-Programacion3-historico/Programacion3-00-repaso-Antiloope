#include <cmath>
#include "Cuadrado.h"

Cuadrado::Cuadrado(float a, float b) : Geometria(a, b) {}

float Cuadrado::getDiagonal() {
    return sqrt(ancho * ancho + alto * alto);
}

float Cuadrado::getPerimetro() {
    return 2*ancho+2*alto;
}

float Cuadrado::getSuperficie() {
    return ancho*alto;
}


