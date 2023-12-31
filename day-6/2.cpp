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
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode *,int> m;
        while(head!=NULL)
        {
                        if(m[head]>0) return 1;
                                    m[head]++;

            head=head->next;
        }
        return 0;
    }
};