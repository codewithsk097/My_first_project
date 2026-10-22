#include <iostream>
#include <string>
using namespace std;
template <typename T1,typename T2>
class sk{
public:
T1 id;
T2 name;
 sk(T1 id, T2 name){
    this->id=id;
    this->name=name;
 }
 void get(){
    cout<<"Id : "<<id<<endl;
    cout<<"name : "<<name;
 }

};
int main(){ 
    int a;
    string s;
    cout<<"enter id no"<<endl;
    cin>>a;
    cout<<"enter name:"<<endl;
    getline(cin>>ws,s);
    
   sk<int,string>skob(a,s);
   skob.get();

    return 0;
}
