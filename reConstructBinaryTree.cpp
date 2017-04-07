//问题：输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
//      例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

//思路：前序遍历，先访问根节点，再是左子树，最后右子树。中序遍历，先是左子树，再根节点，最后右子树。
//      将前序遍历中的首个元素，认为是整棵树的根节点；
//      从中序遍历中找到根节点元素，该元素左边的部分是左子树，右边的部分是右子树。
//      递归：对左子树和右子树再次运用所提方法。

#include<iostream>
using namespace std;

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
  public:
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int>vin){
      int nodeNum = pre.size();
      if (nodeNum==0)
        return NULL;
      int rootValue = pre[0];
      TreeNode* node = new TreeNode(rootValue);//创建根节点
      
      int rootPos;
      for (int i=0;i<nodeNum;i++){
        if (vin[i]==rootValue){
          rootPos = i;
          break;
        }
        //i++;          
      }
      
      vector<int> pre_left,pre_right,vin_left,vin_right;
      for(int j=0;j<nodeNum;j++){
        if (j<rootPos){
          pre_left.push_back(pre[j+1]);
          vin_left.push_back(vin[j]);
        }
        else if (j>rootPos){
          pre_right.push_back(pre[j]);
          vin_right.push_back(vin[j]);
        }
      }
      node->left = reConstructBinaryTree(pre_left,vin_left);
      node->right= reConstructBinaryTree(pre_right,vin_right);
      return node;
      }
};
