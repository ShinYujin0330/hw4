
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    ofstream eg("extra graph.txt");
    if (!eg) {
        cout << " can't open file\n";
        return -1;
    }
    float t, dt, T, pi = 3.141592;
    t = 0.0;
    dt = 1. / 150. / 10.;
    T = 1. / 50.;
    for (t = 0.0; t < T; t += dt) {
        eg << t << " " << exp(t * 20) * cos(200 * pi * t) << " " << exp(50 * t) << endl;
    }
    eg.close();
    return 1;
}
