Count Equal and Divisible Pairs in an Array - "ttps://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/"
SUBMISSION 

class Solution 
{
public:
    int countPairs(vector<int>& nums, int k) 
    {
        int i, j, ans = 0, ans1 = 0, output = 0;
        int final_ans = 0;
        vector <int> ans_size;

        for (i=0; i<nums.size(); i++)
	        for (j=i + 1; j<nums.size(); j++)
            {
	            ans = i * j;
	            ans1 = ans % k;
	        
	            if (nums[i] == nums[j] & ans1 == 0)
		            ans_size.push_back (ans1);
            }
        
    final_ans=ans_size.size();
    return final_ans;      
    }
};
