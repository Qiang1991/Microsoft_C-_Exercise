//问题：输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于位于数组的后半部分，
//      并保证奇数和奇数，偶数和偶数之间的相对位置不变。 

//思路：如果不考虑奇数和奇数，偶数和偶数之间的相对位置不变。那么只需要两个指针分别指向数组的头和尾，依次比较。
       1. 如果头指针指向的数组位置为奇数，那么就判断尾指针指向的数组位置的奇偶性。如果是奇数，则头指针后移一个位置，如果是偶数，则尾指针前移一个位置。
       2. 如果头指针指向的数组位置为偶数，那么就判断尾指针指向的数组位置的奇偶性。如果是奇数，则交换头尾指针指向的数组元素，如果是偶数，则尾指针前移一个位置。

//    如果要保证奇数和奇数，偶数和偶数之间的相对位置不变。
      首先寻找第一个奇数，并将其放在0号位置。然后将第一个奇数之前的元素全部往后移一位。
      依次在第一个奇数之后的元素中寻找奇数，并做移动操作。就可以保证原来的相对顺序。


class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int arrayLen = array.size();
        int temp;
        int oddPos = -1;
        for (int i=0;i<arrayLen;i++){
            if (array[i]%2==1){
                oddPos += 1;
                
                if (i!=oddPos){
                    //temp = array[0];
                    temp = array[oddPos];
                    //array[0] = array[i];
                    array[oddPos] = array[i];

                    int j=i;
                    while (j>oddPos){
                        array[j]=array[j-1];
                        j--;
                    }
                    array[oddPos+1] = temp;

                    //break;
                }
            }
        }
    }
};
