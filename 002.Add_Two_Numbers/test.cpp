#include "solution.h"
#include <iostream>
#include <cassert>

using namespace std;

ListNode *create_linked_list(std::initializer_list<int> lst) {
    auto iter = lst.begin();
    ListNode *head = lst.size() ? new ListNode(*iter++) : nullptr;
    for (ListNode *cur = head; iter != lst.end(); cur = cur->next)
        cur->next = new ListNode(*iter++);
    return head;
}

int main() {
    Solution s;
    ListNode *l1 = create_linked_list({2, 4, 3});
    ListNode *l2 = create_linked_list({5, 6, 4});
    ListNode *ret = s.addTwoNumbers(l1, l2);
    ListNode *ans = create_linked_list({7, 0, 8});
    for (ListNode *cur_r = ret, *cur_a = ans;
         cur_a && cur_r;
         cur_r = cur_r->next, cur_a = cur_a->next)
        assert(cur_r->val == cur_a->val);

    return 0;
}
