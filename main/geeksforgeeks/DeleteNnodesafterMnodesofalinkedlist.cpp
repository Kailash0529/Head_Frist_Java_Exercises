class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here   
        if(!head)return;
        Node* it=head;
        for(int i=0;i<M-1;i++)
        {
            if(!it)return;
              it=it->next;
            
        }
        if(!it)return;
        Node* mth=it;
         it=mth->next;
        for(int i=0;i<N;i++)
        {
            if(!it)break;
            
            Node* temp=it->next;
            delete it;
            it=temp;
        }
        mth->next=it;
        linkdelete(it,M,N);
        
    }
};