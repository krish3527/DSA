class Solution {
public:
int ismatching(char open , char close){
     return (open=='('&&close==')')||(open=='['&&close==']')||(open=='{'&&close=='}');
}
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
             char ch = s[i];
             if(ch=='('||ch=='['||ch=='{'){
                 st.push(ch);
             }
             else if(ch==')'||ch==']'||ch=='}'){
                if(st.empty()){
                     return false;
                }
                char open =st.top();
                st.pop();
                if(!ismatching(open,ch))
                return 0;
        };
    }
    return st.empty();
    }
};