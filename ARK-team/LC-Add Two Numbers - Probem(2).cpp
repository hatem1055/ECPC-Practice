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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* node = new ListNode(0);
        head->next = node;
        while(l1 != NULL && l2!=NULL){
            int res = l1->val + l2->val;
            if(res>9){
                node-> val += res-10;
                node-> next = new ListNode(1);
                node = node->next;
                
            }else{
                int carry=0;
                node->val += res;
                if(node->val>9){
                    node->val -= 10;
                    node->next = new ListNode(1);
                    node= node->next;
                    
                }else if(l1->next != NULL || l2->next!=NULL||carry==1){
                node->next= new ListNode(0);
                node = node->next;
                }
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==NULL && l2!=NULL){
            cout<<"la"<<endl;
            int carry = 0;
            while(l2!=NULL){
                node->val += l2->val;
                if(node->val>9){
                    carry = 1;
                    node->val-=10;
                }
                if(l2->next!=NULL || carry ==1){
                node->next = new ListNode(carry);
                carry = 0;
                node = node->next;
                }
                l2 = l2->next;
            }
        }else if(l1!= NULL && l2==NULL){
            while(l1!=NULL){
                cout<<"La! "<<endl;
                int carry = 0;
                node->val += l1->val;
                if(node->val>9){
                    carry = 1;
                    node->val-=10;
                }
                if(l1->next != NULL || carry == 1){
                node->next = new ListNode(carry);
                node = node->next;
                carry = 0;
                }
                l1 = l1->next;
            }
        }
        return head->next;
        
    }
};
