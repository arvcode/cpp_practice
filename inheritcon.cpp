#include<iostream>
using namespace std;



class output {
public:
	void print (int i) {
		cout<<i<<endl;
	}

};

class parent {
public:
	parent () { 
		cout<<"parent constructor \n";
	}
	parent (int a) {
		cout<<"parent int constructor \n";
	}
};

class child : public parent , public output{
public:
	child() {
		cout<<"child constructor \n";
	}
};

class child1 : public parent {
public:
	child1 (int a) : parent(a) {
		cout<<"child 1 constructor \n";
	}
};

main() {
	child cl1;
	child1 cl2(1);
	cl1.print(1);


}


