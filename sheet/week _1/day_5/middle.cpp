lass Solution{
    public :
        ListNode * middleNode(ListNode * head){
                       ListNode *s = head, *f = head;
while (f != NULL && f->next != NULL)
{
    f = (f->next)->next;
    s = s->next;
}
return s;
}
}
