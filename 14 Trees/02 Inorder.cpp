
void inorder(Node* root)
{   
    Node *curr = root;
    stack<Node *> s;
    
    while (!s.empty() || curr != NULL){
        
        while (curr != NULL){
            s.push(curr);
            curr = curr -> left;
        }
        
        curr = s.top();
        s.pop();
        cout<<curr -> data<<" ";
        
        curr = curr -> right;
    }
    
}
