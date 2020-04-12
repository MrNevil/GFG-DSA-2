void postOrder(Node* root)
{   
    vector<int> ans;
    stack<Node *> s;
    s.push(root);
    
    while (!s.empty()){
        
        Node *curr = s.top();
        s.pop();
        ans.push_back(curr -> data);
        
        if (curr -> left != NULL)
            s.push(curr -> left);
            
        if (curr -> right != NULL)
            s.push(curr -> right);
    }
    
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
        cout<<x<<" ";
  
}
