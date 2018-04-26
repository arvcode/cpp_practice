#include<iostream>
using namespace std;

class polygon {
protected:
	int width,height;
public:
	polygon(int a, int b) : width(a), height(b) {}
	void set_values(int a, int b) {
		width=a; height=b;
	}
	virtual int area() { //polymorphic class
		return 0;
	}
	virtual int vol(void) =0; //abstract base class -->pure virtual function
	void printarea() {
		cout <<this->area()<<endl;
	}


};


class rectangle : public polygon {
public:
	rectangle(int a, int b):polygon(a,b) {}
	int area() { return width*height;}
	int vol(void) { return width*height*2; }
};

class triangle : public polygon {
public:
	triangle(int a, int b): polygon (a,b) {}
	int area() { return (height*width/2);}
	int vol(void) {return width*height*2; }
};

int main() {
//	rectangle rect;
//	triangle tri;
//	polygon *poly3;
//	polygon *poly1=&rect;
//	polygon *poly2=&tri;


	polygon *poly1= new rectangle(4,5);
	polygon *poly2=new triangle(4,5);

//	rect.set_values(4,4);
//	tri.set_values(4,4);
//	cout<<"rect"<<rect.area()<<endl;
//	cout<<"tri"<<tri.area()<<endl;

//	poly1->set_values(4,4);
//      poly2->set_values(4,4);
        cout<<"rect"<<poly1->area()<<endl;
        cout<<"tri"<<poly2->area()<<endl;
	poly1->printarea();
	poly2->printarea();
	delete poly1;
	delete poly2;

}
