#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    char again;
    int product[2][2];

    int matrix1[2][3] = {{2,3,4},
                         {3,4,6}};

    int matrix2[3][2] = {{3,4},
                         {2,3},
                         {4,2}};
 

    do
    {
        for (a = 0; a < 2; a++)
        {
            for (b = 0; b < 2; b++)
            {
                product[a][b] = 0;
                for (c = 0; c < 3; c++)
                {
                   product[a][b] = product[a][b] + matrix1[a][c] * matrix2[c][b];
                }
            }
        }
        

        cout << "RESULT - PRODUCT" << endl << endl;
        cout << "=======================================" << endl;
        cout << "Matrix 1       Matrix 2         Product" << endl;
        cout << "=======================================" << endl;

        for (a = 0; a < 3; a++)
        {
            if (a < 2)
            {
                for (b = 0; b < 3; b++)
                {
                    cout << matrix1[a][b] << " ";
                }
            }
            else
            {
                cout << "      ";
            }

            cout << "\t\t\t";



            for (b = 0; b < 2; b++)
            {
                cout << matrix2[a][b] << " ";
            }

            cout << "\t\t\t";

            if (a < 2)
            {
                for (b = 0; b < 2; b++)
                {
                    cout << product[a][b] << " ";
                }
            }

            cout << endl;
        }

        cout << "=======================================" << endl << endl;

        cout << "Another Entry [Y/N] : ";
        cin >> again;
        cout << endl;

    } while (again == 'Y' || again == 'y');

    return 0;
}