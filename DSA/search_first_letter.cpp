# include<iostream>
# include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        cout<<endl;
    }
    int count =0;
    char search;
    cin>>search;
    for(int i=0; i<n; i++){
        if(arr[i][0]==search){
            count++;
        }
    }
    cout<<"Number of strings starting with the letter " <<search<<" : "<<count;
}