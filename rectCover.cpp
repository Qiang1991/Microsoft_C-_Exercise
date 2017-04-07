//问题：我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

//思路：碰到这种带有n的问题，可以用找规律的方法。
//      n=1时，有1种方法；
//      n=2时，有2种方法；
//      n=3时，有3种方法；
//      n=4时，有5种方法；
//      n=5时，有8种方法...

//     Fibonacci数列！

#include<iostream>
using namespace std;

class Solution{
  public:
    int rectCover(int number){
      //Fibonacci数列的实现方式之一，复杂度比较低
      int first =1,second=2,target=0;
      
      if(number==1)
        return 1;
      if(number==2)
        return 2;
      for(int i=1;i<number-1;i++){
        target = first +second;
        first = second;
        second = target;        
      }
      return target;
    }
};
