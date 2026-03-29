#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
//sorry file managment is not avalible yet
using namespace std;
 void registeruser();
 void login();
 void ATMmenu();
int main (){
	int choice;
	while (true){
		cout<<"------GET--STARTED \n ";
		cout<<"1| REGISTER NOW \n ";
		cout<<"2|LOGIN NOW \n";
		cout<<" 3|EXIT \n";
		cout<<"ENTER YOUR CHOICE:";
		cin>>choice;
		switch(choice){
		    case 1:
    			registeruser();
    		break;
	 	   case 2:	
	    		login();
				break;
			case 3:
				cout<<"EXITING.....";
				return 0;
		
			default:
				cout<<"invalid choice : \n ";

		}
 
    }
    return 0;
}
void registeruser(){
	cout<<"THE FEATURE IS NOT AVALIBLE YET  \n"; 
	cout<<"WILL BE AVALIBLE IN 2030 \n";
}
void login(){
	cout<<"<====== XERO-PAY ======>\n ";
	int p ;
	long long i;
	long long acn= 1234;
	int pin=1234;
	int trynum=4;
	do{
		cout<<"\n Enter Your ID :";
		cin>>i;
		
		cout<<"Enter Pin :";
		cin>>p;
		
		cout<<"\n";  
		if (acn == i && pin == p){
			
		 
			cout<<" \n You successfully login";
			 ATMmenu();
			return ;
		}
		else{
			cout<<"Invalid attempt \n ";
			trynum--; 	
		}
		
	}
	while(trynum > 0);
	cout<<"you have reached the maximum limit";
}
  void ATMmenu(){
  	int choice;
  	static double balance=10000;
  	double amount;
  	while(true)
  	{
	  
	  	cout<<"\n=======XERO-PAY=======\n";
	  	cout<<"\n-----ATM-MENU-----\n";
  		cout<<"1|Check balance \n";
	  	cout<<"2|Weposit-cash \n";
  		cout<<"3|Widthrawl-cash \n";
  		cout<<"4|Exit \n";
  		cout<<"Enter choice NUM:";
  		cin>>choice;
  		
  	 switch(choice){
  		case 1:
  			cout<<"Your ACTIVE balance:"<<balance<<"\n";
  			break;
  		case 2 :
  				cout<<" \nEnter amount to deposit cash: \n";
  				cin>>amount;
  			
				  if(amount<5000000){
				  
  				balance+=amount;
  					cout<<" \n Deposit succesfull Current balance: \n"<<balance;}
  					else{ 
  						cout<<"\n Chosse the premium to increse the limit \n";
				  }
  				break;
        case 3 :
		       cout<<"Enter amount to widthdrawl \n";
			   cin>>amount;
			   if(amount<=balance){
			   
			   balance-=amount;
			   cout<<" \n widthrrawl succesfull \n";
		       cout<<" Your reamaining balance:"<<balance;
		       break;
		case 4 :
			cout<<"EXITING...";
			return ;
		       
		}
		else{
			cout<<"\nYou have insufficent balance: \n";
		}
     		break;

	     default:
	  		cout<<"PlEASE ENTER VALID CHOICE \n";
	  	}
	  
     }
}
  

