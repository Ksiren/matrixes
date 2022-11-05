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
    
    // void set_m(vector<vector<num_type>> mat){
    //     for (int i = 0; i < width; i++){
    //         for (int j = 0; j < length; j++){
    //             matr0[i][j] = mat[i][j];
    //         }
    //     }
    // }
    
    // void print(){
    //     cout << "Matrix (" << length << "x" << width << ")" << endl;
    //     for (int i = 0; i < matr0.size(); ++i) {
    //         for (int j = 0; j < matr0[i].size(); ++j) {
    //             cout << matr0[i][j] << ' ';
    //         } 
    //         cout << endl;
    //     }
    // }
    
    const Matrix<num_type> operator+(const Matrix<num_type>&);
};

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
        cout << "!!!ERROR!!!" << endl << "(wrong sizes)" << endl << "|||" << endl << "||" << endl << "|" << endl;
        // return *this;
    } else{
        for (int i = 0; i < matr0.size(); i++){
            for (int j = 0; j < matr0[i].size(); j++){
                res_matrix.matr0[i][j] = matr1.matr0[i][j] + matr0[i][j];
            }
        }
        
    }
    return res_matrix;
}
