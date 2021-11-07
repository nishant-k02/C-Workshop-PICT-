# include <iostream>
using namespace std;

void addition()
{
    float a, b;
    cout<<"Enter Number 1: ";
    cin>>a;
    
    cout<<"Enter Number 2: ";
    cin>>b;
    
    cout<<"Subtraction = "<<float(a+b);
}

void subtract()
{
    int a, b;
    cout<<"Enter Number 1: ";
    cin>>a;
    
    cout<<"Enter Number 2: ";
    cin>>b;
    
    cout<<"Subtraction = "<<a-b;
}

void multiply()
{
   float a, b;
    cout<<"Enter Number 1: ";
    cin>>a;
    
    cout<<"Enter Number 2: ";
    cin>>b;
    
    cout<<"Multiplication = "<<a*b;
}

void division()
{
    double a, b;
    cout<<"Enter Number 1: ";
    cin>>a;
    
    cout<<"Enter Number 2: ";
    cin>>b;
    
    cout<<"Subtraction = "<<float(a/b);
}



int main() {
    char operation;
    cout<<"Enter any Operation to perform: ";
    cin>>operation;
    
    if (operation == '+')
    {
        addition();
    }
    
    else if (operation == '-')
    {
        subtract();
    }
    
    else if (operation == '*')
    {
        multiply();
    }
    else if (operation == '/')
    {
        division();
    }
    return 0;
}


/* OUTPUT

Enter any Operation to perform: 
Enter Number 1: 684375
Enter Number 2: 7474   
Subtraction = 91.5674

*/