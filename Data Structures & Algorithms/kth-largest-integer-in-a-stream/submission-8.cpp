class KthLargest {
private:
    int k;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        //heapify nums into minheap
        minHeap = std::priority_queue<int, std::vector<int>, std::greater<int>>(nums.begin(), nums.end());
        //remove all excess more than size k
        while (minHeap.size() > k) {
            minHeap.pop();
        }
    }   
    
    int add(int val) {
        // if size of minHeap less than k, just add
        if (minHeap.size() < k) {
            minHeap.push(val);
        }
        // else kick out smallest(top root) and push in new val
        // considering the case where the val to add is smaller than the
        // minHeap's smallest val(aka the top root)
        // in heapq.heappushpop, it will make the new val sit at the
        // top, then pop it back out, effectively no change
        // to the minheap.
        // so heapq.heappushpop will efficiently just peek the top
        // and avoid the needless push

        // but since cpp has no pushpop, it will waste time
        // actually pushing then popping, so an extra
        // if check will help prevent the wasted cycle


        else if (val > minHeap.top()) {
            minHeap.pop();
            minHeap.push(val);
        }

        return minHeap.top();
    }
};
