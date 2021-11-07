#include <iostream>

using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    cout<<"Number after swapping are "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
void swap(double a, double b)
{
    double temp;
    temp = a;
    a = b;
    b = temp;
    
    cout<<"Number after swapping are "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main()
{
    swap(100000, 54694);
    swap(23.5,  45.5);
    return 0;
}


/* OUTPUT

Number after swapping are 
a = 54694
b = 100000
Number after swapping are 
a = 45.5
b = 23.5

*/
