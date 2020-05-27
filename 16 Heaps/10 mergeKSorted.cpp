typedef pair<int, pair<int, int>> PP;
int *mergeKArrays(int arr[][N], int k)
{
    int *res = new int[k*k];
    
    priority_queue<PP, vector<PP>, greater<PP>> pq;
        
    for (int i = 0; i < k; i++)
        pq.push(make_pair(arr[i][0], make_pair(i, 0)));
        
    int index = 0; 
    while (!pq.empty()){
        PP curr = pq.top();
        pq.pop();
        
        res[index++] = curr.first;
        int i = curr.second.first;
        int j = curr.second.second;
        
        if (j < k-1)
            pq.push(make_pair(arr[i][j+1], make_pair(i, j+1)));
    }
    return res;
}
