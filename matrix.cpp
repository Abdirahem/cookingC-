#include <iostream>

class Matrix {
public:
    int m[2][2];
    Matrix(int a, int b, int c, int d) {
        m[0][0] = a; m[0][1] = b;
        m[1][0] = c; m[1][1] = d;
    }

    Matrix operator+(const Matrix& other) {
        return Matrix(
            m[0][0] + other.m[0][0], m[0][1] + other.m[0][1],
            m[1][0] + other.m[1][0], m[1][1] + other.m[1][1]
        );
    }
};


int main() {
    Matrix A(1, 2,3,5);
    Matrix B(5, 6,5,3);
    Matrix C = A + B;

    std::cout << "Matrix A:" << std::endl;
    std::cout << A.m[0][0] << " " << A.m[0][1] << std::endl;
    std::cout << A.m[1][0] << " " << A.m[1][1] << std::endl;
    std::cout << "Matrix B:" << std::endl;
    std::cout << B.m[0][0] << " " << B.m[0][1] << std::endl;
    std::cout << B.m[1][0] << " " << B.m[1][1] << std::endl;


    std::cout << "Resultant Matrix C:" << std::endl;
    std::cout << C.m[0][0] << " " << C.m[0][1] << std::endl;
    std::cout << C.m[1][0] << " " << C.m[1][1] << std::endl;    
    return 0;
}