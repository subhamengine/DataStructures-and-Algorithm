#include <iostream>
using namespace std;

//for swapping two index's values in the array.
void swap(int arr[] , int i , int pindex){
  int temp = arr[i];
  arr[i] = arr[pindex];
  arr[pindex] = temp;
}

//for taking out the partition from the array
int partition(int arr[] , int s , int e){
  
  int pivot = arr[e];
  
  int pindex = s;
  
  for(int i = s ; i < e ; i++){
  
    if(arr[i] <= pivot){
  
      swap(arr , i , pindex);
  
      pindex++;
  
    }
    
  }
  
  swap(arr , e , pindex);
  
  return pindex;
}

//the main quick sort function
void quicksort(int arr[] , int s , int e){
  
  if(s < e){
    
    int p = partition(arr , s , e);
    //calling quick sort for the first half.
    quicksort(arr , 0 , p-1);
    //calling quicksort for the second half.
    quicksort(arr , p+1 , e);
  }
}
int main() 
{
    int arr[5] = {7 , 9 ,3 , 2, 6};  //static array of size 5.
    
    quicksort(arr , 0 , 4);         //calling quicksort for the declared array.
    
    for(int i = 0 ; i < 5 ; i++) cout<<arr[i]<<" ";
}
