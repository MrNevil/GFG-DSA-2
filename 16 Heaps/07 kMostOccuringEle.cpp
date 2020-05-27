// Function to print the k numbers with most occurrences 
int print_N_mostFrequentNumber(int arr[], int n, int k) 
{ 
    unordered_map<int, int> umap;
	for (int i = 0; i < n; i++){
	    umap[arr[i]]++;
	}
	
	priority_queue<pair<int,int>> pq;
	
	for (auto it = umap.begin(); it != umap.end(); it++){
	    pq.push(make_pair(it->second, it->first));
	}
	
	int ans = 0;
	for (int i = 0; i < k; i++){
	    ans += pq.top().first;
	    pq.pop();
	}
	
	return ans;
} 
