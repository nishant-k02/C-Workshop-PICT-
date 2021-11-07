#include <iostream>
using namespace std;



int main()
{
   int option, options;
   char name[30];
   int acc_no, balance, pin, amount, cpin, npin, cfpin;
   
   label0:
   cout<<"\t\t\t\t\t\t\t1. Create Account: "<<endl;
   cout<<"\t\t\t\t\t\t\t2. Remove Account: "<<endl;
   
   cout<<"\n\t\t\t\t\t\t\tSelect any option: ";
   cin>>option;
   
   switch (option)
   {
       case 1:
       cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
       cout<<"\nEnter Name: ";
       cin>>name;
       cout<<"Enter Account Number: ";
       cin>>acc_no;
       cout<<"Enter Balance: ";
       cin>>balance;
       cout<<"Enter Pin: ";
       cin>>pin;
       
       cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
       cout<<"\n\t\t\t\t\t\t\t1. Display Account: "<<endl;
       cout<<"\t\t\t\t\t\t\t2. Withdraw Money: "<<endl;
       cout<<"\t\t\t\t\t\t\t3. Deposit Money: "<<endl;
       cout<<"\t\t\t\t\t\t\t4. Change Pin: "<<endl;
       cout<<"\t\t\t\t\t\t\t5. Exit: "<<endl;
       
       
       cout<<"\n\t\t\t\t\t\t\tSelect any options: ";
       cin>>options;
       
       switch (options)
       {
           case 1:
           
           cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           cout<<"\t\t\t\t\t\t\tAccount Details"<<endl;
           cout<<"\n\t\t\t\t\t\t\tName: "<<name<<endl;
           cout<<"\t\t\t\t\t\t\tAccount Number: "<<acc_no<<endl;
           cout<<"\t\t\t\t\t\t\tBalance: "<<balance<<endl;
           break;
           
           case 2: 
           
           cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           label1:
           
           cout<<"\n\t\t\t\t\t\tWithdraw  Cash: "<<endl;
           cout<<"\nAvailable Balance: "<<"Rs."<<balance<<endl;
           cout<<"\nEnter Ammount to Withdraw: "<<"Rs.";
           cin>>amount;
           
           if (amount>balance)
           {
               cout<<"\n\t\t\t\t\t\tWithDrawal Failed!! Insufficient Balance, Try Again! "<<endl;
               goto label1;
           }
           else
           {
               balance = balance - amount;
               cout<<"\n\t\t\t\t\t\t\tTransection Succesfull!!"<<endl;
               cout<<"\n\t\t\t\t\t\t\tUpdated Balance: "<<"Rs."<<balance<<endl;
               cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           }
           break;
           
           case 3: 
           
           cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           cout<<"\n\t\t\t\t\t\t\tDeposit Cash: "<<endl;
           cout<<"\nAvailable Balance: "<<"Rs."<<balance<<endl;
           cout<<"\nEnter Ammount to Deposit: "<<"Rs.";
           cin>>amount;
           
           balance = balance + amount;
           cout<<"\n\t\t\t\t\t\t\tTransection Succesfull!!"<<endl;
           cout<<"\n\t\t\t\t\t\t\tUpdated Balance: "<<"Rs."<<balance<<endl;
           cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           
           break;
           
           case 4:
           
           cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
           cout<<"\n\t\t\t\t\t\t\tChange the Current Pin"<<endl;
           label2:
           cout<<"\nEnter the current pin"<<endl;
           cin>>cpin;
           
           if(cpin==pin)
           {
               cout<<"Enter New Pin: ";
               cin>>npin;
               label3:
               cout<<"Confirm New Pin: ";
               cin>>cfpin;
               
               if (cfpin==npin)
               {
                   cout<<"\n\t\t\t\t\t\t\tPin Changed Successfully!!"<<endl;
                   cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
               }
               else
               {
                   cout<<"\n\t\t\t\t\t\t\tPin does not Match!! Try Again."<<endl;
                   goto label3;
               }
            
           }
           else
           {
               cout<<"\n\t\t\t\t\t\t\tIncorrect Pin! Re-enter the Pin.";
               goto label2;
           }
           break;
           
           case 5:
           
           goto label0;
           
           break;
           
       }
       break;
       
       case 2:
       cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
       cout<<"\n\t\t\t\t\t\t\tAccount Removed!!";
   }
    return 0;
}




/* OUTPUT

                                                        1. Create Account: 
                                                        2. Remove Account: 

                                                        Select any option: 1

        -----------------------------------------------------------------------------------------------------------------------

Enter Name: Nishant
Enter Account Number: 12345678
Enter Balance: 3000
Enter Pin: 1234

        -----------------------------------------------------------------------------------------------------------------------

                                                        1. Display Account: 
                                                        2. Withdraw Money: 
                                                        3. Deposit Money: 
                                                        4. Change Pin: 
                                                        5. Exit: 

                                                        Select any options: 2

        -----------------------------------------------------------------------------------------------------------------------

                                                Withdraw  Cash: 

Available Balance: Rs.3000

Enter Ammount to Withdraw: Rs.3599

                                                WithDrawal Failed!! Insufficient Balance, Try Again! 

                                                Withdraw  Cash: 

Available Balance: Rs.3000

Enter Ammount to Withdraw: Rs.2509

                                                        Transection Succesfull!!

                                                        Updated Balance: Rs.491

        -----------------------------------------------------------------------------------------------------------------------

*/

