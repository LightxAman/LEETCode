//Approach 2 - Sorting{two pointer method} - O(nlogn)

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        // Create a vector of pairs to store the elements along with their original indices.
        vector<pair<int, int>> temp;

        // Populate the 'temp' vector with elements and their indices from 'nums'.
        for (int i = 0; i < nums.size(); i++)
        {
            temp.push_back({nums[i], i});
        }

        // Sort the 'temp' vector based on element values.
        sort(temp.begin(), temp.end());

        vector<int> ans;
        int i = 0, j = nums.size() - 1;

        while (i < j)
        {
            if (temp[i].first + temp[j].first == target)
            {
                ans.push_back(temp[i].second); // Add the index of the first element to the result.
                ans.push_back(temp[j].second); // Add the index of the second element to the result.
                return ans;
            }
            else if (temp[i].first + temp[j].first < target)
            {
                i++; // Increment 'i' to move towards a larger sum.
            }
            else
            {
                j--; // Decrement 'j' to move towards a smaller sum.
            }
        }
        return ans; // Return an empty result vector if no pair is found.
    }
};

/*
   *----------*
   |BREAKDOWN |
   *----------*
1)The twoSum function takes a vector of integers nums and an integer target as input and returns a vector of integers.

2)It creates a temporary vector of pairs called temp, where each pair contains an element from the nums vector and its original index.
  This is done to keep track of the original indices of elements before sorting.

3)The temp vector is sorted based on the element values. 
  Sorting allows us to efficiently search for two elements that sum up to the target.

4)Two pointers i and j are initialized at the beginning and end of the temp vector, respectively. 
  These pointers will be used to find a pair of elements that sum up to the target.

5)Inside the while loop, it checks if the sum of the elements at indices i and j in the sorted temp vector equals the target. 
  If they do, it means we found a pair of elements that add up to the target, 
  so it stores their original indices in the ans vector and returns it.

6)If the sum is less than the target, it increments the i pointer, moving towards a larger sum. 
  If the sum is greater than the target, it decrements the j pointer, moving towards a smaller sum.

7)If the while loop completes without finding a pair that sums up to the target, it returns an empty vector as the result, 
  indicating that no such pair exists in the input vector.

In summary, this code efficiently finds a pair of elements in the nums vector that sum up to the target. 
It does so by first sorting the elements along with their original indices and then using two pointers to find the pair.



*/