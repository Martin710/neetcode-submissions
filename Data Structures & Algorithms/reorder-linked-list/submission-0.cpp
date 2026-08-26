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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* previous = nullptr;
        ListNode* current = second;
        while(current){
            ListNode* nextnode = current->next;
            current->next = previous;
            previous = current;
            current = nextnode;
        }
        ListNode dummy;
        ListNode* tail = &dummy;
        while(head && previous){
            tail->next = head;
            head = head->next;
            tail = tail->next;
            tail->next = previous;
            previous = previous->next;
            tail = tail->next;
        }
        tail->next = head ? head : previous;
    }
};
