// Bank Management System
#include<iostream>
#include<stdio.h>
using namespace std;
class Bank 
 {
    public:
     char acc[100] , acc_type , name[100] ;
     long unsigned int amt, deposit , withdraw;
     
     void accept();
     void display();
     void withdraw_money();
     void deposit_money();
 };
 
void Bank::accept()
 {
     cout<<"Enter Account Holder's Name : ";
     cin.getline(name,100);
     cout<<"Enter Account Number : ";
     cin>>acc;
     cout<<"Enter Current Balance : Rs. ";
     cin>>amt;
 }
 
void Bank::display()
 {
     cout<<"Name of the Account Holder is "<<name<<endl;
     cout<<"Account Number is "<<acc<<endl;
     cout<<"Current Balance is "<<amt<<endl;
 }
 
void Bank::withdraw_money()
 {
     cout<<"Enter amount to be withdrawn : "<<endl;
     cin>>withdraw;
     if(withdraw>amt)
      {
         cout<<"Insufficient Balance"<<endl;
      }
     else
      {
         amt = amt - withdraw;
         cout<<"Current Balance is Rs. "<<amt<<endl;
      }
 }
 
void Bank::deposit_money()
 {
     cout<<"Enter Amount to be Deposited : "<<endl;
     cin>>deposit;
     amt = amt + deposit;
     cout<<"Current Balance is Rs. "<<amt<<endl;
 }
 
 int main()
 {
     Bank b;
     b.accept();
     int choice;
     int x=1;
     while(x==1)
     {
         cout<<"Enter 1 for Display the data"<<endl;
         cout<<"Enter 2 for Withdrawing Money"<<endl;
         cout<<"Enter 3 for Depositing Money"<<endl;
         cin>>choice;
         switch(choice)
          {
              case 1:
              b.display();
              break;
              case 2:
              b.withdraw_money();
              break;
              case 3:
              b.deposit_money();
              break;
              default:
              cout<<"Invalid choice"<<endl;
          }
         cout<<"Enter 1 to continue and 0 to exit" <<endl;
         cin>>x;
         if(x==0)
             break;
     }
    return 0;
 }








