#include <iostream>
using namespace std;
class A{
public:
	void a(){cout<<"hello"<<endl;}
	
};
class B:public A{
public:
	void b(){cout<<"class b";}
	
};
int main(){
	A aa;
	B bb;
	aa.a();
bb.a();
bb.b();
	return 0;
}
