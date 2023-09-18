#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidPostfixExpression(const string& postfix) {
    stack<int> operandStack;

    for (char c : postfix) {
        if (c == ' ')
            continue;

        if (isdigit(c)) {
            operandStack.push(c - '0'); // Convert character to integer and push onto the stack
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (operandStack.size() < 2) {
                return false; // Not enough operands for the operator
            }
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            if (c == '/' && operand2 == 0) {
                return false; // Division by zero is not allowed
            }

            // Push the result back onto the stack
            if (c == '+') {
                operandStack.push(operand1 + operand2);
            } else if (c == '-') {
                operandStack.push(operand1 - operand2);
            } else if (c == '*') {
                operandStack.push(operand1 * operand2);
            } else if (c == '/') {
                operandStack.push(operand1 / operand2);
            }
        } else {
            return false; // Invalid character in the expression
        }
    }

    return operandStack.size() == 1; // There should be exactly one operand left in the stack
}

int main() {
    string postfix;
    cout << "Enter a postfix expression: ";
    getline(cin, postfix);

    if (isValidPostfixExpression(postfix)) {
        cout << "Valid postfix expression" << endl;
    } else {
        cout << "Invalid postfix expression" << endl;
    }

    return 0;
}
