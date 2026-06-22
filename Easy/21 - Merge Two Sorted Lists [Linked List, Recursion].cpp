
// =========================
// Language: cpp
// =========================

// -------- Method 1 --------

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* now = dummy;
        ListNode* curr = list1;
        ListNode* pres = list2;
        while(curr!=nullptr && pres!=nullptr){
            if(curr->val < pres->val){
                now->next = curr;
                curr = curr->next;
                now = now->next; 
            }
            else{
                now->next = pres;
                pres= pres->next;
                now = now->next; 
            }
           
        }
        if(curr) now->next = curr;
        if(pres) now->next = pres;

        return dummy->next;
        
    }
};

