# include<iostream>
using namespace std;
int calculateEvenProduct(int * arr, int size){
    int *ptr= arr;
    int product=1;
    for(int i=0; i<size; i++){
        if(ptr[i]%2==0){
            product*=ptr[i];
        }
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int ans= calculateEvenProduct(arr, n);
    if(ans==1){
        cout<<"Invalid input";
    }
    else{
    cout<<"Product of even elements: "<<ans;
    }
}
