#include <iostream> 
#include <string> 
using namespace std; 
class Student { 
private: 
string name; 
static int count;        
public: 
Student(string n) { 
name = n; 
count++; 
} 
// shared variable ,one copy for all 
// static method, no object needed to call this 
static int getCount() { 
return count; 
} 
}; 
//Lab Manual of Object-Oriented Programming 
int Student::count = 0;       
int main() { 
// calling BEFORE any object exists  
cout << Student::getCount() << endl;      
Student s1("Ali"); 
Student s2("Sara"); 
cout << Student::getCount() << endl;      
}
