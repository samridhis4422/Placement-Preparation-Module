class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *c = head, *p = NULL, *n;
        if (head == NULL)
            return true;
        while (c != NULL)
        {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        if (p == head)
            return true;
        return false;
    }
};