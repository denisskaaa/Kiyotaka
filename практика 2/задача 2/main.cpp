#include "circle.h"
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    circle circles[3]{
        circle(0, 0, 0),
        circle(0, 0, 0),
        circle(0, 0, 0)
    };
    float a, b, c;
    float r, x_center, y_center;
    for (int i = 0; i < 3; i++) {
        cout << "радиус, центр X, центр Y для окружности " << i + 1 << endl;
        cin >> r >> x_center >> y_center;
        circles[i].set_circle(r, x_center, y_center);
    }
    for (int i = 0; i < 3; i++) {
        circles[i].show();
        cout << "площадь круга " << circles[i].square() << endl;
        cout << "стороны треугольника " << i + 1 << endl;
        cin >> a >> b >> c;
        cout << "треугольник внутри? " << circles[i].triangle_in(a, b, c) << endl;
        cout << "треугольник снаружи? " << circles[i].triangle_around(a, b, c) << endl;
        float r2, x2, y2;
        cout << "данные круга (проверка на пересечение с (r, xc, yc):" << endl;
        cin >> r2 >> x2 >> y2;
        cout << "круги пересекаются? " << circles[i].check_circle(r2, x2, y2) << endl;
    }
}
