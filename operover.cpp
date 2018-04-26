#include<iostream>
using namespace std;

class vectora {
private:
	int x;
	int y;
public:	
	static int count;
	vectora() {x=0;y=0;}
	vectora (int a, int b) : x(a),y(b) {}
	vectora operator + (const vectora&);
	bool testme (vectora&);
	~vectora() {cout<<"dest"<<endl;}
};


vectora vectora::operator+ (const vectora& ptr) {
	vectora res;
	res.x=x+ptr.x;
	res.y=x+ptr.y;
	cout<<"x"<<res.x<<"y"<<res.y<<endl;
	return res;
}

int vectora::count=0;

bool vectora::testme(vectora& prt) {
	if (&prt==this) return true;
	return false;

}

/*
vectora operator-(const vectora& a, const vectora& b) {
	vectora res;
	res.x=a.x-b.x;
	res.y=a.y-b.y;
	return res;
}
*/

int main () {
	vectora a(1,1);
	vectora b(2,2);
	vectora c;
	c=a+b;
//	cout<<"result is"<<c.x<<"\t"<<c.y;
	c=a.operator+(b);
	cout<<"--"<<a.testme(a)<<"\n";
        cout<<"--"<<b.testme(a)<<"\n";
//	c=a-b;
//	cout<<endl<<"result is"<<c.x<<"\t"<<c.y;


}
