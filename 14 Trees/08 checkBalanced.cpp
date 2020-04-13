int height(Node *root){
    if (root == NULL)
        return 0;
    return 1 + max(height(root -> left), height(root -> right));
}
/*
bool isBalanced(Node *root)
{   
    if (root == NULL)
        return true;
        
    int lh = height(root -> left);
    int rh = height(root -> right);
    
    return (abs(lh-rh) <= 1) && isBalanced(root -> left) && isBalanced(root -> right);
}
*/
int checkBalanced(Node *root){
    if (root == NULL)
        return true;
        
    int lh = checkBalanced(root -> left);
    if (lh == -1)
        return -1;
    
    int rh = checkBalanced(root -> right);
    if (rh == -1)
        return -1;
        
    if (abs(lh - rh) > 1)
        return -1;
    else
        return max(lh, rh) + 1;
}

bool isBalanced(Node *root){
    
    int x = checkBalanced(root);
    if (x == -1)
        return 0;
    else
        return 1;
    
}
