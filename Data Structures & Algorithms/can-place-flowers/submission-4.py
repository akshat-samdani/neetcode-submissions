class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        length = len(flowerbed)
        for i in range(length):

            if i + 1 < length and i == 0 and flowerbed[i] == 0 and flowerbed[i + 1] == 0:
                flowerbed[i] = 1
                n -= 1
            
            elif i == length - 1 and flowerbed[i] == 0 and flowerbed[i - 1] == 0:
                n -= 1

            else:
                if i != length - 1 and flowerbed[i] == 0 and flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
        
        return n <= 0
        