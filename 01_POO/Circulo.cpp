#include "Circulo.h"

Circulo::Circulo(float a, float b, int r) : Geometria(a, b) {
    radio = r;
}

int Circulo::getRadio() {
    return radio;
}

float Circulo::getPerimetro() {
    return 2*3.14*radio;
}

float Circulo::getSuperficie() {
    return 3.14*radio*radio;
}
