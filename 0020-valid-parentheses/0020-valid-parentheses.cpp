class Solution {
public:
    bool isValid(string expr) {
        
            stack<char> temp;
    for (int i = 0; i < expr.length(); i++) {
        if (temp.empty()) {
             
            // If the stack is empty
            // just push the current bracket
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) {
             
            // If we found any complete pair of bracket
            // then pop
            temp.pop();
        }
        else {
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) {
         
        // If stack is empty return true
        return true;
    }
    return false;
        
    }
};