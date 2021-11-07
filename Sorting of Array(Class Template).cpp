#include <iostream>

using namespace std;

template<class M>
void sort(M a[])
{
    int n;
    cout<<endl<<"Sorted Array: "<<endl<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (a[i]>a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }

}    
    

int main()
{
    int n;
    cout<<"\t\t\t\t\tEnter number of Elements in Array: ";
    cin>>n;
    int x[n];
    
    cout<<"\nEnter elements of Array: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
   sort(x);
    return 0;
}


/* OUTPUT 

                                            Enter number of Elements in Array: 5

Enter elements of Array: 
5
4
3
2
1

Sorted Array: 

1
2
3
4
5

*/