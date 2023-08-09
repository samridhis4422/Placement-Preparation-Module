class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *c = head, *p = NULL, *n;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};