#include <iostream>
using namespace std;

class parent{
	public:
		int a = 10;

	protected:
		int b = 20;

	private:
		int c = 30;
};

class child : public parent{
	public:
		void show(){
			cout << "Public a: " << a << endl;      // accessible
			cout << "Protected b: " << b << endl;   // accessible
		//	 cout << c;  not accessible
		}
};

int main(){
	child c;
	c.show();

	return 0;
}
