//Write a Program of Two 1D Matrix Addition using Operator Overloading 

#include <iostream>

using namespace std;

class Matrix {
public:
    int size;
    int *data;

    Matrix(int size) {
        this->size = size;
        data = new int[size];  // Allocate memory for the matrix
    }

    ~Matrix() {
        delete[] data;  // Deallocate memory when the object goes out of scope
    }

    void inputData() {
        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    void displayData() const {
        cout << "Matrix: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Overload the + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cout << "Error: Matrices must have the same size for addition." << endl;
            return *this;  // Return a copy of the current object (optional)
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Enter elements for matrix 1:" << endl;
    matrix1.inputData();

    cout << "Enter elements for matrix 2:" << endl;
    matrix2.inputData();

    Matrix sum = matrix1 + matrix2;  // Use overloaded + operator

    cout << "Matrix 1:" << endl;
    matrix1.displayData();

    cout << "Matrix 2:" << endl;
    matrix2.displayData();

    cout << "Sum of matrices:" << endl;
    sum.displayData();

    return 0;
}
