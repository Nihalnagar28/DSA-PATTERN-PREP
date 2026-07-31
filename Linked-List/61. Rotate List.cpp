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
        if(head==NULL)return head;
        int n=1;
        ListNode*last=head;
        while(last->next!=NULL){
            n++;
            last=last->next;
        }
        k=k%n;
        ListNode*temp=head;
        for(int i=0;i<(n-k-1);i++){
            temp=temp->next;
        }
            last->next=head;
            head=temp->next;
            temp->next=NULL;

        
        return head;
    }
};