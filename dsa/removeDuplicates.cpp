#include<iostream>
#include<bits/stdc++.h>
#include <array>
using namespace std;
int removeD(int arr[]){
    
    sort(arr,arr+size);
    int temp[size],c=0;
    for(int i=0;i<size-1;i++){
        if(arr[i+1]==arr[i]){
            continue;
        }
        temp[c]=arr[i],c++;
        
    }
    for(int j=0;j<c+1;j++){
        arr[j]=temp[j];
    }
    return c;
}
int main(){
    int arr[]={1,1,1,2,3};
    int size=end(arr)-begin(arr);
    int j= removeD(arr);
    
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }

}