class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack <int> st;
        
        
        for(int i=0;i<operations.size();i++){
            
            if(st.empty()){
                
                st.push(stoi(operations[i]));
            }
            
            else if((operations[i]) == "C" ){
                st.pop();
            }
             else if((operations[i]) == "D" ){

                 int dobl = 2 * st.top();
                 st.push(dobl);
            }
            
             else if((operations[i]) == "+"){
                  int v1 = st.top();
                 st.pop();
                 int v2 = st.top();
                 int total = v1+v2;
                 
                st.push(v1);
                st.push(total);

               
            }
            
            
            else{
                
                st.push(stoi(operations[i]));
            }
            
            
            
            
            
        }
        int sum =0;
         while(!st.empty()){
                   sum = sum + st.top();
                    st.pop();
                   
                }
        return sum;
        return 0;
        

    }
};