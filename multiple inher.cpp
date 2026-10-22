#include <iostream>
using namespace std;

class A{
	public:
		void show(){
			cout << "Show A" << endl;
		}
};
class B{
  public:
 	void show(){
			cout << "Show B" << endl;
		}
};

class c:public A,public B{
    public:
 	  void show(){
			cout << "Show C" << endl;
			A::show();
			B::show();
		}


};

int main(){
	c obj;
obj.show();
	return 0;
}
