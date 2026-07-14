class MyHashMap:

    def __init__(self):
        self.size = 1000
        self.hashmap = [[] for _ in range(self.size)] 
        
    def put(self, key: int, value: int) -> None:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        for i, (record_key, _) in enumerate(bucket):
            if record_key == key:
                bucket[i] = (key, value)
                return
        bucket.append((key, value))
            

    def get(self, key: int) -> int:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        for (record_key, record_val) in bucket:
            if record_key == key:
                return record_val
        return -1
        
        

    def remove(self, key: int) -> None:
        hashed_key = hash(key) % self.size
        bucket = self.hashmap[hashed_key]
        for i, (record_key, _) in enumerate(bucket):
            if record_key == key:
                bucket.pop(i)
                return

        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)