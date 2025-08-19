"""
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999].
"""

class Solution:
    def romanToInt(self, s: str) -> int:
        
        roman_numbers = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000,
        }

        number = 0
        temp = 0

        for i,e in enumerate(s):
        
            if i + 1 < len(s):
                if e == 'I':
                    if s[i + 1] in ['V','X']:
                        temp = -1
                        continue
                if e == 'X':
                    if s[i + 1] in ['L','C']:
                        temp = -10
                        continue
                if e == 'C':
                    if s[i + 1] in ['D','M']:
                        temp = -100
                        continue
            
            number += (temp + roman_numbers[e])
            temp = 0

        # print(number)
        return number

class Solution_2:
    def romanToInt(self, s: str) -> int:
        
        roman_numbers = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000,
        }

        roman_combs = {
            'IV':4,
            'IX':9,
            'XL':40,
            'XC':90,
            'CD':400,
            'CM':900
        }

        number = 0

        if len(s) == 1:
            print(roman_numbers[s])
            return roman_numbers[s]

        i = 0
        while i < len(s):
            pair = s[i:i + 2]
            if pair in roman_combs:
                number += roman_combs[pair]
                i += 2
            else:
                number += roman_numbers[s[i]]
                i += 1

            # print(number)
        
        print(number)

    
sol = Solution_2()
sol.romanToInt('X')
sol.romanToInt('III')
sol.romanToInt('LVIII')
sol.romanToInt('MCMXCIV')

