#include <cmath>
#include "Triangulo.h"

Triangulo::Triangulo(float a, float b, int an) : Geometria(a, b) {
    angulo = an;
}

int Triangulo::getAngulo() {
    return angulo;
}

float Triangulo::getPerimetro() {
    return alto/sin(angulo)+sqrt((alto*alto)+(alto/(ancho-cos(angulo))));
}

float Triangulo::getSuperficie() {
    return (alto*ancho)/2;
}
