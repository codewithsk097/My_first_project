#include <iostream>
using namespace std;

class sk{
	private:
	int b;

	public:
	int a;

	protected:
	int c;

	void show(){
		a=5; 
		b=10;
		c=15;
	}

  void vk(){
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
  }

	friend class child;
};

class child: public sk{
	public:
	void set(){
		a=5;
		b=10;   // ? allowed because friend class
		c=15;

		cout<<a<<" "<<b<<" "<<c<<endl;
	}
};

int main(){
child d;
d.set();
return 0;
}
