#include <iostream>
using namespace std;

class Student
{
    char name[30];
    int roll_no, n;
    int total;
    float ptg;
    
    public:
    
    void getinfo()
    {
        // cout<<"Enter number of students you want details of: ";
        // cin>>n;
        
            cout<<"\nEnter Name of student: ";
            cin>>name;
            cout<<"Enter Roll no: ";
            cin>>roll_no;
            cout<<"Enter Total Marks obtained outoff 650: "<<endl;
            cin>>total;
    }
    
    void display()
    {
        
            cout<<"\nName: "<<name<<endl;
            cout<<"Roll no: "<<roll_no<<endl;
            cout<<"Total Marks obtained: "<<total<<"/650"<<endl;
            ptg = (float)(total*100)/650;
            cout<<"Percentage obtained: "<<ptg<<"%"<<endl;
        
    }
};


int main(int argc, char const *argv[])
{
    
    int count;
    cout << "Enter the number of students you want details of : ";
    cin >> count;

    if (count > 0)
    {
        
        Student studentArray[count];
        for (int i = 0; i < count; i++)
        {
            cout<<"\n\t\tEnter details of student "<<i+1<<endl;
            studentArray[i].getinfo();
        }
        cout<<"\n\t\t--------------------Students Details--------------------"<<endl;


        for (int i = 0; i < count; i++)
        {
            studentArray[i].display();
        }
    }
    else
    {
        cout << "Please enter a valid number." << endl;
    }
    return 0;
}




/* OUTPUT

Enter the number of students you want details of : 2

                Enter details of student 1

Enter Name of student: Nishant
Enter Roll no: 236
Enter Total Marks obtained outoff 650: 
600

                Enter details of student 2

Enter Name of student: Chairag
Enter Roll no: 237
Enter Total Marks obtained outoff 650: 
620

                --------------------Students Details--------------------

Name: Nishant
Roll no: 236
Total Marks obtained: 600/650
Percentage obtained: 92.3077%

Name: Chairag
Roll no: 237
Total Marks obtained: 620/650
Percentage obtained: 95.3846%

*/