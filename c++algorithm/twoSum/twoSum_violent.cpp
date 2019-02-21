class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        /*vector<int>::iterator it
        for(it=nums.begin();it!=nums.end();++it)
        {
            
            
        }*/
        vector<int> result;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if((target-nums[i])==nums[j])
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                    
                
            }
            
        }
        
        
           return result;
        
    }
};
