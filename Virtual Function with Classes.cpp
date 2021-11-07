#include <iostream>

using namespace std;

class Animals 
{
    public:
    
    virtual void sound()
    {
        cout<<"This is the Parent Class!";
    }
};

class Dogs : public Animals
{
    private:
    
    virtual void sound()
    {
        cout<<"\nDog Barks!"<<endl;
    }
};

class Cats :  public Animals
{
    private:
    
    virtual void sound()
    {
        cout<<"Cats do Meow Meow!";
    }
};

int main()
{
    cout<<"\t\t\t\t\t\t----------Virtual Function Program---------"<<endl;
    Animals *a;
    Dogs d;
    Cats c;
    a = &d;
    a->sound();
    a = &c;
    a->sound();
    
    return 0;
}


/* OUTPUT

                                                    ----------Virtual Function Program---------

Dog Barks!
Cats do Meow Meow!
  
*/
