class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int a = image[0].size();
        for(int i = 0; i<n ;i++)
        {
            for(int j = 0; j<a ;j++)
            {
                if(j<a/2)    //horizontal flip
                    swap(image[i][j],image[i][a-1-j]);
                //incerting 
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;                
                
            }                    
        }
        return image;
    }
};
