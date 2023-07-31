
// #include <iostream>
// #include <stack>
// using namespace std;

// void reverseStack(stack<int> &input, stack<int> &extra) {
//     if(input.size()==0||input.size()==1){
//         return;
//     }
//     // recursive call
//     int temp=input.top();
//     input.pop();
//     reverseStack(input,extra);
//     while(!input.empty()){
//         int popped=input.top();
//         input.pop();
//         extra.push(popped);
//     }
//     input.push(temp);
//         while(!extra.empty()){
//         int popped=extra.top();
//         extra.pop();
//         input.push(popped);
//     }

    
// }

// int main() {
//     stack<int> input, extra;
//     int size;
//     cin >> size;

//     for (int i = 0, val; i < size; i++) {
//         cin >> val;
//         input.push(val);
//     }

//     reverseStack(input, extra);

//     while (!input.empty()) {
//         cout << input.top() << " ";
//         input.pop();
//     }
// }
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    int *price=[10,20,30,40];
    int temp[]=price[0:-2];
    for(int i=0;i<3;i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}
