//2)Add Two Numbers

/*You are given two non-empty linked lists representing two non-negative integers.
 The digits are stored in reverse order, and each of their nodes contains a single digit. 
 Add the two numbers and return the sum as a linked list.*/

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l4=new ListNode();
        ListNode* l3=l4;
        int c=0;
        while(l1 !=NULL || l2 !=NULL || c){
             int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;
            c = sum / 10;
            l3->next=new ListNode(sum%10);
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
            l3=l3->next;
        }
        return l4->next;
    }
};