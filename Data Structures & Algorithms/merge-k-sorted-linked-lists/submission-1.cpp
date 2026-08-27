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
    ListNode* merge2Lists(ListNode* list1, ListNode* list2){

        ListNode dummy;
        ListNode* tail = &dummy;
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        while(p1 && p2){
            if(p1->val <= p2->val){
                tail->next = p1;
                p1 = p1->next;    
            }
            else{
                tail->next = p2;
                p2 = p2->next;
            }
            tail = tail->next;
        }
        tail->next = p1 ? p1 : p2;

        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }
        vector<ListNode*> current = lists;

        while(current.size() > 1){
            vector<ListNode*> nextround;
            for(int i = 0; i < current.size(); i += 2){
                if(i + 1 < current.size()){
                    nextround.push_back(
                    merge2Lists(current[i], current[i+1]));
                }
                else{
                    nextround.push_back(current[i]);
                }
            }
            current = nextround;
        }

        return current[0];
        
    }
};
