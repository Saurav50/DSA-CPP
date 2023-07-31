#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string expression;

    cout << "Enter expression: ";
    cin >> expression;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{') {
            s.push(expression[i]);
        }
        else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}') {
            if (s.empty()) {
                cout << "Invalid" << endl;
                return 0;
            }

            char top = s.top();
            s.pop();

            if ((expression[i] == ')' && top != '(') ||
                (expression[i] == ']' && top != '[') ||
                (expression[i] == '}' && top != '{')) {
                cout << "Invalid" << endl;
                return 0;
            }
        }
    }

    if (!s.empty()) {
        cout << "Invalid" << endl;
    } else {
        cout << "Valid" << endl;
    }

    return 0;
} 
