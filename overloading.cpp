#include <iostream>
using namespace std;
class overloading{
	public:
	float sum(float x,float y){
			return x+y;
		}
	int sum(int x,int y){
		return x+y;
	}
};
int main(){
	overloading obj;
cout<<obj.sum(3.5f,4.8f);
	return 0;
}
