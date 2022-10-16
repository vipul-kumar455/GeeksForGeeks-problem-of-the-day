ListNode *moveToFront(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
        curr->next=head;
        prev->next=NULL;
        return curr;
    }
