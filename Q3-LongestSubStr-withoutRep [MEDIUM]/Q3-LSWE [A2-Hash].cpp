// Approach using Hashing 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthofLongestSubstring(string s) {
        vector<int> mpp(256, -1); // Initialize a vector to store the last seen index of each character (ASCII values).

        int left = 0, right = 0; // Initialize two pointers, 'left' and 'right'.
        int n = s.size(); // Get the size of the input string 's'.
        int len = 0; // Initialize the length of the longest substring without repeating characters.

        while (right < n) {
            if (mpp[s[right]] != -1)
                left = max(mpp[s[right]] + 1, left); // Move 'left' pointer to the next position after the last occurrence of the character.

            mpp[s[right]] = right; // Update the last seen index of the character.

            len = max(len, right - left + 1); // Calculate the current substring length and update 'len'.
            right++; // Move 'right' pointer to the next character.
        }

        return len; // Return the length of the longest substring without repeating characters.
    }
};

int main() {
    string str = "sdfafaidhiah";
    Solution obj;
    cout << "The length of the longest substring without repeating characters is " << obj.lengthofLongestSubstring(str);
    return 0;
}
