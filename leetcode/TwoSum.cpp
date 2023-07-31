#include<iostream>
using namespace std;
#include <array>
int main(){
    int nums[]={1,2,3,4,5},target=66;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                int o[]={i,j};
                cout<<o;
            }
        }
    }
}