#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

// Function to determine the precedence of operators
int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

// Function to convert infix expression to RPN
string infixToRPN(const string& infix) {
    stack<char> operatorStack;
    string rpn;

    // Define an unordered map to store operator precedence
    unordered_map<char, int> precedenceMap = {
        {'+', 1},
        {'-', 1},
        {'*', 2},
        {'/', 2},
        {'^', 3}
    };

    for (char c : infix) {
        if (c == ' ')
            continue;

        if (isdigit(c)) {
            rpn += c;
            rpn += ' ';
        } else if (c == '^' || c == '*' || c == '/' || c == '+' || c == '-') {
            while (!operatorStack.empty() && precedenceMap[operatorStack.top()] >= precedenceMap[c]) {
                rpn += operatorStack.top();
                rpn += ' ';
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    while (!operatorStack.empty()) {
        rpn += operatorStack.top();
        rpn += ' ';
        operatorStack.pop();
    }

    return rpn;
}

int main() {
    string infix;
    cout << "Enter an infix expression (without parentheses): ";
    getline(cin, infix);

    string rpn = infixToRPN(infix);

    cout << "The Reverse Polish Notation (RPN) expression is: " << rpn << endl;

    return 0;
}
