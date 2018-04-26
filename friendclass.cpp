#include<iostream>
using namespace std;


class square;

class rectangle {
	int width, height;
public:
	int area () {
		return width*height;
	}
	void convert (square a);
};


class square {
	int side;
	friend class rectangle;
public:
	square (int a) : side(a) {}
};

void rectangle::convert (square a) {
	width=a.side;
	height=a.side;
}

int main() {
	rectangle rect;
	square sq(4);
	rect.convert(sq);
	cout<<rect.area();



}
