#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
        i++;
        swap(&arr[i],&arr[j]);
    } 
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quicksort(int *arr,int p,int r){
    if(p<r)
    {
      int q=partition(arr,p,r);
      quicksort(arr,p,q-1);
      quicksort(arr,q+1,r);
    }
}
void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){

int num;
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
    cin>>arr[i];
}
quicksort(arr,0,num-1);
printArray(arr,num);
}