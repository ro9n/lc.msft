#include <bits/stdc++.h>

using namespace std;

class Solution {
 public:
  bool hasCycle(ListNode* head) {
    if (!head) return false;
    ListNode *slow = head, *fast = head->next;

    while (slow != fast) {
      if (!fast || !fast->next) return false;

      slow = slow->next;
      fast = fast->next->next;
    }

    return true;
  }
};

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
