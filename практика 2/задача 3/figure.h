#include <iostream>
#include <cmath>
class figure
{
private:
	float x1, x2, x3, x4, y1, y2, y3, y4, si1, si2, si3, si4, s, p;
	double pi = 3.14;
	float ca_side(float x1, float x2, float y1, float y2) {
		float x12 = abs(x2 - x1);
		float y12 = abs(y2 - y1);
		return sqrt(pow(x12, 2) + pow(y12, 2));
	}
public:
	figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);
	void show();
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};
