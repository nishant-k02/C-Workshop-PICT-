#include <iostream>
#include<conio.h>

using namespace std;


int main()
{

   int i = 0, count = 0, x, posi = 0,n;
   cout<<"Enter number of Elements: "<<endl;
   cin>>x;
   int var[x];

   int *pt;

   cout << "\t\t\tSearch Element in Araay using Pointer and Array \n"<<endl;

   
   pt = &var[0];

   cout << "Enter " << x << " Elements of Array: \n";

   while (i < x) 
   {
      cin>>*pt;
      i++;
      pt++;
   }
    
     cout<<"Enter number to be Searched: ";
     cin>>n;
     
   i = 0;
   pt = &var[0];
//   cout << "\nPrint Elements:\n";
   while (i < x) 
   {
      i++;
        
      if (*pt == n)
      {
            count=1;
            posi=i+1;
            break;
      }
      pt++;
      
   }
   if (count==0)
      {
          cout<<"\nElement not found!!";
      }
      else
      {
          cout<<"\nElement "<<n<<" Found At Position "<<posi<<" and at index "<<i;
      }
   
   getch();
   return 0;
}


/* OUTPUT

TEST CASE 1:

Enter number of Elements: 
5
                        Search Element in Araay using Pointer and Array 

Enter 5 Elements of Array: 
1
2
3
4
5
Enter number to be Searched: 4

Element 4 Found At Position 5 and at index 4

TEST CASE 1:

Enter number of Elements: 
5
                        Search Element in Araay using Pointer and Array 

Enter 5 Elements of Array: 
6
5
7
8
94
Enter number to be Searched: 2

Element not found!!

*/