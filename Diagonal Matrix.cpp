#include <iostream>
#define N 4

using namespace std;

int main()
{
        int i,j,Matrix[N][N];
 
        cout<<"\nENTER MATRIX\n";
        for(i=0 ; i<N ; i++)
        {
                for(j=0 ; j<N ; j++)
                {
                        cout<<"ENTER ["<<i<<"]["<<j<<"] ELEMENT: ";
                        cin>>Matrix[i][j]; 
                 } 
        }
 
        cout<<"\nGIVEN MATRIX:\n";
        for(i=0 ; i<N ; i++)
        {
                for(j=0 ; j<N ; j++)
                {
                         cout<<Matrix[i][j]<<"  "; 
                } 
                cout<<endl;
        }
 
        cout<<"\nDIAGONAL ELEMENTS\n";
 
        cout<<"\n";
        for(i=0 ; i<N ; i++)
        {
                 cout<<Matrix[i][i]<<"  ";
        }
 
        cout<<"\n";
        for(i=0,j=N-1 ; i<N ; i++,j--)
        {
                cout<<Matrix[i][j]<<"  ";
        }
 
         return 0; 
}


/* OUTPUT


ENTER MATRIX
ENTER [0][0] ELEMENT: 1
ENTER [0][1] ELEMENT: 2
ENTER [0][2] ELEMENT: 3
ENTER [0][3] ELEMENT: 4
ENTER [1][0] ELEMENT: 4
ENTER [1][1] ELEMENT: 3
ENTER [1][2] ELEMENT: 2
ENTER [1][3] ELEMENT: 1
ENTER [2][0] ELEMENT: 7
ENTER [2][1] ELEMENT: 8
ENTER [2][2] ELEMENT: 9
ENTER [2][3] ELEMENT: 6
ENTER [3][0] ELEMENT: 6
ENTER [3][1] ELEMENT: 5
ENTER [3][2] ELEMENT: 4
ENTER [3][3] ELEMENT: 3

GIVEN MATRIX:
1  2  3  4  
4  3  2  1  
7  8  9  6  
6  5  4  3  

DIAGONAL ELEMENTS

1  3  9  3  
4  2  8  6 */