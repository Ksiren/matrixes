# include "matrix.h"

int main() {
    int l, w, l1, w1;
    cout << "Enter the sizes of the first matrix:\n";
    cin >> l >> w;
    Matrix<int>  Mat(l, w);
    cout << "Enter the matrix:\n";
    cin >> Mat;

    cout << "Enter the sizes of the second matrix:\n";
    cin >> l1 >> w1;
    Matrix<int>  Mat2(l1, w1);
    cout << "Enter the matrix:\n";
    cin >> Mat2;

    Matrix<int>  Mat_res(l1, w1);
    cout << "Sum of these matrices:" << endl;
    Mat_res = Mat + Mat2;
    cout << Mat_res;

    cout << "Enter the num by which you want to multiply the matrix:\n";
    int koef;
    cin >> koef;
    Mat_res = Mat_res * koef;
    cout << Mat_res;

    cout << "Enter the sizes of matrix you want to multiply by:\n";
    int l2, w2;
    cin >> l2 >> w2;
    Matrix<int> Mat3(l2, w2);
    cout << "Enter the matrix:\n";
    cin >> Mat3;
    cout << "Product of matrices:\n";
    Matrix<int>  Mat_mult(l2, w1);
    Mat_mult = Mat_res * Mat3;
    cout << Mat_mult;

    cout << "Transposed matrix:\n";
    cout << Mat_mult.trans_mat();
}