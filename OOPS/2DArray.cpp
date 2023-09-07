#include<iostream>
using namespace std;
class Array{
    private:
    int *arr;
    int r;
    int c;
    public:
    Array(int row, int col){
        r=row;
        c=col;
        arr=new int[r][c];
    }

    void insert(){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<"Enter the element at"<<i+1<<" "<<j+1<<"index: ";
                cin>>arr[i][j];
            }
        }
    }
    void display(){
            for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>arr[i][j];
            }
        }
    }
};
int main(){
    int r;
    int c;
    cout<<"Enter row and column:";
    cin>>r>>c;
    Array arr(r, c);
    arr.insert();
    arr.display();
}