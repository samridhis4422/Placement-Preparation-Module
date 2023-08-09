class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode ans = new ListNode(-1);
        ListNode *p = ans;
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                ans->next = l1;
                l1 = l1->next;
                p = l1;
            }
            else
            {
                ans->next = l2;
                l1 = l2->next;
                p = l2;
            }
        }
    }
};