class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mpp;   // Create a map to store elements and their corresponding indices.
        int n = nums.size(); // Get the size of the input vector 'nums'.

        for (int i = 0; i < n; i++)
        {
            int num = nums[i];             // Get the current element at index 'i'.
            int moreNeeded = target - num; // Calculate the value needed to reach the 'target'.

            if (mpp.find(moreNeeded) != mpp.end())
            {
                // If 'moreNeeded' is found in the map, it means we've found a pair that sums up to the 'target'.
                // Return the indices of the current element and the 'moreNeeded' element.
                return {mpp[moreNeeded], i};
            }
            mpp[num] = i; // Store the current element and its index in the map.
        }

        // If no such pair is found in the input vector, return {-1, -1} to indicate failure.
        return {-1, -1};
    }
};

/*
   *----------*
   |BREAKDOWN |
   *----------*
1) The twoSum function takes a vector of integers nums and an integer target as input and returns a vector of integers.

2)It creates a map called mpp to store elements from the nums vector as keys and their corresponding indices as values.

3)It calculates the size of the input vector using n = nums.size();.

4)It then enters a for loop that iterates through the elements of the nums vector.
        ->Inside the loop:

            It extracts the current element num at index i.
            
            It calculates moreNeeded, which represents the value needed to reach the target
             by subtracting the current element from the target.
            
5)It checks if moreNeeded exists in the mpp map using mpp.find(moreNeeded) != mpp.end(). 
   If it exists, it means a pair of elements that sum up to the target has been found. 
    In this case, it returns a vector containing the indices of the two elements: {mpp[moreNeeded], i}.

6)If the moreNeeded element is not found,it stores the current element num and its index i in the mpp map using mpp[num] = i.

7)The loop continues until it has checked all elements in the nums vector.

8)If no pair is found within the loop, 
  it returns {-1, -1} to indicate that there is no pair of elements in the nums vector that sums up to the target.

In summary, this code efficiently finds a pair of elements in the nums vector that sum up to the target
  by using a map to keep track of elements and their indices. 
   If such a pair exists, it returns their indices; otherwise, it returns -1, -1 to indicate that no pair was found.


*/