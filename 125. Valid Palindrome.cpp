class Solution {
public:
    bool isPalindrome(string s) {
       string str{""};

        for(int i=0;i<s.size();i++){
            if(isalnum(s[i]))  
                str.push_back(tolower(s[i]));
        }

        int m =0;
        int j = str.length() -1;

        while(m < j){
            if(str[m] != str[j]) return false;
            m++;
            j--;
        }
        return true; 
    }
};
