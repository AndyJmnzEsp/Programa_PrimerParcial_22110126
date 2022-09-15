#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Square : public Shape {
public:
	Square(int _s, int _x, int _y) {
		size = _s;
		x = _x;
		y = _y;
	}

	void Draw() override {
	
		CanvaY();
		for (int j = 0; j < size; j++) {
			CanvaX();
			for (int i = 0; i < size; i++) {
				cout << "* ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	void DrawEmpty()  {
		CanvaY();
		for (int i = 1; i <= size; i++) {
			CanvaX();
			for (int j = 1; j <= size; j++) {
				if ((i == 1) || (i == size)) {
					cout << "* ";
				}
				else {
					if ((j == 1) || (j == size)) {
						cout << "* ";
					}
					else {
						cout << "  ";
					}
				}
			}
			cout << "" << endl;
		}
	}
};

