#include <iostream>
using namespace std;
 void merge2s(int arr1[],int arr2[], int s1, int s2,int output[]){
    int i=0,j=0,k=0;
    while(i<s1&&j<s2){
        if(arr1[i]<arr2[j]){
            output[k++]=arr1[i++];
        }
        else
            output[k++]=arr2[j++];
    }
    while(i<s1){
        output[k++]=arr1[i++];
    }
    while(j<s2){
        output[k++]=arr2[j++];
    }
 }

 void mergesort( int input[],int size){
    if(size<=1){
        return;
    }
    int mid=size/2;
    int arr1[mid],arr2[(size-size/2)];
    for(int i=0;i<mid;i++){
        arr1[i]=input[i];
    }
    for (int i = 0; i < size-(size/2); i++)
    {
        arr2[i]=input[mid+i];
    }
    mergesort(arr1,mid);
    mergesort(arr2,size-(size/2));
    merge2s(arr1,arr2,size/2,size-size/2,input);



 }
  int main(){
    int m;
     cout<<"enter size:";
    cin>>m;
    int *input=new int[m];
   
    for(int i=0;i<m;i++)
        cin>>input[i];

    mergesort(input,m);
    cout<<"Sorted array: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<input[i]<<" ";
    }
    
  }