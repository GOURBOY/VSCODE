#include<iostream>
using namespace std;
void swap(int *a,int *b){
   int t=*a;
   *a=*b;
   *b=t;
}
void BubbleSort(int arr[],int size){

    int i,j;
    bool swapped;
    for(int i=0;i<size-1;i++){
        swapped = false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped =true;
            }
        }
    if(swapped==false){
        break;
    }
    }

}
void printarray(int arr[],int size){
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
    BubbleSort(arr,num);
    printarray(arr,num);
}