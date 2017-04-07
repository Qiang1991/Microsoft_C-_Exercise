//问题：用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。 

//思路：将两个stack中的元素往返地倒腾。


class Solution{
  private:
    stack<int> stack1;
    stack<int> stack2;
    
  public:
    void push(int node){
      int m;
      while(!stack2.empty()){//当stack2不为空时，将其中的元素都倒到Stack1当中去。
        m = stack2.top();
        stack1.push(m);
        stack2.pop();
      }
      stack1.push(node);
    }
    
    int pop(){
      int m;
      while(!stack1.empty()){//当stack1不为空时，将其中的元素都倒到Stack2当中去。
        m = stack1.top();
        stack2.push(m);
        stack1.pop();
      }
      m = stack2.top();
      stack2.pop();
      return m;
    }
};
