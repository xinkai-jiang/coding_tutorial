class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        len_map = [[0 for _ in range(len(s)+1)] for _ in range(len(s)+1)]
        for i in range(len(s)+1):
            len_map[i][i] = 0
            if i < len(s):
                len_map[i][i+1] = 1
        
        max_value = 1
        for i in range(2, len(s)+1):
            for j in range(len(s)-i+1):
                if len_map[j-1][i+j] == len_map[j][i+j-1] and len_map[j][i+j-1] > len_map[j-1][i+j-1]:
                    print("here") 
                    if s[j] == s[i+j-1]:
                        len_map[j][i+j] = len_map[j-1][i+j]
                    else:

                        len_map[j][i+j] = len_map[j-1][i+j] + 1
                else:
                    len_map[j][i+j] = max(len_map[j-1][i+j], len_map[j][i+j-1])
                max_value = max(max_value, len_map[j][i+j])

        print(len_map)
        return max_value

if __name__ == "__main__":
    s = Solution()
    s.lengthOfLongestSubstring("asdf")