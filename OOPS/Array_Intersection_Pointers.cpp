// You are using GCC
# include<iostream>
using namespace std;
void findintersection(int *arr1, int size1, int* arr2, int size2, int & sizeIntersection, int *intersection){
    sizeIntersection=0;
    int *ptr1= arr1;
    int *ptr2= arr2;
    while(ptr1<arr1+size1 && ptr2<arr2+size2){
        if(*ptr1==*ptr2){
            intersection[sizeIntersection]= *ptr1;
            sizeIntersection++;
            ptr1++;
            ptr2++;
        }
        else if(*ptr1<*ptr2){
            ptr1++;
        }
        else{
            ptr2++;
        }
    }
}
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2 ;i++){
        cin>>arr2[i];
    }
    int intersection[1000];
    int sizeintersection;
    findintersection(arr1, n1, arr2, n2, sizeintersection, intersection);
    for(int i=0; i<sizeintersection; i++){
        cout<<intersection[i]<<" ";
    }
}