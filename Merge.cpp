//问题：输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。 

//思路：先找两个头结点当中比较小的作为合并之后的头结点，然后再将剩余的两个链表做递归合并。

class Solution{
  public:
    ListNode* Merge(ListNode* Head1, ListNode* Head2){
      if (Head1==NULL)
        return Head2;
      if (Head2==NULL)
        return Head1;
      if (Head1==NULL && Head2==NULL)
        return NULL;
        
      ListNode* Head = NULL;  
      if(Head1->val <= Head2->val){
        Head = Head1;
        Head->next = Merge(Head1->next,Head2);
      }
      else if(Head1->val > Head2->val){
        Head = Head2;
        Head->next = Merge(Head1,Head2->next);
      }
        
      return Head;
    }
};
