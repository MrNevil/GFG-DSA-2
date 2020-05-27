#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;


 // } Driver Code Ends

struct P
{
    int freq;
    char str;
    P(char stri, int fre)
    {
        str = stri;
        freq = fre;
    }
};

struct MyComp
{
    bool operator()(P &a, P &b)
    {
        return a.freq<b.freq;
    }
};

string rearrangeString(string str){
    priority_queue<P, vector<P>, MyComp> pq;
    unordered_map<char, int> mp;
    for(int i = 0; i<str.size(); i++)
        mp[str[i]]++;
    for(auto itr: mp)
        pq.push(P(itr.first, itr.second));
    
    string ans = "";
    struct P prev = P('#', 0);
    while(!pq.empty())
    {
        struct P temp = pq.top();
        ans+=temp.str;
        temp.freq--;
        pq.pop();
        if(prev.freq!=0)
            pq.push(prev);
        prev = temp;
    }
    
    if(ans.size()==str.size())
        return ans;
    else
        return "-1";
    
}
