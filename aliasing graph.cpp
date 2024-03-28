
#include <fstream>
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    ofstream ag("aliasing graph2.txt");
    if (!ag) {
        cout << "파일을 열 수 없습니다.\n";
        return -1;
    }

    float t, dt, T, pi = 3.141592;
    t = 0.0;
    dt = 1. / 60. / 20. * 15.;
    T = 3. / 60.;
    for (t = 0.0; t <= T; t += dt) {
        ag << t << " " << sin(2 * pi * 60 * t) << "\n";
    }

    ag.close();
    return 0;
}