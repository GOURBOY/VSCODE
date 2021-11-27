#include <bits/stdc++.h>
using namespace std;

void search(int arr[], int ele, int num){
   int ind=0;
    for(int i=0;i<num;i++){
    if(arr[i]==ele){
        cout<<"Element found at index: "<<i<<endl;
        ind++;
    }
    }
    if(ind==0){
        cout<<"element is not present in the list";
    }
                
}
int main()
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
   search(arr,ele,num);
}
