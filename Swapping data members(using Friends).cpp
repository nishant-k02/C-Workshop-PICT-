#include<iostream>
using namespace std;
class Derived;
class Base
{
        int num1;
    public:
        Base()
        {
                num1=10;
                cout<<"\n Value of Number 1 before Swapping : "<<num1;
        }
        void show()
        {
                cout<<"\n\n Value of Number 1 after Swapping : "<<num1;
        }
        friend void swap(Base *num1, Derived *num2);
};
class Derived
{
        int num2;
    public:
        Derived()
        {
                num2=20;
                cout<<"\n Value of Number 2 before Swapping : "<<num2;
        }
        void show()
        {
                cout<<"\n Value of Number 2 after Swapping: "<<num2;
        }
        friend void swap(Base *num1, Derived *num2);
};
void swap(Base *no1, Derived *no2)
{
        int no3;
        no3=no1->num1;
        no1->num1=no2->num2;
        no2->num2=no3;
}
int main()
{
        Base b;
        Derived d;
        swap(&b, &d);
        b.show();
        d.show();
        return 0;
}


/* OUPUT

 Value of Number 1 before Swapping : 10
 Value of Number 2 before Swapping : 20

 Value of Number 1 after Swapping : 20
 Value of Number 2 after Swapping: 10

*/