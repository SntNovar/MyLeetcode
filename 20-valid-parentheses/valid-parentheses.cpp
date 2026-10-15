class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char x: s) {
            if( x== '(' ||x== '[' || x=='{') {
                st.push(x);
            }

            else {
                if(st.empty()) return 0;
                

                else {
                    char popped = st.top();
                    st.pop();
                    if(popped == '(' && x ==')' ||
                       popped == '[' && x ==']' ||
                       popped == '{' && x =='}' ) {

                       }

                       else return 0;
                }
            }
        }

        return st.empty();
    }
};