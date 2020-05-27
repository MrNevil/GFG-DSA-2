#define ll long long

long long minCost(long long arr[], long long n) {
    
    ll ans = 0;
    priority_queue<ll, vector<ll>, greater<ll>> pq(arr, arr+n);
    
    while (pq.size() > 1){
        ll a = pq.top();
        pq.pop();
        ll b = pq.top();
        pq.pop();
        
        ans += a+b;
        pq.push(a+b);
        
    }
    
    return ans;
}
