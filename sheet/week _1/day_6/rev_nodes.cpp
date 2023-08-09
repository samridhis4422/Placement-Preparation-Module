class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *prev = NULL, *curr = head, *nxt;
        int t = 0;
        while (curr != NULL && t < k)
        {
            nxt = curr->next;
            prev = curr;
            curr = nxt;
            t++;
        }
        if (nxt != NULL)
        {
            head->next = reverseKGroup(nxt, k);
        }
        return prev;
    }
};