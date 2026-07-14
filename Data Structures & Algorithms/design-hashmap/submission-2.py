class ListNode:
    def __init__(self, key = -1, val = -1, next = None):
        self.key = key
        self.val = val
        self.next = next

class MyHashMap:

    def __init__(self):
        self.size = 1000
        self.hashmap = [ListNode() for _ in range(self.size)] 
        
    def put(self, key: int, value: int) -> None:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        
        # Traverse the list using bucket.next to stop at the last node
        while bucket.next:
            if bucket.next.key == key:
                bucket.next.val = value
                return
            bucket = bucket.next
        bucket.next = ListNode(key, value)
            

    def get(self, key: int) -> int:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        while bucket:
            if bucket.key == key:
                return bucket.val
            bucket = bucket.next
        return -1
        
        

    def remove(self, key: int) -> None:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        while bucket.next:
            if bucket.next.key == key:
                bucket.next = bucket.next.next
                return
            bucket = bucket.next


        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)