class Solution {
public:
    int lengthOfLastWord(string s) {
       stack<string> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            
            string temp = "";
            
            while(i<s.size() && s[i] != ' '){
                temp += s[i];
                i++;
            }
            st.push(temp);
            
            cout<<temp;
        }
        
        return st.top().size();
        
    }
};