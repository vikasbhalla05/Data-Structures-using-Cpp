#include <iostream>

using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}
/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition(int arr[],int l,int h){
    
  // pivot (Element to be placed at right position)
    int pivot=arr[h];
    int i=l-1;
  // Index of smaller element and indicates the 
  // right position of pivot found so far
    for(int j=l;j<h;j++){
        // If current element is smaller than the pivot
        if(arr[j]<pivot){
            i++; // increment index of smaller element
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,h);
    return i+1;
}
/* low  --> Starting index,  high  --> Ending index */
void qSort(int arr[],int l,int h){
    
    if(l<h){
        /* pi is partitioning index, arr[pi] is now
           at right place */
        int p=partition(arr,l,h);
      
        qSort(arr,l,p-1); // Before pi
        qSort(arr,p+1,h); // After pi
    }
}

int main()
{
    int arr[]={6,2,3,4,8,9,7};
    
    qSort(arr,0,6);
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
