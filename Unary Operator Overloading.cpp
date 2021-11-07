#include <iostream>

using namespace std; 

class Test 
{
    int a,b;
    public:
    
    void getdata()
    {
        cout<<"\t\t\t\t\t\t--------- Unary Operator Overloading ---------"<<endl;
        
        cout<<"\nEnter number A: ";
        cin>>a;
        cout<<"Enter number B: ";
        cin>>b;
    }
    
    void operator ++()
    {
        a++;
        b++;
    }
    
    void operator --()
    {
        a--;
        b--;
    }
    
    void display()
    {
        cout<<a<<endl;
        cout<<b;
    }
    
};

int main()
{
    Test t;
        t.getdata();
        ++t;
        cout<<"\nAfter Incrementing: "<<endl;
        t.display();
        --t;
        --t;
        cout<<"\n\nAfter Decrementing: "<<endl;
        t.display();
        return 0;   ;
}



/* OUTPUT

                                                    --------- Unary Operator Overloading ---------

Enter number A: 20
Enter number B: 19

After Incrementing: 
21
20

After Decrementing: 
19
18

*/