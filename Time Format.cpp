#include <iostream>
using namespace std;


class seconds
{
  int sec, hrs, min, ss;
  
  public:
  
  void getsec()
  {
      cout<<"Enter Time in Seconds: ";
      cin>>sec;
  }
  
  void showTime()
  {
      hrs = sec/3600;
      //cout<<"Hours is: "<<hrs;
      
      min = (sec - hrs*3600)/60;
      //cout<<"Minute is: "<<min;
      
      ss = (sec - hrs*3600)-min*60;
      //cout<<"Seconds is: "<<ss;
      
      cout<<"\nTime in (HH:MM:SS Format) for "<<sec<<" Seconds is: "<<hrs<<":"<<min<<":"<<ss;
  }
    
};

int main()
{
    seconds s;
    s.getsec();
    s.showTime();
    
    return 0;
}




/* OUTPUT

Enter Time in Seconds: 4567

Time in (HH:MM:SS Format) for 4567 Seconds is: 1:16:7

*/
