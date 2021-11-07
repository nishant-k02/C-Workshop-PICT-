#include<iostream>
 
using namespace std;
   
int main(){
   
    int  i, j, isPrime;
 
    cout << "Prime Numbers between 1 to 20: \n";
      
    for(i = 2; i <= 20; i++)
    {
        isPrime = 0;
      
        for(j = 2; j <= i/2; j++)
        {
            
             if(i % j == 0)
             {
                 isPrime = 1;
                 break;
             }
        }
           
        if(isPrime==0 )
            cout << i << " \n";
    }
 
   return 0;
}

/* OUTPUT

Prime Numbers between 1 to 20: 
2 
3 
5 
7 
11 
13 
17 
19 */
