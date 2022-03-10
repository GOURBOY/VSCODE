#include<iostream>
using namespace std;
void swap(int* a, int* b){
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int low,int high){
      int pivot= arr[high];
	  int i=low-1;
      for(int j=i;j<=high-1;j++){
		  if(j<=pivot){
			  i++;
			  swap(&arr[i],&arr[j]);
		  }
	  }
       swap(&arr[i+1],&arr[high]);
	   return i+1;


}