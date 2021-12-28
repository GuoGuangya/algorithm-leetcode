#include <iostream>

using namespace std;

/**
 * Definition for a binary tree node.
 * */
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode() : val(0), left(nullptr), right(nullptr)
	{
	}

	TreeNode(int x) : val(x), left(nullptr), right(nullptr)
	{
	}

	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right)
	{
	}
};

/**
 * 先序遍历
 *  @param nNum  	数组的个数
 *  @param count  	数组元素的个数
 * */
void traversal_recursion_preorder(TreeNode* root)
{
	if (root)
	{
		cout << root->val << " ";
		traversal_recursion_preorder(root->left);
		traversal_recursion_preorder(root->right);
	}
}

/**
 * 中序遍历
 *  @param nNum  	数组的个数
 *  @param count  	数组元素的个数
 * */
void traversal_inorder_preorder(TreeNode* root)
{
	if (root)
	{
		traversal_recursion_preorder(root->left);
		cout << root->val << " ";
		traversal_recursion_preorder(root->right);
	}
}

/**
 * 后序遍历
 *  @param nNum  	数组的个数
 *  @param count  	数组元素的个数
 * */
void traversal_postorder_preorder(TreeNode* root)
{
	if (root)
	{
		traversal_recursion_preorder(root->left);
		traversal_recursion_preorder(root->right);
		cout << root->val << " ";
	}
}

int main()
{
	TreeNode level3_r(6);
	TreeNode level3_l(7);
	TreeNode level2_r(4, &level3_l, &level3_r);
	TreeNode level2_l(5);

	TreeNode level1_r(2, &level2_l, &level2_r);
	TreeNode level1_l(3);

	TreeNode root(1, &level1_l, &level1_r);

	traversal_recursion_preorder(&root);

	return 0;
}