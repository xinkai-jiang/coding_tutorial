class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        distance = 0
        while True:
            rx, ry = x % 2, y % 2
            print(rx, ry)
            if rx != ry:
                distance += 1
            x, y = x // 2, y // 2
            if x == 0 and y == 0:
                break
        return distance


if __name__ == '__main__':
    s = Solution()
    print(s.hammingDistance(4, 1))