#include<iostream>
using namespace std;


class rectangle {
private:
	int length;
	int breadth;
public:
	int height;
	int area(int, int);
	rectangle(int,int); //Constructor
	rectangle();
};



class circle {
	int rad;
public:
	circle(int rad) : rad(rad) {};
};


class cylinder  {
	circle cir;
	int height;
public:
	cylinder(int rad, int h) : cir(rad),height(h) {}

};
int rectangle::area(int a, int b) {
	length=a;
	breadth=b;
	return (length*breadth);
}

rectangle::rectangle(int a, int b): length(a) {
	//length=a;
	breadth=b;
}

rectangle::rectangle() {
	length=5;
	breadth=5;

}

int main() {
	cout<<"C++ program"<<endl;
	class rectangle rect {10,10};
	class rectangle rect2(10,10);
	cylinder cyl(10,10);
	cout<<rect.area(10,20)<<endl;
	
	return 0;
}

