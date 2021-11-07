#include <iostream>
using namespace std;

struct student
{
    char name[20];
    char department[10];
    int  year;
};

int main() 
{
    student s = {"Nishant Khandhar", "Computer", 2};
    student st = {" Avleen Khanuja", "IT", 2};
    student stu = {"Prasad Kurale", "Computer", 2};
    student std = {"Vibhor Sharma", "Computer", 2};
    
    cout<<"Student Name = "<<s.name<<endl;
    cout<<"Student's Department = "<<s.department<<endl;
    cout<<"Student's year of studying =  = "<<s.year<<endl<<endl;  
    
    cout<<"Student Name = "<<st.name<<endl;
    cout<<"Student's Department = "<<st.department<<endl;
    cout<<"Student's year of studying =  = "<<st.year<<endl<<endl;  
    
    cout<<"Student Name = "<<stu.name<<endl;
    cout<<"Student's Department = "<<stu.department<<endl;
    cout<<"Student's year of studying =  = "<<stu.year<<endl<<endl;  
    
    cout<<"Student Name = "<<std.name<<endl;
    cout<<"Student's Department = "<<std.department<<endl;
    cout<<"Student's year of studying =  = "<<std.year<<endl;  
    
    return 0;
}


/* OUTPUT

Student Name = Nishant Khandhar
Student's Department = Computer
Student's year of studying =  = 2

Student Name =  Avleen Khanuja
Student's Department = IT
Student's year of studying =  = 2

Student Name = Prasad Kurale
Student's Department = Computer
Student's year of studying =  = 2

Student Name = Vibhor Sharma
Student's Department = Computer
Student's year of studying =  = 2
*/
