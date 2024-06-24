/*
 *  time complexity: O(n)
 *  space complexity: O(n)
 */

class Solution{
    private:
        int pop(stack<char> &st){
            int c = st.top();
            st.pop();
            
            return c;
        }
        
    public:
        bool isValid(string s){
            stack<char> st;
            
            for(char c : s){
                if(c == '(')
                    st.push(')');
                else if(c == '[')
                    st.push(']');
                else if(c == '{')
                    st.push('}');
                else if(st.empty() || pop(st) != c)
                    return false;
            }
        
            return st.empty();
    }
};
