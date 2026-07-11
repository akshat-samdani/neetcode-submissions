class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        for i in range(len(flowerbed)):
            leftOk = i == 0 or flowerbed[i-1] == 0
            rightOk = i == len(flowerbed) -1 or flowerbed[i+1] == 0
            if leftOk and flowerbed[i] == 0 and rightOk:
                flowerbed[i] = 1
                n -= 1
        return n <= 0
        