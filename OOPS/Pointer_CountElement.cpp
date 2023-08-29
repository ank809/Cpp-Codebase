# include<iostream>
using namespace std;
int countElement(int *arr, int n);
int main(){
    int count=0;
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            break;
        }
        count+=1;
    }
    if(count==0){
        cout<<"Number of elements: "<<n<<endl;
    }
    else{
    cout<<"Number of elements: "<<count<<endl;
    }
    int ans=countElement(arr, n);
    cout<<"Number of elements: "<<ans;
    
}
int countElement(int *arr, int n){
    if(arr==nullptr){
        return 0;
    }
    return 0;
}