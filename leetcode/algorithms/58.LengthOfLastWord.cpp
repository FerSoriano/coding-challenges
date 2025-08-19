/*
Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.
*/

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() -1;
        
        while (s[end] == ' '){
            end--;
        }

        int start = end;
        while (start > 0 && s[start] != ' '){
            start --;
        }

        return end - start;
    }
};


int main(){
    Solution sol;   
    cout << sol.lengthOfLastWord("Hello World") << endl;
    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl;
    cout << sol.lengthOfLastWord("luffy is still joyboy") << endl;
    return 0;
}
