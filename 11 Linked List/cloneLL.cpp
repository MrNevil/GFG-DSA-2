Node *copyList(Node *head) {
    
    Node *curr, *next;
    for (curr = head; curr != NULL; ){
        next = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = next;
        curr = next;
    }
    
    curr = head;
    while (curr) 
    { 
        if(curr->next) 
            curr->next->arb = curr->arb ?  
                                 curr->arb->next : curr->arb; 
        curr = curr->next?curr->next->next:curr->next; 
    } 
    
    Node *cloneHead = head->next, *clone = head->next;
    curr = head;
    
    while (clone && curr){
        curr->next = curr->next ? curr->next->next : curr->next;
        clone->next = clone->next ? clone->next->next : clone->next;
        curr = curr->next;
        clone = clone->next;
    }
    
    return cloneHead;
}
