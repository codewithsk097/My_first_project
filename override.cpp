//program override
#include <iostream>
using namespace std;
class base{
	public:
		void myfun(){
			cout<<"This is base class";
		}
};
class derived:public base
{
	public:
		void myfun(){
			cout<<"This is derived class";
	}
};
int main(){
	base b;
	derived d;
	d.myfun();
	b.myfun();
	return 0;
}
