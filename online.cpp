#include<iostream>
using namespace std;
struct address{
	char city[56];
	int housenum;
	};
struct registor{
	char name[100];
	int phone_number;
	address add;
}admin,cust;
 
char getchoice();
int main()
 {
 char ch;
 ch=getchoice();
 
  switch(ch)
  {
  case 'a':
    registorAdmin(custs);
    
	break;
  case 'b':
    registorAdmin(admin);
	break;
  default:
    cout<<"YOU are out of the sysytem"<<endl;
 }
  
 return 0;
}
 char getchoice()
 {
  char co;
  cout<<"###########What you want########"<<endl;
  cout<<"A)Customer"<<endl;
  cout<<"B)Administer"<<endl;
  cout<<"###########Press any key to exit.##############"<<endl; 
  cout<<"Enter your choice: "<<endl;
  cin>>co;
   
  
  
  
  return co;
 }

	
	
	
	
	
	

	
	
