#include <iostream> 
#include <string> 
using namespace std; 
class Student { 
private: 
string name; 
int marks; 
public: 
Student(string n, int m) { 
name = n; 
marks = m; 
} 
// CONST function  
void showMarks() const { 

cout << name << " scored: " << marks << endl; 
 marks = 100;  
} 
//?if you uncomment this, the compiler gives an ERROR 
// because const functions cannot change data 
// NON-CONST function                 
void updateMarks(int newMarks) { 
marks = newMarks;     
} 
}; 
int main() { 
Student s1("Ali", 75); 
s1.showMarks();          
s1.updateMarks(90);      
s1.showMarks();          
} 
