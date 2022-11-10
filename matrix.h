#include <iostream>
#include <vector>

using namespace std;

template<typename num_type>
class Matrix{
public:
int length, width;
    vector<vector<num_type>> matr0;
public:
    Matrix(int leng, int wid);
    // vector trans_mat(Matrix<num_type>&);
    
    const Matrix<num_type> operator+(const Matrix<num_type>&);
    const Matrix<num_type> operator*(num_type);
    const Matrix<num_type> operator*(const Matrix<num_type>&);
};

// template<typename num_type>
// Matrix<num_type>::vector trans_mat(Matrix<num_type>&){
    
// }


template<typename num_type>
ostream& operator <<(ostream& out, Matrix<num_type> matr){
    out << "Matrix(" << matr.length << "x" << matr.width << ")\n";
    for (int i = 0; i < matr.matr0.size(); i++){
        for (int j = 0; j < matr.matr0[i].size(); j++){
            out << matr.matr0[i][j] << ' ';
        }
        out << endl;
    }
    return out;
}

template<typename num_type>
istream& operator>>(istream& in, Matrix<num_type>& mat){
    for (int i = 0; i < mat.matr0.size(); i++){
        for (int j = 0; j < mat.matr0[i].size(); j++){
            in >> mat.matr0[i][j];
        }
    }
    return in;
}


template<typename num_type>
Matrix<num_type>::Matrix(int leng, int wid){
    length = leng;
    width = wid;
    matr0 = vector<vector<num_type>>(width, vector<num_type>(length, 0));
}

template<typename num_type>
const Matrix<num_type> Matrix<num_type>::operator+(const Matrix<num_type>& matr1){
    Matrix<num_type> res_matrix(matr0[0].size(), matr0.size());
    if (matr0.size() != matr1.matr0.size() || matr1.matr0[0].size() != matr0[0].size()){
        cout << "!!!ERROR!!!" << endl << "(wrong sizes)" << endl << "return to the first matrix"<< endl << "|||" << endl << "||" << endl << "|" << endl;
        return *this;
    } else{
        for (int i = 0; i < matr0.size(); i++){
            for (int j = 0; j < matr0[i].size(); j++){
                res_matrix.matr0[i][j] = matr1.matr0[i][j] + matr0[i][j];
            }
        }
        
    }
    return res_matrix;
}


template<typename num_type>
const Matrix<num_type> Matrix<num_type>::operator*(num_type ko) {
    Matrix<num_type> res_matrix(matr0[0].size(), matr0.size());
    for (int i = 0; i < matr0.size(); i++){
        for (int j = 0; j < matr0[i].size(); j++){
            res_matrix.matr0[i][j] = matr0[i][j] * ko;
        }
    }
    return res_matrix;
}

template<typename num_type>
const Matrix<num_type> Matrix<num_type>::operator*(const Matrix<num_type>& matr1){
    Matrix<num_type> res_matrix(matr1.matr0[0].size(), matr0.size());
    if (matr0[0].size() != matr1.matr0.size()){
        cout << "!!!ERROR!!!" << endl << "(wrong sizes)" << endl << matr0[0].size() << " != " << matr1.matr0.size() << endl << "return to the first matrix"<< endl << "|||" << endl << "||" << endl << "|" << endl;
        return *this;
    } else{
        for (int i = 0; i < matr0.size(); i++){
            for (int j = 0; j < matr1.matr0[0].size(); j++){
                for (int m = 0; m < matr0[0].size(); ++m){
                    res_matrix.matr0[i][j] += matr0[i][m] * matr1.matr0[m][j];
                }
            }
        }
        return res_matrix;
    }
    
}