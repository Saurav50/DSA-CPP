#include <iostream>
#include <string>
using namespace std;

#include<stack>
bool checkRedundantBrackets(string expression) {
	stack<char> s;
		
  for (int i = 0; i < expression.length(); i++) {
	
		if(expression[i] != ')') {
			s.push(expression[i]);
		}
		else{
			int c =0;
			while(s.top()!='('){
					c++;
					s.pop();
			}
			s.pop();
					if (c <=1) {
						return true;
					}
		}

		
  }
      return false;

}

int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}