//Bubble Sort 
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 

void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
 
     if (swapped == false)
             break;
   }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout <<" "<< arr[i];

}

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,num);
    cout <<"Sorted array: \n";
    printArray(arr,num);
    return 0;
}
 