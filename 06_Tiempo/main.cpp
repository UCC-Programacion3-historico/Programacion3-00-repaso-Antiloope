#include <iostream>
#include <ctime>

using namespace std;

int main() {
    clock_t begin;
    begin = clock();
    int a[1024];
    for (size_t i = 0; i < 1024; i++) {
        a[i]=1000;
    }
    clock_t end = clock();

    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

    cout << "Tardo elapsed_secs" << elapsed_secs << "\n" << endl;
    return 0;
}
