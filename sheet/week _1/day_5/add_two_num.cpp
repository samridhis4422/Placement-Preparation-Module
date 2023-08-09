class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *nnode = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *a = reverse(l1);
        ListNode *b = reverse(l2);
        ListNode *ans = new ListNode(-1);
        ListNode *re = ans;
        int rem = 0;
        while (a != NULL && b != NULL)
        {
            int sum = a->val + b->val + rem;
            if (sum / 10 >= 1) // have carry
            {
                int r = sum % 10;
                ListNode *temp = new ListNode(r);
                ans->next = temp;
                ans = ans->next;
                rem = sum / 10;
            }
            else
            {
                ListNode *temp = new ListNode(sum);
                ans->next = temp;
                ans = ans->next;
                rem = 0;
            }
            a = a->next, b = b->next;
        }

        if (a != NULL || b != NULL)
        {
            while (b != NULL)
            {
                int sum = b->val + rem;
                if (sum / 10 >= 1)
                {
                    int r = sum % 10;
                    ListNode *temp = new ListNode(r);
                    ans->next = temp;
                    ans = ans->next;
                    rem = sum / 10;
                }
                else
                {
                    ListNode *temp = new ListNode(sum);
                    ans->next = temp;
                    ans = ans->next;
                    rem = 0;
                }
                b = b->next;
            }
            while (a != NULL)
            {
                int sum = a->val + rem;
                if (sum / 10 >= 1)
                {
                    int r = sum % 10;
                    ListNode *temp = new ListNode(r);
                    ans->next = temp;
                    ans = ans->next;
                    rem = sum / 10;
                }
                else
                {
                    ListNode *temp = new ListNode(sum);
                    ans->next = temp;
                    ans = ans->next;
                    rem = 0;
                }
                a = a->next;
            }
        }

        if (rem == 1)
        {
            ListNode *temp = new ListNode(1);
            ans->next = temp;
            ans = ans->next;
        }

        return (re->next);
    }
};