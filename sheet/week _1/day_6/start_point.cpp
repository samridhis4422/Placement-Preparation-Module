class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *s = head, *f = head;
        while (f != NULL && f->next != NULL)
        {
            s = s->next;
            f = f->next->next;
            if (s == f)
            {
                ListNode *start = head;
                while (start != s)
                {
                    s = s->next;
                    start = start->next;
                }
                return start;
            }
        }
        return NULL;
    }
};