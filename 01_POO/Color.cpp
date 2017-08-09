#include "Color.h"

int Color::getColor() {
    int aux=0;
    aux = rojo*256*256;
    aux += verde*256;
    aux += azul;
    return aux;
}

void Color::tenirColor(char r, char v, char a) {
    rojo += r;
    verde += v;
    azul += a;
}

Color::Color() {
    rojo = 0;
    verde = 0;
    azul = 0;
}
