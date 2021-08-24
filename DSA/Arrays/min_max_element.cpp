// find minimum and maximum element using minimum comparisons
// o(n) approach

//divide array into two parts and compare max and min respectively

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 7, 2, 0, 1, 3, 5};
    int len = (sizeof(arr) / sizeof(arr[0]));
    int mid = len / 2 - 1;
    int min1 = arr[0], max1 = arr[0], min2 = arr[mid + 1], max2 = arr[mid + 1];
    for (int i = 1; i <= mid; i++)
    {
        if (min1 > arr[i])
            min1 = arr[i];
        if (max1 < arr[i])
            max1 = arr[i];
    }

    for (int i = mid+1; i <len; i++)
    {
        if (min2 > arr[i])
            min2 = arr[i];
        if (max2 < arr[i])
            max2 = arr[i];
    }
    cout<<" Minimum Element is: "; 

    min1>min2?cout<<min2:cout<<min1;

    
    cout<<"\n Maximum Element is: "; 

    max1>min2?cout<<max1:cout<<max2;

}