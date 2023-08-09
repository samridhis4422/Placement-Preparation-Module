class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *temp = head, *pre = head, *start = head;
        for (int i = 0; i < n - 1; i++)
        {
            temp = temp->next;
        }
        // cout<<temp->val<<endl;
        int count = 0;

        while (temp->next != NULL)
        {
            // pre=start;
            start = start->next;
            temp = temp->next;
            count++;
        }
        // cout<<start->val<<" "<<count<<endl;
        for (int i = 0; i < count - 1; i++)
        {
            pre = pre->next;
        }
        if (start == head)
        {
            return head->next;
        }
        else
        {
            if (start->next == NULL)
            {
                pre->next = NULL;
            }
            else
            {
                pre->next = start->next;
            }
        }
        cout << pre->val << endl;
        return head;
    }
};