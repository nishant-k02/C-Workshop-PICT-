#include <iostream>
using namespace std;

class password 
{
    string user;
    string pass;
    
    public:
    void getinfo();
    void displayinfo();
};

void password::getinfo()
{
    cout<<"Enter UserName: ";
    cin>>user;
    cout<<"Enter password: ";
    cin>>pass;
}

void password::displayinfo()
{
    if(user=="user"&&pass=="pwd")
    {
        cout<<"Successfull";
    }
    else
    cout<<"Unsuccessfull";
}

int main() 
{
    password p1;
    p1.getinfo();
    p1.displayinfo();
    
    return 0;
}


/*OUTPUT

Enter UserName: user
Enter password: pwd
Successfull

Enter UserName: iutewyr
Enter password: pwd
Unsuccessfull
*/


