#include <iostream>
using namespace std;
//admin struc
struct add_p{
	int id,price;
	string name;
};

//ADMIN

void admin(){
	cout<<"********Welcome admin******"<<endl;
	cout<<"Enter Admin  user name:"<<endl;
	string username;
	int choice;
	cin>>username;
	cout<<"Enter Password:"<<endl;
	int password;
	cin>>password;

	
	if(username=="admin" && password==12345){
		cout<<"log in succes "<<endl;
		cout<<"1 : add product"<<endl;
		cout<<"2 : delete product"<<endl;
		cout<<"3 : view product"<<endl;
		cout<<"4 :Choice"<<endl;
			cin>>choice;
		if(choice==1){
			cout<<"add Product"<<endl;
			add_p addpro;
			cout<<"Enter name of product"<<endl;
		cin>>addpro.name;
			cout<<"Enter id"<<endl;
			cin>>addpro.id;
			cout<<"Enter Price"<<endl;
			cin>>addpro.price;
			
		}
		else if (choice==2){ cout<<"delet";
		}

		
	} 
	else{
		cout<<"sorry enter wrong ";
	}
	
		
	}
	


//EMPOLOYER

void employer(){
	cout<<"Enter  Empolyer user name:"<<endl;
	string username;
	cin>>username;
	cout<<"Enter Password:"<<endl;
	int password;
	cin>>password;
	
	if(username=="employer" && password==12345){
		cout<<"log in succes "<<endl;
	
		
	} 
	else{
		cout<<"sorry enter wrong ";
	}
}

//counter
//discount
void count(){

cout<<"How many product you buy"<<endl;
	int index;
cin>>index;
int price,qta,total_price=0;
for (int i=1; i<=index;i++){
	cout<<"price product"<<" "<<i<<endl;
	cin>>price;
	cout<<"how many quantity "<<endl;
	cin>>qta;
total_price+=price*qta;
}
cout<<total_price<<endl;
int discount=0;
if(total_price>10000){
		discount=total_price*0.12;
	cout<<"The Total amount is:"<<discount<<endl;
	cout<<"after discount:"<<total_price-discount<<endl;


	}
	
else if(total_price>5000){
	discount=total_price*0.10;
	cout<<"The discount is:"<<discount<<endl;
 	cout<<"after discount:"<<total_price-discount;
	


}
else {
	cout<<"not discount"<<endl;
	
}
cout<<endl;

}

//PRODUCTS DETAILS

struct products{ 
int p_num;
string name;
int price;

};
int main(){

	cout<<"*****WELCOME TO SK MART"<<endl;
	cout<<"PLEASE ENTER 1-3"<<endl;
	
//	manu

int select;
cout<<"1 : admin " <<endl<<"2 :Empoloyer "<<endl<<"3 : counter"<<endl;
cin>>select;
switch(select){
	case 1:
	 admin();
		break;
	case 2:
	employer();
		break;
	case 3:
		count();
		break;
	default:
	cout<<"Enter invalid number ";
}


	

return 0;
}