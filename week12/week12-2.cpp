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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        //ListNode * ans =list1; //宣告答案 亂接到list1
        //ListNode * ans = new ListNode(99); //新增 內容99
        ListNode * ans = new ListNode(99, new ListNode(88));
        // 新增1個 值是99 且右邊又 新增1 個 值是90
        return ans;
    }
};
