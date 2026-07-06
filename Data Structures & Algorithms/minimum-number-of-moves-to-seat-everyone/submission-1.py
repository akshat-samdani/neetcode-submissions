class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        # diff min so sort both and take absolute diff
        # seats.sort()
        # students.sort()
        # minMoves = 0
        # for i in range(len(seats)):
        #     minMoves += abs(seats[i] - students[i])

        # return minMoves

        return sum(abs(a - b) for a, b in zip(sorted(seats), sorted(students)))
        