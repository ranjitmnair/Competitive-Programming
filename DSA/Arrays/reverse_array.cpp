// create a program to reverse array of string or numbers without extra space (recursive apporach)

//done in O(n)

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    if(start>=end)return;

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    return reverse(arr,start+1,end-1);
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int end=(sizeof(arr)/sizeof(arr[0]))-1;
    reverse(arr,0,end);
    
    for(int i=0;i<=end;i++)cout<<arr[i]<<" ";

}