/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *head2 = head;
        
        int len = 0;
        while(head2)
        {
            head2 = head2->next;
            len++;
        }
        
        int x = len - n;
        
        if(x > 0)
        {
            ListNode *head3 = head;
            while(--x)
            {
                head3 = head3->next;
            }

            head3->next = head3->next->next;
        }
        else
        {
            if(len == 1)
                head = NULL;
            else
                head = head->next;
        }
        
        return head;
    }
};