// You are using GCC
#include <stdio.h>
int min_heap(int arr[],int n) 
{
    for(int i=0; i<n; i++){
        int l= 2*i+1;
        int r=2*i+1;
        if(l<n && arr[l]<arr[i]){
            return 0;
        }
        
        if(r<n && arr[r]<arr[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    int keys[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&keys[i]);
    }
    if(min_heap(keys, n)==1)
    {
        printf("The players are arranged in min heap order");
    }
    else 
    {
        printf("The players are not arranged in min heap order");
    }
}