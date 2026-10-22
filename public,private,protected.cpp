#include <iostream>
using namespace std;
class sk{
	private:
	int b;
	public:
	int a;
	
	protected:
	int c;
	//function
	void show(){
		a=5; 
		b=10;
		c=15;
	}
	void disp(){
	cout<<a<<b<<c<<endl;
	}
	friend class child;
};
class child:public sk{
	public:
			void set(){
		a=5;
	//	b=10; //error because private dont acces to other class
		c=15;
		cout<<a<<c;
	}
	
};
int main(){

	child d;
d.set();
d.disp();
	return 0;
}
