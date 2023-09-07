// Approach 1 - Brute force - O(n^2) //

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans; // Initialize a vector to store the result.

        for (int i = 0; i < nums.size(); i++) // Loop through the elements of the 'nums' vector.
        {
            for (int j = i + 1; j < nums.size(); j++) // Nested loop to compare each element with subsequent elements.
            {
                // Check if the sum of elements at indices 'i' and 'j' equals the 'target'.
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i); // If true, store the index 'i' in the result vector.
                    ans.push_back(j); // Also, store the index 'j' in the result vector.
                    return ans;       // Return the result vector immediately since we found a valid pair.
                }
            }
        }

        // If no valid pair is found, return an empty result vector.
        return ans;
    }
};

/*
   *----------*
   |BREAKDOWN |
   *----------*

1) The 'twoSum' function

   " vector<int> twoSum(vector<int> &nums, int target) "

 This function takes two parameters:

 ->vector<int> &nums: A reference to a vector of integers called nums.
                      This vector contains the input numbers where you want to find two numbers whose sum equals the target.

 ->int target: An integer representing the target sum you want to find.
______________________________________________________________________________________________

2)vector<int> ans;

This line declares a vector of integers called ans.
This vector will store the indices of the two numbers found in nums that add up to the target.

______________________________________________________________________________________________

3)for (int i = 0; i < nums.size(); i++)

This is a for loop that iterates through the elements of the nums vector.
It starts with i set to 0 and continues until i is less than the size of the nums vector.

______________________________________________________________________________________________

4)for (int j = i + 1; j < nums.size(); j++)

Inside the outer loop, there is another nested for loop.
This loop starts with j set to i + 1 to ensure that you don't use the same element twice
(i.e., it avoids comparing an element with itself).

______________________________________________________________________________________________

5)if (nums[i] + nums[j] == target)

This condition checks whether the sum of the elements at indices i and j in the nums vector is equal to the target value.

______________________________________________________________________________________________

6){
    ans.push_back(i);
    ans.push_back(j);
    return ans;
  }

  If the condition is true, it means you have found two numbers whose sum equals the target.
  In this case, you add the indices i and j to the ans vector and immediately return it as the result.

______________________________________________________________________________________________

7)return ans;

If the loop completes without finding a pair of numbers that add up to the target, an empty vector ans is returned,
indicating that no such pair exists in the input vector.

*/