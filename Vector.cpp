#include<iostream>
using namespace std;

class Vector
{
    
    int x, y, z, up, X, Y, Z, scm;
    
    public:
    
    Vector()
    {
        cout<<"\t\t\t\t\tEnter the Scaler values of Vector quantity: "<<endl;
        cout<<"\nIn X-Direction: ";
        cin>>x;
        cout<<"\nIn Y-Direction: ";
        cin>>y;
        cout<<"\nIn Z-Direction: ";
        cin>>z;
        
        if (x==1 && y==1 && z==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<"i+"<<"j+"<<"k"<<endl;
        }
        else if (x==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<"i+"<<y<<"j+"<<z<<"k"<<endl;
        }
        else if (y==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<x<<"i+"<<"j+"<<z<<"k"<<endl;
        }
        else if (z==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<x<<"i+"<<y<<"j+"<<"k"<<endl;
        }
        else if (x==1 && y==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<"i+"<<"j+"<<z<<"k"<<endl;
        }
        else if (x==1 && z==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<"i+"<<y<<"j+"<<"k"<<endl;
        }
        else if (y==1 && z==1)
        {
            cout<<"\n\t\t\t\t\tEnterd Vector is: "<<x<<"i+"<<"j+"<<"k"<<endl;
        }
        
        else 
        {
            
        cout<<"\n\t\t\t\t\tEnterd Vector is: "<<x<<"i+"<<y<<"j+"<<z<<"k"<<endl;
        
        }
        cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
    }
    
    void update()
    {
        
        cout<<"1. In X-Direction: "<<endl;
        cout<<"2. In Y-Direction: "<<endl;
        cout<<"3. In Z-Direction: "<<endl;
        
        cout<<"\n\t\t\t\tEnter the Direction in which you want to modify the vector: ";
        cin>>up;
        
        switch(up)
        {
            case 1:
            cout<<"\nEnter new X: ";
            cin>>X;
            
            cout<<"\n\t\t\t\t\tUpdated Vector is: "<<X<<"i+"<<y<<"j+"<<z<<"k"<<endl;
            cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
            
            cout<<"\nEnter Scaler Quntity to multiply by: ";
            cin>>scm;
            
            cout<<"\n\t\t\t\t\tScaler Multiplied Vector is: "<<scm*X<<"i+"<<scm*y<<"j+"<<scm*z<<"k"<<endl;
            
            break;
               
            case 2:
            cout<<"\nEnter new Y: ";
            cin>>Y;
            
            cout<<"\n\t\t\t\t\tUpdated Vector is: "<<x<<"i+"<<Y<<"j+"<<z<<"k"<<endl;
            cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
            
            cout<<"\nEnter Scaler Quntity to multiply by: ";
            cin>>scm;
            
            cout<<"\n\t\t\t\t\tScaler Multiplied Vector is: "<<scm*x<<"i+"<<scm*Y<<"j+"<<scm*z<<"k"<<endl;
            break;
            
            case 3:
            cout<<"\nEnter new Z: ";
            cin>>Z;
            
            cout<<"\n\t\t\t\t\tUpdated Vector is: "<<x<<"i+"<<y<<"j+"<<Z<<"k"<<endl;
            cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
            
            cout<<"\nEnter Scaler Quntity to multiply by: ";
            cin>>scm;
            
            cout<<"\n\t\t\t\t\tScaler Multiplied Vector is: "<<scm*x<<"i+"<<scm*y<<"j+"<<scm*Z<<"k"<<endl;
            break;
        }
        
    }
    
    ~Vector()
    {
        
        cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;   
        cout<<"\nProgram Ended!!";
        
    }
    
};

int main()
{
    Vector v;
    v.update();
    return 0;
}


/*


                                        Enter the Scaler values of Vector quantity: 

In X-Direction: 2

In Y-Direction: 1

In Z-Direction: 3

                                        Enterd Vector is: 2i+j+3k

        -----------------------------------------------------------------------------------------------------------------------
1. In X-Direction: 
2. In Y-Direction: 
3. In Z-Direction: 

                                Enter the Direction in which you want to modify the vector: 2

Enter new Y: 5

                                        Updated Vector is: 2i+5j+3k

        -----------------------------------------------------------------------------------------------------------------------

Enter Scaler Quntity to multiply by: 2

                                        Scaler Multiplied Vector is: 4i+10j+6k

        -----------------------------------------------------------------------------------------------------------------------

Program Ended!!

*/

