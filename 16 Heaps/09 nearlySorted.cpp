void nearlySorted(int arr[], int n, int k){
    
    priority_queue<int, vector<int>, greater<int>> pq;
    if (k > n)
        return;
    int end;
    if (k == n)
        end = k;
    else
        end = k + 1;
    
    for (int i = 0; i < end; i++)
        pq.push(arr[i]);
        
    for (int i = end; i < n; i++){
        cout<<pq.top()<<" ";
        pq.pop();
        pq.push(arr[i]);
    }
    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
} 
  
