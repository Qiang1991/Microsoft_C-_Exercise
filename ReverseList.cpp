//问题：输入一个链表，反转链表后，输出链表的所有元素。

//思路：对链表中的每个节点，让它后面的节点指向它，让它指向前面的节点。

class Solution{
  public:
    ListNode* ReverseList(ListNode* Head){
      if (Head == NULL)
        return NULL;
        
      ListNode* preNode = NULL;
      ListNode* postNode = NULL;
      while(Head!=NULL){
        postNode = Head->next;
        Head->next = preNode;
        
        preNode = Head;
        Head = postNode;
      }
      
      return preNode;
    }
};
