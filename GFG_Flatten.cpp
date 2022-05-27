Node *mer(Node *l1, Node *l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1->data>l2->data) swap(l1,l2);
    Node *res=l1;
    while(l1&&l2){
        Node *temp=NULL;
         while(l1!=NULL&&l1->data<=l2->data){
                temp=l1;
                l1=l1->bottom;
            }
            temp->bottom=l2;
            swap(l1,l2);
    }
    return res;
}
Node *flatten(Node *root)
{
    if (root == NULL || root->next == NULL) 
        return root; 
    root->next = flatten(root->next); 
    root = mer(root, root->next); 
    return root; 
}
