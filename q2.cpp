//Name-Mahak
//Roll no-2010990436;
//test no-3
//Question 2-Find the pair with the given sum in an array

#include <bits/stdc++.h>

using namespace std;

void findPairSum(int arr[], int n, int k)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
    {
        if (map.find(k - arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[k - arr[i]]] << ", "<< arr[i] << ")\n";
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found";
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
    int sum;
    cout<<"input sum:";
    cin>>sum;
    
    findPairSum(arr,n,sum);

    return 0;
}
