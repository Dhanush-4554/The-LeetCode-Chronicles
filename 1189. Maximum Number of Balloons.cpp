class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int c1=0,c2=0,c3=0,c4=0,c5=0,cr;
        for (int i = 0; i<text.size(); i++) {
            if(text[i]=='b'){
                c1++;
            }
            else if(text[i]=='a'){
                c2++;
            }
            else if(text[i]=='l'){
                c3++;
            }
            else if(text[i]=='o'){
                c4++;
            }
            else if(text[i]=='n'){
                c5++;
            }
            else {
                cr = 0;
            }
               
        }
        c3 = c3/2;
        c4 = c4/2;
        vector <int> nums = {c1,c2,c3,c4,c5};
        sort(nums.begin(),nums.end());

        int answer = nums[0];
        return answer;
    }
};
