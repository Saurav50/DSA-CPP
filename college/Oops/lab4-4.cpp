#include <iostream>
using namespace std;
 
class sum{
int *a = new int;
int *b = new int;
 
public:
sum(int x,int y) {
*a = x;
*b = y;
}
 
void printSum() {
cout<<*a+*b;
}
 
~sum() {
delete a;
 
delete b;
}
 
};
 
int main() {
sum *s1 = new sum(2,5);
s1->printSum();
 
delete s1;
return 0;
}
