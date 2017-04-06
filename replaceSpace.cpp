//请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

//思路：讲一个字符的空格替换为三个字符的“%20”，在原字符串上操作，则必然导致字符串增长。
//      倘若从字符创首部出发，将导致后面的字符被覆盖，因此，从字符串的末尾开始遍历。
//      先找到原字符串中有多少空格，就可以计算出新字符串的长度。

#include<istream>
using namespace std;

class Solution{
  public:
    void replaceSpace(char *str, int length){
      int numSpace=0;
      for(int i=0;i<length;i++){
        if (str[i]==' '){
          numSpace++;
        }
      }
      
      int lengthNew = length + 2*numSpace;
      int point1=length-1;  //设置两个指针，分别指向原来的、新的字符串
      int point2=lengthNew-1;
      
      while(point1>=0 && point2>=point1){
        if (str[point1]!=' '){
          str[point2] = str[point1];
          point1--;
          point2--;
        }
        else{
          str[point2]='0';
          point2--;
          str[point2]='2';
          point2--;
          str[point2]='\%';
          point2--;
          point1--;
        }
      }
    }
};
