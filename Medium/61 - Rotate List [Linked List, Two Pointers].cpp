
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
    ListNode* rotateRight(ListNode* head, int k) {
    if(head == nullptr) return head;
    int len = 0;
    ListNode* temp = head;
    while(temp != nullptr) {
    len++;
    temp = temp->next;
}
        if(k%len==0){
            return head;
        }
        for(int i = 0; i<k%len ; i++){
        temp = head;
        while(temp->next->next!=nullptr){
            temp = temp->next;
        }
       temp->next->next = head;
        head = temp->next;
        temp->next=nullptr;

        }

        return head;

    }
};

