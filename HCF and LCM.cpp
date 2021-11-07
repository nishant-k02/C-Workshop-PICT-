# include <iostream>
# include <string>
using namespace std;
int main()
{
  int a,b,c;
  cout<< "\t\t\t Code for HCF and LCM :"<<endl;
  cout<< "Enter first no. : ";
  cin>>a;
  cout<< "Enter sec. no. : ";
  cin>>b;
  c=a*b;
  while(a!=b)
    {
      if(a>b)
        a=a-b;
      else
        b=b-a;
    }
  cout<< "HCF of Two numbers = " << a<<endl;
  cout<< "LCM of Two numbers = " << c/a<<endl;
  return 0;
}

/* OUTPUT

                        Code for HCF and LCM :
Enter first no. : 64     
Enter sec. no. : 12
HCF of Two numbers = 4
LCM of Two numbers = 192 */