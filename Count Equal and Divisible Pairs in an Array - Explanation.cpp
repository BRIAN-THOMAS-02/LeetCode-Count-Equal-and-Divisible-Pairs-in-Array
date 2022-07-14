Count Equal and Divisible Pairs in an Array - "https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/"
EXPLANATION


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPairs (vector<int>& nums, int k)
    {
        int i, j, ans = 0, ans1 = 0, output = 0;
        int final_ans = 0;
        vector <int> ans_size;

        for (i=0; i<nums.size(); i++)
        {
	        cout<<"\n\n";
	        for (j=i + 1; j<nums.size(); j++)
	        {
	            ans = i * j;
	            ans1 = ans % k;
	            cout<<"\n("<<i<<" * "<<j<<") : ("<<i<<" * "<<j<<") = "<<i * j<<" | "<<ans<<"%2 : "<<ans1;

	            if (nums[i] == nums[j] & ans1 == 0)
	            {
		            cout<<"   --- CORRECT";
		            ans_size.push_back (ans1);
	            }
	        }
        }

    final_ans=ans_size.size();
    cout<<"\n\nfinal_ans : "<<final_ans;
    
    cout<<"\n\n";
    return final_ans;
    }
};


int main()
{
    Solution obj;

    vector<int> vect={3,1,2,2,2,1,3};

    //obj.countPairs (vect, 2);
    cout<<obj.countPairs(vect, 2);
}
