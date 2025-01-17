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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;

        ListNode *head = l1;
        ListNode *temp = nullptr;
        int carry = 0;

        while (l1 && l2)
        {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            l1->val = sum % 10;
            temp = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        if (l2)
            l1 = temp->next = l2;

        while (l1)
        {
            int sum = l1->val + carry;
            carry = sum / 10;
            l1->val = sum % 10;
            temp = l1;
            l1 = l1->next;
        }

        if (carry)
        {
            temp->next = new ListNode(carry);
        }

        return head;
    }
};