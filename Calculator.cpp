# include <iostream>
using namespace std;

int main() {
    char op;
  
    cout << "\t\t\t\t\tEnter operator: +, -, *, /: ";
    cin >> op;

    
    switch(op) {
        case '+':
            int num1, num2;
        
            cout << "Enter two operands 1: ";
            cin >> num1 ;
            cout << "Enter two operands 2: ";
            cin >> num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            int num3, num4;
        
            cout << "Enter two operands 1: ";
            cin >> num3 ;
            cout << "Enter two operands 2: ";
            cin >> num4;
            cout << num3 << " - " << num4 << " = " << num3 - num3;
            break;

        case '*':
            float num5, num6;
            
            cout << "Enter two operands 1: ";
            cin >> num5 ;
            cout << "Enter two operands 2: ";
            cin >> num6;
            cout << num5 << " * " << num6 << " = " << num5 * num6;
            break;

        case '/':
            double num7 ,num8;
            
            cout << "Enter two operands 1: ";
            cin >> num7 ;
            cout << "Enter two operands 2: ";
            cin >> num8;
            cout << num7 << " / " << num8 << " = " << (float)num7 / num8;
            break;

        default:
            
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}


/* OUTPUT -

                                        Enter operator: +, -, *, /: *
Enter two operands 1: 3.5
Enter two operands 2: 4.8
3.5 * 4.8 = 16.8 */