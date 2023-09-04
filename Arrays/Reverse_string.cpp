/* You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000 */
// Reverse a string using two pointer method
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    string reverseWord(string str)
    {
        int n = str.length();

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            swap(str[i], str[j]);
        }

        return str; // Add the return statement
    }
    /* string reverseByStack(string str)
    {
        stack<char> st;
        for (int i = 0; i < str.length(); i++)
        {
            st.push(str[i]);
        }
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = st.top();
            st.pop();
        }
        return str;
    } */
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWord(s) << endl;
    }
    return 0;
}
