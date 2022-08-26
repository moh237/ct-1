// Name-Mahak
//Roll No-2010990436
//Set No-03
//Question 1- Reaarange an array with alternate high and low elements

#include<iostream>
using namespace std;

void alternateArr(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i]) {
            swap(arr[i - 1],arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr[i + 1],arr[i]);
        }
    }
}
int main()
{
    int n;
    cout<<"No of element:";
    cin>>n;
    int arr[n];
    cout<<"input element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    alternateArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}