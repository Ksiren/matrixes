#include "matrix.h"

int main(){
    int l, w, l1, w1;
    cout << "Enter the sizes of the first matrix:\n";
    cin >> l >> w;
    Matrix<int>  Mat(l, w);
    cout << "Enter the matrix:\n";
    cin >> Mat;
    // Mat.matr0[0][0] = 4;
    // Mat.matr0[1][2] = 6;
    // Mat.matr0[1][0] = 3;
    cout << Mat;

    cout << "Enter the sizes of the second matrix:\n";
    cin >> l1 >> w1;
    Matrix<int>  Mat2(l1, w1);
    cout << "Enter the matrix:\n";
    // Mat2.matr0[0][0] = 2;
    // Mat2.matr0[1][1] = 2;
    // Mat2.matr0[1][0] = 1;
    cin >> Mat2;
    cout << Mat2;

    cout << "Sum of these matrices:" << endl << Mat + Mat2;


}
