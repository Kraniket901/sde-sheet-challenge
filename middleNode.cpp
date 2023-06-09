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
    ListNode* middleNode(ListNode* head) {
        int cnt = 0;
        ListNode *temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int mid = (cnt / 2);
        while(mid--){
            head=head->next;
        }
        return head;
    }
};

//turtle rabbit method
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
    ListNode* middleNode(ListNode* head) {
        ListNode *turtle=head, *rabbit=head;
        while(rabbit!=NULL && rabbit->next!=NULL){
            turtle=turtle->next;
            rabbit=rabbit -> next -> next;
        }
        return turtle;
    }
};