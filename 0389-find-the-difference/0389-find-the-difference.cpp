class Solution {
public:
    char findTheDifference(string s, string t) {
      for(int i = 0;i<t.size();i++){
        char c = t[i];

        int pos = s.find(c);
        if (pos != string::npos) {
                s.erase(pos, 1);   
            } else {
                return c;          
            }
      }
            return ' ';
      }
    
};