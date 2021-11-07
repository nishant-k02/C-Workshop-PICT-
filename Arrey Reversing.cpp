#include <iostream>

using namespace std;

int main()
{
    int n, temp,s,j ;
    
    cout<<"Enter No. of elements of array: ";
    cin>>n;
    
    int arr[n];
    cout << "Enter array elements: "<<endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    j = n - 1;
    for (int i = 0; i < j; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
cout<<"Array elements at odd index in Reversed Format: "<<endl;
    for(int i=1; i<n; i=i+2)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}


/* Output
    
Enter No. of elements of array: 5
Enter array elements: 
5
4
3
6
2
Array elements at odd index in Reversed Format: 
6
4  */
