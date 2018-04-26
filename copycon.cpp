#include<iostream>
#include<string>
using namespace std;


class copyc {
	string * ptr;
public:
	copyc(string ptr) : ptr(new string(ptr)) {}
	~copyc() {delete ptr;}
	copyc(copyc& a) : ptr(new string(a.view())){}
	const string& view () const {return *ptr;}
};

int main() {
	copyc a("ex");
	copyc b=a;
	cout<<".."<<b.view();

}
