/*Create a class Student which has data members as name, branch, roll no, age , gender, marks in
five subjects. Display the name of the student and his percentage who has more than 70%.Use array
of objects size 5.[Hint: also declare percentage variable and calculate it and then compare all the
object of student class to find name of student with percentage&gt;70]*/
#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
      char * name;
      char* branch;
      int age;
      char gender;
      float  marks[5];
      float percentage;

    public:
       Student(char *name,char *branch,int age,char gender,float marks[5]){
            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
            this->branch=new char[strlen(branch)+1];
            strcpy(this->branch,branch);
            this->age=age;
            this->gender=gender;
            int sum=0;
            for(int i=0;i<5;i++){
                this->marks[i]=marks[i];
                sum=sum+this->marks[i];
            }
             percentage=(sum/500)*100;
       }

       float percetage(){
        return percentage;
       }  

       void name(){
        cout<<this->name;
       }  
};
int main(){
    char * name;
      char* branch;
      int age;
      char gender;
      float  marks[5];
      float percentage;
      int n;//no of student
    Student* arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENter student details";
        cin.getline(name,50);
        cin.getline(branch,10);
        cin>>age;
        cin>>gender;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        arr[i]=new Student(name,branch,age,gender,marks);        

    }
    for(int i=0;i<n;i++){
        percentage=arr[i]->percetage();
        if(percentage>=70){
            arr[i]->name();
        }
    }




}