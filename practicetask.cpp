#include <iostream>
#include <string>
using namespace std;

class number{
	private:	
		int value;
	public:
		number(int v){
			value = v;
		}

		number(const number &obj){
			value = obj.value;
			cout << "copy constructor called" << endl;
		}

		void display(){
			cout << "value = " << value << endl;
		}
};

int main(){
	number obj1(10);
	number obj2 = obj1;
	cout << "obj 1: ";
obj1.display();
	cout << "obj 2: ";
obj2.display();
	return 0;
}
