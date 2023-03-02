#include "figure.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	figure figures[3]{
		figure(0, 0, 0, 0, 0, 0, 0, 0),
		figure(0, 0, 0, 0, 0, 0, 0, 0),
		figure(0, 0, 0, 0, 0, 0, 0, 0)
	};
	float x1, x2, x3, x4, y1, y2, y3, y4;
	for (int i = 0; i < 3; i++) {
		cout << " x1, y1, x2, y2, x3, y3, x4, y4 " << i + 1 << endl;
		cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
		figures[i] = figure(x1, x2, x3, x4, y1, y2, y3, y4);
	}
	for (int i = 0; i < 3; i++) {
		figures[i].show();
		cout << "в круге " << figures[i].is_in_circle() << ", " << "вне круга " << figures[i].is_out_circle() << endl;
		cout << "прямоугольный четырёхугольник " << figures[i].is_prug() << endl;
		cout << "ромб " << figures[i].is_romb() << endl;
		cout << "квадат " << figures[i].is_square() << endl;
	}
	return 0;
}
