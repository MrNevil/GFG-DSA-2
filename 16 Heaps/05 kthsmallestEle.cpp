int kthSmallest(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq (arr, arr+n);
    
    while (--k)
        pq.pop();
        
    return pq.top();
}
