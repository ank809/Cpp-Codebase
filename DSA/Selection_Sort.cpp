#include <iostream>
using namespace std;
void swap(int arr[], int s, int e)
{
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
}
int getmax(int arr[], int s, int e)
{
    int max = 0;
    for (int i = 0; i <= e; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Initial order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        int last = n - i - 1;
        int max = getmax(arr, 0, last);
        swap(arr, max, last);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Final order ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}