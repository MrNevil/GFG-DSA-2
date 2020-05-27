
void kthLargest(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int i;
    for (i = 0; i < k-1; i++){
        cout<<-1<<" ";
        pq.push(arr[i]);
    }
    pq.push(arr[k-1]);
    cout<<pq.top()<<" ";
    
    for (int i = k; i < n; i++){
        if (pq.empty()){
            pq.push(arr[i]);
        }
        else if (arr[i] > pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
        cout<<pq.top()<<" ";
    }
	
}
