//问题：输入一个链表，输出该链表中倒数第k个结点。

//思路：先求出整个链表的长度，再求倒数第k个节点。

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if (k<=0) 
            return NULL;
        if (pListHead==NULL)
            return NULL;
        
        int listLength=0;
        ListNode* node = pListHead;
        while (node != NULL){
            listLength++; 
            node = node->next;
        }
        
        if (k>listLength) 
            return NULL;
        
        ListNode* mnode = pListHead;
        for (int i=1;i<=listLength-k;i++){
            mnode = mnode->next; 
        }
    	return mnode;
    }
};
