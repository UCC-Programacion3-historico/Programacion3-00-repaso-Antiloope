#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> cal;

    cal.setA(3);
    cal.setB(0);
    try {
        printf("%d",cal.Division());
    }
    catch(int e){
        printf("No se puede dividir por 0. Erorr: %d", e);
    }
    return 0;
}