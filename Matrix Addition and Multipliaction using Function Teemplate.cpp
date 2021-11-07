#include <iostream>
#include <iomanip>
int const size = 3;

using namespace std;

// for addition
template<class M, class S>
void add(M a[][size], S b[][size])
{
    cout<<endl<<"Addition of Two Matrix is: "<<endl;
    
    S c[size][size];
    for (int i=0; i<size;i++)
    {
        for(int j=0; j<size;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}

//For Multiplication

template <class M,class S>
void mul(M a[][size],S b[][size])
{
    cout<<endl<<"Multiplication of Two Matrix is: "<<endl;    
    
    S c[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            for(int k=0; k<size; k++)
            {
                c[i][j] = a[i][k]*b[k][j];
            }
        }
    }
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
}


int main()
{
    
    int x[size][size], y[size][size];
    float g[size][size],h[size][size];
    
    //Read Matrix
    
    cout<<"Enter Values for Int Matrix X: "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>x[i][j];
        }
        cout<<endl;
    }
    
    cout<<endl<<"Enter Values for Float Matrix G: "<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>g[i][j];
        }
        cout<<endl;
    }
    
    //Displaying Matrix
    
    cout<<endl<<endl<<"Matrix X: \n";
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<x[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl<<"Matrix Y: \n";
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<g[i][j]<<"\t";
        }
        cout<<endl;
    }
    add(x,g);
    mul(x,g);
    return 0;
}


/*

Enter Values for Int Matrix X: 
2
3
1

4
6
5

7
8
7


Enter Values for Float Matrix G: 
4
5
6

7
8
9

3.4
4.6
3.8



Matrix X: 
2       3       1
4       6       5
7       8       7


Matrix Y: 
4       5       6
7       8       9
3.4     4.6     3.8

Addition of Two Matrix is: 
6       8       7
11      14      14
10.4    12.6    10.8

Multiplication of Two Matrix is: 
3.4     4.6     3.8
17      23      19
23.8    32.2    26.6

*/