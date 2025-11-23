#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void addMatrices () {
	int A[10][10], B[10][10], C[10][10], T[10][10];
    int rowA, rowB, colA, colB;
    cout << "Input Number of rows you want in Matrix 'A' :: ";
        cin >> rowA;
        cout << "Input Number of Columns You want in Matrix 'A' ::  ";
        cin >> colA;

        cout << "Input Elements Of Matrix 'A' \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++) {
                cout << " A = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> A[i][j];
            }
        }

        cout << "Input Number of rows you want in Matrix 'B' :: ";
        cin >> rowB;
        cout << "Input Number of columns you want in Matrix 'B' :: ";
        cin >> colB;

        cout << "Input Elements Of Matrix 'B' \n";
        for (int i = 0; i < rowB; i++) {
            for (int j = 0; j < colB; j++) {
                cout << " B = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> B[i][j];
            }
        }

        cout << "\nMatrix 'A' is \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++) cout << A[i][j] << " ";
            cout << endl;
        }

        cout << "\nMatrix 'B' is \n";
        for (int i = 0; i < rowB; i++) {
            for (int j = 0; j < colB; j++) cout << B[i][j] << " ";
            cout << endl;
        }

        if (rowA == rowB && colA == colB) {
            for (int i = 0; i < rowA; i++)
                for (int j = 0; j < colA; j++)
                    C[i][j] = A[i][j] + B[i][j];

            cout << "\nThe Addition Of Matrix 'A' and 'B' is \n";
            for (int i = 0; i < rowA; i++) {
                for (int j = 0; j < colA; j++) cout << C[i][j] << " ";
                cout << endl;
            }
        } else {
            cout << "  >> The Addition is not possible. Read given note.\n";
        }
}
void substractMatrices(){
	int A[10][10], B[10][10], C[10][10], T[10][10];
    int rowA, rowB, colA, colB;
     // Subtraction
        cout << "Input Number of rows you want in Matrix 'A' :: ";
        cin >> rowA;
        cout << "Input Number of Columns You want in Matrix 'A' ::  ";
        cin >> colA;

        cout << "Input Elements Of Matrix 'A' \n";
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++) {
                cout << " A = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> A[i][j];
            }

        cout << "Input Number of rows you want in Matrix 'B' :: ";
        cin >> rowB;
        cout << "Input Number of columns you want in Matrix 'B' :: ";
        cin >> colB;

        cout << "Input Elements Of Matrix 'B' \n";
        for (int i = 0; i < rowB; i++)
            for (int j = 0; j < colB; j++) {
                cout << " B = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> B[i][j];
            }

        cout << "\nMatrix 'A' is \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++) cout << A[i][j] << " ";
            cout << endl;
        }

        cout << "\nMatrix 'B' is \n";
        for (int i = 0; i < rowB; i++) {
            for (int j = 0; j < colB; j++) cout << B[i][j] << " ";
            cout << endl;
        }

        if (rowA == rowB && colA == colB) {
            for (int i = 0; i < rowA; i++)
                for (int j = 0; j < colA; j++)
                    C[i][j] = A[i][j] - B[i][j];

            cout << "\nThe Subtraction Of Matrix 'A' and 'B' is \n";
            for (int i = 0; i < rowA; i++) {
                for (int j = 0; j < colA; j++) cout << C[i][j] << " ";
                cout << endl;
            }
        } else {
            cout << " > > The Subtraction is not possible. Read given note!\n";
        }
    
}
void multiplicationMatrices(){
	int A[10][10], B[10][10], C[10][10], T[10][10];
    int rowA, rowB, colA, colB;
    cout << "Input Number of rows you want in Matrix 'A' :: ";
        cin >> rowA;
        cout << "Input Number of Columns You want in Matrix 'A' ::  ";
        cin >> colA;

        cout << "Input Elements Of Matrix 'A' \n";
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++) {
                cout << " A = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> A[i][j];
            }

        cout << "Input Number of rows you want in Matrix 'B' :: ";
        cin >> rowB;
        cout << "Input Number of columns you want in Matrix 'B' :: ";
        cin >> colB;

        cout << "Input Elements Of Matrix 'B' \n";
        for (int i = 0; i < rowB; i++)
            for (int j = 0; j < colB; j++) {
                cout << " B = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> B[i][j];
            }

        cout << "\nMatrix 'A' is \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++) cout << A[i][j] << " ";
            cout << endl;
        }

        cout << "\nMatrix 'B' is \n";
        for (int i = 0; i < rowB; i++) {
            for (int j = 0; j < colB; j++) cout << B[i][j] << " ";
            cout << endl;
        }

        if (colA == rowB) {
            
            for (int i = 0; i < rowA; i++)
                for (int j = 0; j < colB; j++)
                    C[i][j] = 0;

            
            for (int i = 0; i < rowA; i++) {
                for (int j = 0; j < colB; j++) {
                    for (int k = 0; k < colA; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }

            cout << "\nThe Multiplication Of Matrix A and B is \n";
            for (int i = 0; i < rowA; i++) {
                for (int j = 0; j < colB; j++) cout << C[i][j] << " ";
                cout << endl;
            }
        } else {
            cout << "Multiplication Not possible please read the given note ! \n";
        }
    
}
void transposeMatrices() {
	int A[10][10], C[10][10], T[10][10];
    int rowA, rowB, colA, colB;
    // Transpose
        cout << "Input Number of rows you want in Matrix 'A' :: ";
        cin >> rowA;
        cout << "Input Number of Columns You want in Matrix 'A' ::  ";
        cin >> colA;

        cout << "Input Elements Of Matrix 'A' \n";
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++) {
                cout << " A = [" << i + 1 << "]" << "[" << j + 1 << "]: ";
                cin >> A[i][j];
            }

        cout << "\nMatrix 'A' is \n";
        for (int i = 0; i < rowA; i++) {
            for (int j = 0; j < colA; j++) cout << A[i][j] << " ";
            cout << endl;
        }

        
        for (int i = 0; i < rowA; i++)
            for (int j = 0; j < colA; j++)
                T[j][i] = A[i][j];

        cout << "\nThe Transpose Of Matrix A is \n";
        for (int i = 0; i < colA; i++) {
            for (int j = 0; j < rowA; j++) cout << T[i][j] << " ";
            cout << endl;
        }
}

int main() {
     	
cout << " __  __     ___      ____   " << endl;
    cout << "|  \\/  |   / _ \\    / ___|  " << endl;
    cout << "| |\\/| |  | | | |   \\___ \\  " << endl;
    cout << "| |  | |  | |_| |    ___) | " << endl;
    cout << "|_|  |_|   \\___/    |____/  " << endl;
    cout << endl;
    
    cout <<   " Matrix  Operations System" << endl;

            
        cout << "----------------------------\n";
    cout << " < < Select Any Option > >  \n";
    cout << "----------------------------\n";

    int choice;

    cout << " 1 = Addition of Matrix 'A' and 'B' \n";
    cout << "Note ! Possible only if both matrices have the same number of rows and columns.\n\n";

    cout << " 2 = Substraction of Matrix 'A' and 'B' \n";
    cout << "Note ! Possible only if both matrices have the same number of rows and columns.\n\n";

    cout << " 3 = Multiplication of Matrix 'A' and 'B' \n";
    cout << "Note ! Possible only if the number of columns in 'A' = number of rows in 'B'.\n\n";

    cout << " 4 = Find Transpose of Matrix 'A' or 'B' \n";
    cout << "Note ! Transpose works for any matrix; in-place transpose only for square matrices.\n\n";

    cout << "---Enter Choice----:: ";
    cin >> choice;

    switch (choice) {

    case 1: { //addition 
	addMatrices();
        
        break;
    }
    case 2: {
    substractMatrices();
        break;
	
        	}
        	
	case 3: {
	multiplicationMatrices();
		
		break;
	}
	case 4: {
	transposeMatrices();
	
		break;
	}
    
    
    
 default:{
	
        cout << "Invalid choice!\n";
        break;
 }
    }

    return 0;
}
		

    
	
	

	
			
	

