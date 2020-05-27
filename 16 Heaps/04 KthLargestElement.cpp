
int KthLargest(int arr[], int n, int k) {
    
    priority_queue<int> pq(arr, arr+n);
    
    while (--k)
        pq.pop();
    
    return pq.top();
}
