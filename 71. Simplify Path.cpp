71. Simplify Path
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string res;
        int n=path.size();
       for(int i=0;i<n;i++){
      if(path[i]=='/'){
        continue;
      }
      string temp;
      // iterate till we donot get last /
      while(i<n && path[i]!='/'){
        temp=temp+path[i];
        i++;
      }
      if(temp==".")continue;
      else if(temp==".."){
        if(!st.empty()) st.pop();
      }
      // push directory file name to stack 
      else{
        st.push(temp);
      }
       }
      //add all ements of stack to res
      while(!st.empty()){
        res="/"+st.top()+res;
        st.pop();
      }
       if(res.size()==0)return"/";
       return res;
    }
};
