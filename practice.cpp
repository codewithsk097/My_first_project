#include <iostream>
#include <string>
using namespace std;
class account{
	private:
		int balance;
	public:
		string name="ali";
//		balance=20;
	
	void show(){
		balance=340;
		cout<<"balance is :"<<balance;
	}
};
int main(){
	
account ali;
cout<<ali.name<<endl;
ali.show();
	return 0;
}
