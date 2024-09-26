///week03-4b.py leetcode 28. Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        a = haystack
        b = needle

        return a.find(b)
