#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\n";
    cout<<"\t -----------------------------------------Postive, Negative Even Odd Checker-------------------------------------------"<<endl<<endl;
    cout<<"Enter Number to be Checked: ";
    cin>>n;
    if(n>0 && n%2==0)
    {
        cout<<n<<" is a Positive Even Number!";
    }
    else if (n>0 && n%2!=0)
    {
        cout<<n<<" is a Poaitive Odd Number! ";
    }
    else if (n<0 && n%2==0)
    {
        cout<<n<<" is a Negative Even Number!";
    }
    else
    {
        cout<<n<<" is a Negative Odd Number!";
    }

    return 0;
}



/* OUTPUT
   
Enter Number to be Checked: 49
49 is a Poaitive Odd Number! 

Enter Number to be Checked: -46
-46 is a Negative Even Number!  */