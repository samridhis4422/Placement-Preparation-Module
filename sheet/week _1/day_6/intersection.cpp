class Solution
{
public:
    int length(ListNode *head)
    {
        if (head == NULL)
            return 0;
        int count = 0;
        while (head)
        {
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == NULL || headB == NULL)
            return NULL;
        int lenA = length(headA), lenB = length(headB);

        if (lenA > lenB)
        {
            while (lenA > lenB)
            {
                headA = headA->next;
                lenA--;
            }
        }
        if (lenB > lenA)
        {
            while (lenB > lenA)
            {
                headB = headB->next;
                lenB--;
            }
        }

        while (headA && headB)
        {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
