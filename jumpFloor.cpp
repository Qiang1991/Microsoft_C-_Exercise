//问题：一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。 

//思路：n阶台阶的最后一跳分两种情况，如果是上1级台阶，则之前的跳法有f(n-1)种；若上2级台阶，则之前的跳法有f(n-2)种。
//      所以，也是Fibonacci数列的思想：f(n)=f(n-1)+f(n-2)。

#include<iostream>
using namespace std;

class Solution{
  public:
    int jumpFloor(int number){
      int m=0;
      if (number==1)
        return 1;
      else if (number==2)
        return 2;
      else
        m = jumpFloor(number-1)+jumpFloor(number-2);
      return m;
    }
};
