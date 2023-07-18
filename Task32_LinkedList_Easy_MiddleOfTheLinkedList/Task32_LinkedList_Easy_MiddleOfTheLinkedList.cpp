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
        ListNode* tmp = head;
        int len = 0;
        while (tmp) {
            tmp = tmp->next;
            len++;
        }
        len /= 2;
        tmp = head;
        for (int i = 0;i < len;i++) {
            tmp = tmp->next;
        }
        return tmp;
    }
};
