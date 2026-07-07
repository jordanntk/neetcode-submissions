class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.k = k
        self.minHeap = nums
        
        heapq.heapify(self.minHeap)

        while len(self.minHeap) > self.k:
            heapq.heappop(self.minHeap)
        # now heap will be size of k
    def add(self, val: int) -> int:
        # if it is smaller size than k, just add in
        if len(self.minHeap) < self.k:
            heapq.heappush(self.minHeap, val)
        else:
            heapq.heappushpop(self.minHeap, val)
        return self.minHeap[0]
        
