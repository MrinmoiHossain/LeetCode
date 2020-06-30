class Solution:
    def isPalindrome(self, x):
        a = str(x)
        b = a[::-1]
        
        return a == b
