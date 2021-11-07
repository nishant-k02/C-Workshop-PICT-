#include <iostream>
using namespace std;

typedef struct complex 
{
    float real;
    float imag;
} complexNumber;

complexNumber addComplexNumbers(complex, complex);
complexNumber subtractComplexNumbers(complex, complex);
complexNumber multiplyComplexNumbers(complex, complex);
complexNumber divideComplexNumbers(complex, complex);


int main() {
    complexNumber num1, num2, complexSum, complexSubtract, complexMultiply, complexDivide;
    char signOfImag;

    cout << "\t\t\t\t\tFor 1st complex number," << endl;
    cout << "\nEnter real and imaginary parts respectively: " ;
    cin >> num1.real >> num1.imag;

    cout << endl
         << "\t\t\t\t\tFor 2nd complex number," << endl;
    cout << "\nEnter real and imaginary parts respectively: ";
    cin >> num2.real >> num2.imag;

    complexSum = addComplexNumbers(num1, num2);
    complexSubtract = subtractComplexNumbers(num1, num2);
    complexMultiply = multiplyComplexNumbers(num1, num2);
    complexDivide = divideComplexNumbers(num1, num2);

   
    signOfImag = (complexSum.imag > 0) ? '+' : '-';
    signOfImag = (complexSubtract.imag > 0) ? '+' : '-';
    signOfImag = (complexMultiply.imag > 0) ? '+' : '-';
    signOfImag = (complexDivide.imag > 0) ? '+' : '-';

    
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;
    complexSubtract.imag = (complexSubtract.imag > 0) ? complexSubtract.imag : -complexSubtract.imag;
    complexMultiply.imag = (complexMultiply.imag > 0) ? complexMultiply.imag : -complexMultiply.imag;
    complexDivide.imag = (complexDivide.imag > 0) ? complexDivide.imag : -complexDivide.imag;

    cout<<"\n\t-----------------------------------------------------------------------------------------------------------------------"<<endl;
    
    cout << "\n\t\t\t\t\tSum = " << complexSum.real << signOfImag << complexSum.imag << "i";
    cout << "\n\t\t\t\t\tSubtraction = " << complexSubtract.real << signOfImag << complexSubtract.imag << "i";
    cout << "\n\t\t\t\t\tMultiplication = " << complexMultiply.real << signOfImag << complexMultiply.imag << "i";
    cout << "\n\t\t\t\t\tDivision = " << complexDivide.real << signOfImag << complexDivide.imag << "i";

    return 0;
}

complexNumber addComplexNumbers(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}

complexNumber subtractComplexNumbers(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real - num2.real;
    temp.imag = num1.imag - num2.imag;
    return (temp);
}

complexNumber multiplyComplexNumbers(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real * num2.real;
    temp.imag = num1.imag * num2.imag;
    return (temp);
}

complexNumber divideComplexNumbers(complex num1, complex num2)
{
    complex temp;
    temp.real = num1.real / num2.real;
    temp.imag = num1.imag / num2.imag;
    return (temp);
}




/* OUTPUT

                                            For 1st complex number,

Enter real and imaginary parts respectively: 2 3

                                        For 2nd complex number,

Enter real and imaginary parts respectively: 4 5

        -----------------------------------------------------------------------------------------------------------------------

                                        Sum = 6+8i
                                        Subtraction = -2+2i
                                        Multiplication = 8+15i
                                        Division = 0.5+0.6i

*/