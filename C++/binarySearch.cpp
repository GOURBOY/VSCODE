#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
         if (arr[mid] == x)
            return mid;
         if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
         return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
} 


int main(void)
{
     int num,ele;
    cout<<"Enter the length of Array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter the Elements in Array: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
   cout<<"Enter the element to search: ";
   cin>>ele;
   int result = binarySearch(arr, 0, num- 1, ele);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}