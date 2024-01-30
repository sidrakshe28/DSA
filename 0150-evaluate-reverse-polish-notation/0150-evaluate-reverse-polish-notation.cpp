class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        unordered_set<string> operators = {"+", "-", "*", "/"};
        for (int i = 0; i < tokens.size(); i++) {
            if (operators.find(tokens[i]) != operators.end()) {
                int num1 = stack.top();
                stack.pop();
                int num2 = stack.top();
                stack.pop();
                if (tokens[i] == "+")
                    stack.push(num1 + num2);
                else if (tokens[i] == "-")
                    stack.push(num2 - num1);
                else if (tokens[i] == "*")
                    stack.push(num1 * num2);
                else if (tokens[i] == "/")
                    stack.push(num2 / num1);
            } else {
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    }
};