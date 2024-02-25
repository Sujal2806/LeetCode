//25)Reverse Nodes in k-Group
/*Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.*/


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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* tail = head;
        for (int i = 0; i < k; i++) {
            if (tail == NULL) {
                return head;
            }
            tail = tail->next;
        }
        ListNode* newHead = reverse(head, tail);
        head->next = reverseKGroup(tail, k);
        return newHead;
    }
    ListNode* reverse(ListNode* head, ListNode* tail) {
        ListNode* prev = NULL;
        ListNode* cur = head;
        while (cur != tail) {
            ListNode* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
};
