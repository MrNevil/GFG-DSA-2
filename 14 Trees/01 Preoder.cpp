
void preorder(Node* root)
{
    
    stack <Node *> s;
    s.push(root);
    
    while (!s.empty()){
        
        Node *curr = s.top();
        s.pop();
        
        cout<< curr -> data<<" ";
        
        if (curr -> right != NULL)
            s.push(curr -> right);
        
        if (curr -> left != NULL)
            s.push(curr -> left);
    }  
}
