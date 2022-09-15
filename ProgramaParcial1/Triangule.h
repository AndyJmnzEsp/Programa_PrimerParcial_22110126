#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangule : public Shape {
public:
	Triangule(int _s, int _x, int _y) {
		size = _s;
		x = _x;
		y = _y;
	}
	void Draw() override{
		int a, i, j;
		CanvaY();
		for (i = 1; i <= size; i++) {
			CanvaX();
			for (j = 1; j <= size - i; j++) {
				cout << "  ";
			}
			for (j = 1; j <= 2 * i - 1; j++) {
				cout << "* ";
			}
			cout << "" << endl;
		}

	}
};

