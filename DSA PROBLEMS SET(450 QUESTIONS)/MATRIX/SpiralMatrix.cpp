class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> ans;
        
        int left=0, top=0;
        
    int bottom=matrix.size()-1, right=matrix[0].size()-1;
    
    
    while(top<=bottom && left<=right)
    {
        
        for(int i=left; i<=right; i++)
            ans.push_back(matrix[top][i]);
            
        top++;
        
        for(int i=top; i<=bottom; i++)
            ans.push_back(matrix[i][right]);
            
        right--;
        
        if(bottom>=top)
        {
            for(int i=right; i>=left; i--)
                ans.push_back(matrix[bottom][i]);
                
            bottom--;
        }
        
        if(right>=left)
        {
            for(int i=bottom; i>=top; i--)
                ans.push_back(matrix[i][left]);
                
            left++;
        }
        
    }
    
        return ans;
    }
    
};
