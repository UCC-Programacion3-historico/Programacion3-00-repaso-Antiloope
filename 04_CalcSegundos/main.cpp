#include <iostream>

using namespace std;

int main() {
    int a;
    int h=0,m=0,s=0;
    printf("Ingrese el valor en segundos: ");
    scanf("%d",a);
    
    s = a%60;
    m = a/60;
    h = m/60;
    if(m>60) {
        m = m%60;
    }

    printf("%d segundos son: %d horas, %d minutos , %d segundos",a,h,m,s);
    return 0;
}