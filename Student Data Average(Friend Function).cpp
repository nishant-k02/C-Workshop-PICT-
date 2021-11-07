#include<iostream>

using namespace std;
class student
{
    char name[30];
    int roll_no;
    int marks[5];
    float sum = 0;
    float avg;
    
    public:
    
    void getinfo()
    {
        cout<<"Enter Name of Student: ";
        cin>>name;
        cout<<"Enter Roll no: ";
        cin>>roll_no;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter Marks in Subject "<<i+1<<": ";
            cin>>marks[i];
        }
    }
    friend float average(student f);
};

float average(student f)
{
    for(int i = 0; i<5; i++)
    {
        
        f.sum = f.sum + f.marks[i];
        f.avg = (float)f.sum/5;
    }
    cout<<"\n\t-----------------------------------Details of Student-----------------------------------"<<endl;
    cout<<"\nName: "<<f.name<<endl;
    cout<<"Roll no: "<<f.roll_no<<endl;
    cout<<"Average of 5 Subjects: "<<f.avg<<endl;
    return 0.1;
}

int main()

{
    student s;
    s.getinfo();
    average(s);

return 0;

}




/* 

Enter Name of Student: Nishant
Enter Roll no: 236
Enter Marks in Subject 1: 45
Enter Marks in Subject 2: 43
Enter Marks in Subject 3: 44
Enter Marks in Subject 4: 42
Enter Marks in Subject 5: 41

        -----------------------------------Details of Student-----------------------------------

Name: Nishant
Roll no: 236
Average of 5 Subjects: 43

*/