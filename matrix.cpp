# include "matrix.h"

int main(){
    int l, w, l1, w1;
    cout << "Enter the sizes of the first matrix:\n";
    cin >> l >> w;
    Matrix<int>  Mat(l, w);
    cout << "Enter the matrix:\n";
    cin >> Mat;
    // cout << Mat;
    
    cout << "Enter the sizes of the second matrix:\n";
    cin >> l1 >> w1;
    Matrix<int>  Mat2(l1, w1);
    cout << "Enter the matrix:\n";
    cin >> Mat2;
    // cout << Mat2;
    
    Matrix<int>  Mat_res(l1, w1);
    cout << "Sum of these matrices:" << endl;
    Mat_res = Mat + Mat2;
    cout << Mat_res;
    
    cout << "Enter the num by which you want to multiply the matrix:\n";
    int koef;
    cin >> koef;
    cout << Mat_res * koef;
}
