/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode* list1 = headA;
            ListNode* list2 = headB;
            int l1=0;
            int l2=0;
            while(list1!=NULL) {
                l1++;
                list1 = list1->next;
            }
             while(list2!=NULL) {
                 l2++;
                list2 = list2->next;
               
            }
            int big = max(l1 , l2);
            int diff = abs(l1 - l2);

            list1 = headA;
            list2 = headB;
            for(int i = 0; i<diff ; i++) {
                if(big ==l1) list1 = list1->next;
                if(big ==l2) list2 = list2->next;
            }

            while(list1!= NULL && list2 != NULL ){
                if(list1 == list2) {
                    return list1;
                }
                list1=list1->next;
                list2 = list2->next;
            }
            return nullptr;
    }
};