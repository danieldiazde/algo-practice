from collections import defaultdict

class TimeMap:

    def __init__(self):
        self.values = defaultdict(list)

    def set(self, key: str, value: str, timestamp: int) -> None:
        self.values[key].append((timestamp, value))
    
    def get(self, key: str, timestamp: int) -> str:
        values = self.values.get(key, [])

        left = 0
        right = len(values) - 1
        ans = ""

        while left <= right:
            mid = (left + right) // 2
            mid_time, mid_value = values[mid]

            if mid_time <= timestamp:
                ans = mid_value
                left = mid + 1
            else:
                right = mid - 1 
        
        return ans
        

        
        
        
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)