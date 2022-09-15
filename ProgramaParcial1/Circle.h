#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle : public Shape {
	public:
		Circle(int _s, int _x, int _y) {
			 size = _s;
			 x = _x;
			 y = _y;
		}
		void Draw() override {
			if (size % 2 == 0) {
				size = size + 1;
			}
			center = (size / 2);
			radio = center + 0.5;

			CanvaY();
			for (int i = 0; i < size; i++) {
				CanvaX();
				for (int j = 0; j < size; j++) {
					if (pitagoras(i, j)) {
						cout << "* ";
					}
					else {
						cout << "  ";
					}
				}
				cout<<" \n";
			}
		}
		int center, hY, hX; //h = hick = cateto
		float radio, hypotenuse;

		bool pitagoras(int i, int j) {
			if (center < i) {
				hY = center - i;
			}  
			else {
				hY = i - center;
			}

			if (center < j) {
				hX = center - j;
			}  
			else {
				hX = j - center;
			}

			hypotenuse = sqrt((pow(hY, 2)) + (pow(hX, 2)));

			return hypotenuse <= radio;
		}
};

