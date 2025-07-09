class Solution {
public:
    int operation(int& a, int& b, char sign){
        switch(sign){
            case '/':
                return a / b;
            case '*':
                return a * b;
            case '+':
                return a + b;
            case '-':
                return a - b;
            default:
                return 0;
        }
    }

    int evalRPN(vector<string>& tokens) {
        std::stack<int> seen;
        for (int i = 0; i < tokens.size(); ++i){
            if (tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*"){
                int b = seen.top();
                seen.pop();
                int a = seen.top();
                seen.pop();
                seen.push(operation(a, b, tokens[i][0]));
            }
            else{
                seen.push(std::stoi(tokens[i]));
            }
        }
        return seen.top();
    }
};