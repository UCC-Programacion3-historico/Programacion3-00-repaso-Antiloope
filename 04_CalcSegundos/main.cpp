#include <iostream>

using namespace std;

int main() {
    int a;
    int h=0,m=0,s=0;
    cout << "Ingrese el valor en segundos" << '\n';
    cin >> a;

    s = a%60;
    m = a/60;
    h = m/60;
    if(m>60) {
        m = m%60;
    }

    cout << a <<" segundos son: " << h << " horas, " << m << " minutos, "<< s <<" segundos" << '\n';
    return 0;
}
