  #include<iostream>
  using namespace std;
  void merge2s(int input[], int si1, int si2,int ei1,int ei2){
    int i=si1,j=si2,k=0,temp[ei2-si1+1];
    while(i<=ei1&&j<=ei2){
        if(input[i]<=input[j]){
            temp[k++]=input[i++];
        }
        else
            temp[k++]=input[j++];
    }
    while(i<=ei1){
        temp[k++]=input[i++];
    }
    while(j<=ei2){
        temp[k++]=input[j++];
    }
    int c=0;
    for(int i=si1;i<=ei2;i++){
        input[i]=temp[c++];
       
    }
 }

  void mergeS(int input[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=(si+ei)/2;
    mergeS(input,si,mid);
    mergeS(input,mid+1,ei);
    merge2s(input,si,mid+1,mid,ei);

  }
  void mergesort(int input[],int size){

    mergeS(input,0,size-1);
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
    for (int i = 0; i < m; i++)
    {
        cout<<input[i]<<" ";
    }
    
  }