#include <iostream>
#include<conio.h>

using namespace std;


int main() {

  
   
   int i = 0, sum = 0, x, max =0, max2 = 0 ;
   cout<<"Enter number of Elements: "<<endl;
   cin>>x;
   int var[x];

   
   int *pt;

   cout << "\t\t\tPointer Example C++ Program :Largest and 2nd Largest in Araay using Pointer and Array \n";

   
   pt = &var[0];

   cout << "Enter " << x << " Elements : \n";

   while (i < x) 
   {

      cin>>*pt;
      i++;
      pt++;
   }

   i = 0;
   pt = &var[0];
//   cout << "\nPrint Elements:\n";
   while (i < x) 
   {
      i++;
        
      if (*pt>max)
      {
          max = *pt;
      }
      pt++;
   }
   cout<<"Largest Number in Array: "<<max<<endl;
   
   i = 0;
   pt = &var[0];
    while (i < x) 
    {
      i++;
        
      if (*pt>max2 && *pt!=max)
      {
          max2 = *pt;
      }
      pt++;
    }
     cout<<"2nd Largest Number in Array: "<<max2<<endl;
   
   getch();
   return 0;
}


/* OUTPUT

Enter number of Elements: 
7
                        Pointer Example C++ Program :Largest and 2nd Largest in Araay using Pointer and Array 
Enter 7 Elements : 
23
45
65
23
11
34
78
Largest Number in Array: 78
2nd Largest Number in Array: 65

*/