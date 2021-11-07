#include <iostream>
#include <cstring>
using namespace std;

struct Books
{
    char title[50];
    char Pattern[50];
    char Subject[50];
    int Book_Price;
    
};
int main()
{
    struct Books Book1;
    struct Books Book2;
    
    strcpy(Book1.title, "Democratic Politics");
    strcpy(Book1.Pattern,"NCERT");
    strcpy(Book1.Subject,"Social Science");
    Book1.Book_Price=80;
    
    strcpy(Book2.title,"Contemporary India");
    strcpy(Book2.Pattern,"NCERT");
    strcpy(Book2.Subject,"Social Science");
    Book2.Book_Price=55;
    
    
            // Print Book1 info
    cout<<"\t\t\t\t\t\t------------Book 1 Details------------"<<endl;
    cout << "\n\t\t\t\t\t\t\tTitle : " << Book1.title <<endl;
    cout << "\t\t\t\t\t\t\tPattern : " << Book1.Pattern <<endl;
    cout << "\t\t\t\t\t\t\tSubject : " << Book1.Subject <<endl;
    cout << "\t\t\t\t\t\t\tPrice : " << Book1.Book_Price <<endl;
    // Print Book2 info
    cout<<"\n\t\t\t\t\t\t------------Book 2 Details------------"<<endl;
    cout << "\n\t\t\t\t\t\t\tTitle : " << Book2.title <<endl;
    cout << "\t\t\t\t\t\t\tPattern : " << Book2.Pattern <<endl;
    cout << "\t\t\t\t\t\t\tSubject : " << Book2.Subject <<endl;
    cout << "\t\t\t\t\t\t\tPrice : " << Book2.Book_Price <<endl;
}


/* OUTPUT

                                                    ------------Book 1 Details------------

                                                        Title : Democratic Politics
                                                        Pattern : NCERT
                                                        Subject : Social Science
                                                        Price : 80

                                                    ------------Book 2 Details------------

                                                        Title : Contemporary India
                                                        Pattern : NCERT
                                                        Subject : Social Science
                                                        Price : 55

*/