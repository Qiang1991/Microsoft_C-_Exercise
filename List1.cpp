//问题：输入一个链表，从尾到头打印链表每个节点的值。

//思路：题目要求对链表进行遍历，这个链表正常情况下是先访问前面的节点，再访问后面的节点；但题目要求后访问的节点先被打印，这是后进先出，符合“栈”的特点。

struct ListNode{
	int val;
	struct ListNode*next;
	
	ListNode(int x){
		val(x);
		next(NULL);
	}
}
