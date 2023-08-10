# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    // taking input from the user
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // sorting array using bubble sort in aascending order
    for(int i=0; i<n; i++){
        for ( int j=1; j<n; j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]= arr[j];
                arr[j]=temp;
            }
        }   
        
    }
    // printing
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


