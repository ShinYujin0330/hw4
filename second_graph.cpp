
#include <iostream>
#include <fstream>

using namespace std;
const float pi = 3.141592;

int main() {
	float t = 0.0, dt, T;
	dt = 1. / 110. / 20.; 
	T = 3. / 110.;

	ofstream sg("second graph.txt");
	for (t = 0.0; t < T; t += dt) {
		sg << t << " " << 100 * cos(20. * pi * t) * cos(220. * pi * t) << " " << 60 * sin(240. * pi * t) + 80 * sin(220. * pi * t) << endl;
	}
	sg.close();
	return 111;
}
