#include <iostream>
using namespace std;
class student{
	int a;
	public:
		student(int r){
			a=r;
			cout<<a;
		}
};
int main(){
	student st(129);
	return 0;
}
