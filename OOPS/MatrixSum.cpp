// You are using GCC
#include<iostream>
using namespace std;
class MatrixSum{
    public:
    int row;
    int column;
};
int main(){
    MatrixSum matrix;
    cin>>matrix.row;
    cin>>matrix.column;
    int arr[matrix.row][matrix.column];
    int totalr=0;
    int totalc=0;
    for(int i=0; i<matrix.row; i++){
        for(int j=0; j<matrix.column; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<matrix.row; i++){
        for(int j=0; j<matrix.column; j++){
            cout<<arr[i][j]<<" ";
            totalc+=arr[i][j];
        }
        cout<<"  SUM: "<<totalc;
        totalc=0;
        cout<<endl;
    }
}