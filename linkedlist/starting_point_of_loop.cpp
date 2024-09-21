class Solution {
public:
    ListNode *detectCycle(ListNode *head) {                     //using hashing
        ListNode* temp = head;
        unordered_map<ListNode*, int> mpp;
        while(temp)
        {
              if(mpp.find(temp) != mpp.end())
              {
                return temp;
              }
              else
              {
                mpp[temp]++;
              }

              temp = temp->next;
        }
        return NULL;
        
    }
};