#include<iostream>
using namespace std;
class student{
	public:
		int a;
		string b;
		int rollno;
		string name;
		name="iltaf";
		rollno=12;
		void show(){
		
		cout<<rollno<<name<<endl;
	}
};int main(){
	student s;
	s.show();
}
