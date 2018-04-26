#include<iostream>
#include<string>
#include<sstream>
using namespace std;

template <typename type> type func2(type a, type b){
 return a+b;

}

typedef int int_32;
typedef char a[10];

enum class color : char {ts, ta};

enum test_enum { test1, test2};

using c=char;
using carray=char[60];
namespace name {
int a,b;

}
void func (int &a, int &b) {
a=a+1;
b=b+1;

}

struct test {
int a;
int b;
};

inline int fun1 (int a, int b=4) {
return a=a/b;
}
int fun2 (int, int =4);

int main() {


struct test testobj;
a f;
c testl;
carray array;

test_enum tenum;
tenum=test1;

color col;
col=color::ts;

array[59]=0;

name::a=1;
name::b=2;
int a=10;
int b(20);
int c{30};
auto d=a;
decltype(a) e;
e=10;
string text;
text={"test"};
int *p=nullptr;
int *s=NULL;
string t("12345");
stringstream(t)>>e;


int *pn;
pn= new (nothrow) int [5];
delete  pn;

const int *  ptr=&a;
ptr++;
f[0]='a';
f[1]=f[2]=f[3]=f[0];
cout<<a<<b<<c<<"\t"<<d<<e;
cout<<"@#!#$"<<endl;
cout<<text;
for (char ch : t) {
cout<<ch;
}
func(a,b);
cout<<"\n"<<fun1(12);
cout<<"\nend\n";
cout<<"\n"<<fun2(16);

cout<<func2<int>(8,9)<<endl;
cout<<func2<double>(9.0,9.0);
cout<<"--"<<endl;

cout<<a<<endl;
cout<<b<<endl;
cout<<name::a<<endl;
cout<<name::b<<endl;
using namespace name;
cout<<"a "<<a<<endl;

return 0;

}

int fun2 (int a, int b) {
return (a/b);

}

