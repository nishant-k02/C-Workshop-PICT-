#include <iostream>
#include<conio.h>

using namespace std;


int main() {

  
   int var[5];
   int i = 0, sum = 0, x;
   cout<<"Enter number of Elements: "<<endl;
   cin>>x;

   
   int *pt;

   cout << "\t\t\tPointer Example C++ Program :Sum of Integer Pointer and Array \n";

   
   pt = &var[0];

   cout << "Enter " << x << " Elements : \n";

   while (i < x) {

      cin>>*pt;
      i++;
      pt++;
   }

   i = 0;
   pt = &var[0];
//   cout << "\nPrint Elements:\n";
   while (i < x) {
      i++;

      sum = sum + *pt;
      pt++;
   }

   cout << "\nSum of Array : " << sum;

   getch();
   return 0;
}


/* OUTPUT

Enter number of Elements: 
5
                        Pointer Example C++ Program :Sum of Integer Pointer and Array 
Enter 5 Elements : 
1
2
3
4
5

Sum of Array : 15

*/