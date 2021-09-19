
#include <stdio.h>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

class bank{
    

    string name;
    char add[100],y;
    int balance;
    
    
    
    public:
           void open_account();
           void deposit_money();
           void Withdraw_money();
           void Display_account();
            
};

void bank :: open_account(){
 
 
 cout<<"Enter your full name :: ";
 cin>>name;
 cout<<"Enter your address ::";
 cin>>add;
 
 cout<<"What type of account you want to open saving (s) or current (c) :: ";
 cin>>y;
 
 cout<<"Enter amount for deposit :: ";
 cin>>balance;
 
 cout<<"Your account successfully created \n";
 
}


void bank :: deposit_money(){
    int a;
    cout<<"Enter your money :: ";
    cin>>a;
    balance +=a;
    cout<<" Total balance :: \t "<<balance;
    
}


void bank::Display_account(){
    
    cout<<"Your full name :: "<<name<<" ";
    cout<<"Your address :: "<<add<<" ";
    cout<<"Type of account that you open :: "<<y<<" ";
    cout<<"Total balance :: "<<balance;
}


void bank :: Withdraw_money(){
    
    float amount;
    
    cout<<"\n Withdraw :: ";
    cout<<"Enter amount to withdraw :: ";
    cin>>amount;
    balance-=amount;
    cout<<"Your total amount is left :: "<<balance;
    
}




int main()
{ 
    int ch;
    char x;
    bank obj;
    
    lable:
    cout<<"1. Open account \n";
    cout<<"2. Desposit money \n";
    cout<<"3. Withdraw money \n";
    cout<<"4. Display account \n";
    cout<<"5. Exit";
    cout<<"select the option from above \n";
    cin>>ch;
    
    switch(ch){
        
        case 1:cout<<"1. Open account \n";
        obj.open_account();
        break;
        
        case 2:cout<<"2. Desposit money \n";
        obj.deposit_money();
        break;
        
        case 3:cout<<"3. Withdraw money \n";
        obj.Withdraw_money();
        break;
        
        case 4:cout<<"4. Display account \n";
        obj.Display_account();
        break;
        
        case 5:
            if(ch==5){
                exit(1);
            }
        default: 
        cout<<"This is not exist try again \n";
        break;
        }
        
        cout<<"\n do you want to select next option then press :: y \n";
        cout<<"if you want to exit then press :: N ";
        cin>>x;
        
        if(x=='y' || x=='Y'){
            goto lable;
           }
        
        else{
               return 0;
                }
 
}
