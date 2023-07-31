class Solution {
public:
    int maxDepth(string s) {
        
        stack<int> stack;
        
        int max =0;
        for(int i=0;i<s.length();i++){
            
            
            if(s[i] =='('){
                
                stack.push('(');
                
            }
            
            
            else if(s[i]==')'){
                if(max<stack.size())
                max = stack.size();
                
                stack.pop();
            }
            
            else{
                
                continue;
            }
            
        }
        
        
        return max;
        
    }
};