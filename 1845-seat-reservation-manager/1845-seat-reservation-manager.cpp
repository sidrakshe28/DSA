class SeatManager {
public:
//Other priority_queue solution
//Push only when unreserve
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    int front;
    SeatManager(int n): n(n), front(1){// TC: O(1)
    }
    
    int reserve() {
        if (pq.empty())
            return front++;
        else{
            int x=pq.top();
            pq.pop();
            return x;
        }
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */