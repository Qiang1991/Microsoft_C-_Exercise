//问题：给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。

//思路：对输入的参数进行定义域的判断。

class Solution {
public:
    double Power(double base, int exponent) {
        if (base ==0 && exponent<=0)
            return 0;
        double result=1.0;
    	  if (exponent == 0){
            return result;
        }
        else if (exponent > 0){
            for (int i=1;i<=exponent;i++)
                result *= base;
            return result;
        }
        else if (exponent < 0){
            for (int i=1;i<=-exponent;i++)
                result /= base;
            return result;
        }
        return result;
    }
};
