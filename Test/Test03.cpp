#include <iostream>

class Point {

public:
	int x, y;

	Point() : x(0), y(0) {}

	Point(int px, int py) {
		x = px;
		y = py;
	}

	Point& operator+ (const Point& pt) const {
		Point rez;
		rez.x = x + pt.x;
		rez.y = y + pt.y;
		return rez;
	}

	Point operator+= (const Point& pt) {
		x += pt.x;
		y += pt.y;
		return *this;
	}

	friend Point operator+ (const Point& p, int i);

};

Point operator+ (const Point& p, int i) {
	Point rez;
	rez.x = p.x + i;
	rez.y = p.y + i;
	return rez;
}

int main() {
	Point pt1(1, 1), pt2(2, 2), pt3;
	pt3 = pt1 + pt2;
	pt2 += pt1;
	pt3 = pt1 + 5;

}
