class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        
        for (int i = 0; i < s.length(); i++) {
            // Push opening brackets onto the stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                mystack.push(s[i]);
            } 
            // For closing brackets
            else {
                // Check if the stack is empty (unmatched closing bracket)
                if (mystack.empty()) {
                    return false;
                }
                // Check if the top of the stack matches the closing bracket
                if ((s[i] == ')' && mystack.top() != '(') || 
                    (s[i] == ']' && mystack.top() != '[') || 
                    (s[i] == '}' && mystack.top() != '{')) {
                    return false;
                }
                // Pop the matched opening bracket from the stack
                mystack.pop();
            }
        }
        
        // if (mystack.empty())
        //     return true;
        // else
        //     return false;

        return mystack.empty(); // vì khi stack rỗng sẽ trả về giá trị true 

    }
};
