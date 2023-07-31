#include<stack>
void calculateSpan(int prices[], int n, int spans[]) {
    stack  <int>s;
    s.push(0);
    spans[0]=1;
    for(int i=1;i<n;i++){
        int c=0;
        while(!s.empty() && prices[i]>prices[s.top()]){
            c+=spans[s.top()];
            s.pop();
        }
        spans[i]=c+1;
        s.push(i);

    }
}

#include <iostream>
#include <stack>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* prices = new int[n];
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    int* spans = new int[n];
    calculateSpan(prices, n, spans);

    for (int i = 0; i < n; i++)
        cout << spans[i] << " ";

    delete[] prices;
    delete[] spans;

    return 0;
}