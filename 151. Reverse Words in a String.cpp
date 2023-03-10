class Solution {
public:
    string reverseWords(string s) {
        int n = s.size()-1;
        string result ="";
        

        string temp = "";
        while(n>=0){
            if(s[n]!=' ')
                temp = temp + s[n];
            else{
                if(temp.size() != 0){
                    reverse(temp.begin(),temp.end());
                    result = result + temp;
                    result = result + " ";
                    temp = "";
                }
            }
            n--;
        }
        if( !temp.length() == 0 ){
            reverse(temp.begin(), temp.end());
            result = result + temp;
            result = result + " ";
            temp = "";
        }
        
        return result.substr(0 , result.length()-1);
    }
};
