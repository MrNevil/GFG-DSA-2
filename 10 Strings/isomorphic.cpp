bool areIsomorphic(string str1, string str2)
{
    
    int n = str1.size();
    int m = str2.size();
    
    if (n != m)
        return false;
        
    unordered_map <char, char> umap;
    unordered_set <char> s;
    
    for (int i = 0; i < n; i++){
       
       if (umap.find( str1[i] ) == umap.end()){
           if (s.find(str2[i]) == s.end()){
               umap[ str1[i] ] = str2[i];
               s.insert(str2[i]);
           }
           else
                return false;
       } 
       else{
           if (umap[str1[i]] == (s.find( str2[i]) != s.end()));
                
           else
                return false;
       }
       
    }
    
    return true;
    
}
