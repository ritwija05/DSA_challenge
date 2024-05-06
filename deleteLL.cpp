/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
void deleteNode(ListNode* node) {
        ListNode *curr;
        while(node->next!=nullptr)
        {
            curr=node;
            node->val=node->next->val;
            node=node->next;
        }
        curr->next=nullptr;
    }
