#pragma once
#include <iostream>
using namespace std;

class Shape {
public:
	
	void setSize(int n) { 
		size = n; 
	} 

	void setX(int n) {
		if (x + n == -1) {
			return;
		}
		x = x + n;
	}

	void setY(int n) {
		if (y + n == -1) {
			return;
		}
		y = y + n;
	}

	virtual void Draw() = 0; 

protected:
	int size;
	int x, y;

	void CanvaX() {
		for (int i = 0; i < x; i++) {
			cout << "  ";
		}
	}
	void CanvaY() {
		for (int i = 0; i < y; i++) {
			cout << "\n";
		}
	}


};

