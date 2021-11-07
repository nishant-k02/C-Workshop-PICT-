#include <iostream>

using namespace std;

void details(string name, string city, string state, string address, string country = "India")
{
    
    cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
    
    cout<<"\n\t\t\t\tName: "<<name<<endl;
    cout<<"\t\t\t\tCountry: "<<country<<endl;
    cout<<"\t\t\t\tCity: "<<city<<endl;
    cout<<"\t\t\t\tState: "<<state<<endl;
    cout<<"\t\t\t\tAddress: "<<address<<endl;
}

int main()
{
   
    string names, cities, states, countries;
    string addresses;
    
    cout<<"Enter The name: ";
    getline(cin,names);
    
    cout<<"Enter The Country: ";
    getline(cin,countries);
    
    cout<<"Enter The City: ";
    getline(cin,cities);
    
    cout<<"Enter The State: ";
    getline(cin,states);
    
    cout<<"Enter The Address: ";
    getline(cin,addresses);
    
  
    details(names, cities, states, addresses);

    return 0;
}



/* OUTPUT 

Enter The name: Nishant Khandhar
Enter The Country: 
Enter The City: Pune
Enter The State: Maharashtra
Enter The Address: Shivaji Garden

        -----------------------------------------------------------------------------------------------------------------------

                                Name: Nishant Khandhar
                                Country: India
                                City: Pune
                                State: Maharashtra
                                Address: Shivaji Garden

*/
