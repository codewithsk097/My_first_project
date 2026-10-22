#include <iostream>
#include <string>
using namespace std;
class car{
	public:
		string name,colour;
		int speed;
	
};
int main(){
	car bugatti;
bugatti.name ="Bugatti";
bugatti.colour="Blue";
bugatti.speed=350;
cout<<"The car Name is :"<<bugatti.name<<endl;
cout<<"The car Colour is :"<<bugatti.colour<<endl;
cout<<"The car Speed is :"<<bugatti.speed<<endl;
	
	return 0;
}
