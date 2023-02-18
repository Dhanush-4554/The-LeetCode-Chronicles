class Solution {
public:
        bool detectCapitalUse(string word) {
        int c = 0;
        bool ans = false;
        for(int i=0 ; i < word.length() ; i++){
            char ch = word[i];
            if(ch >='A'&& ch <='Z'){
                if(ans)
                  return false;
              c++;
            }
            else
              ans=true;
        }

        if(ans && c >1)
          return false;
        return true;
    }
};
