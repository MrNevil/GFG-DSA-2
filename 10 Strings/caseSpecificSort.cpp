string caseSort(string str, int n){
    
    int i = 0;
    vector<int> count;
    vector<char> lower, upper;
    
    while (i < n){
        while (str[i] >= 97 && str[i] <= 122){
            lower.push_back(str[i]);
            i++;
            count.push_back(1);
        }
                    
        while (str[i] >= 65 && str[i] <= 90){
            upper.push_back(str[i]);
            i++;
            count.push_back(0);
        }
    }
    sort( lower.begin(), lower.end() );
    sort( upper.begin(), upper.end() );
    
    string ans = "";
    
    int x = 0, y = 0;
    for (int i = 0; i < n; i++){
        if (count[i] == 1){
            ans.push_back(lower[x]);
            x++;
        }
        else{
            ans.push_back(upper[y]);
            y++;
        }
    }
    
    return ans;
    
}
