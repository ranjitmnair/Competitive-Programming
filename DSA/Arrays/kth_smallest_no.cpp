//find kth smallest number where k<len , no numbers are equal in the array

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,55,2,11,30,45};
    int n=6;
    int k=3;
    sort(arr,arr+n); //fastest sort, O(nlogn)
    cout<<arr[k-1];

}