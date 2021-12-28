#include <iostream>
#include <queue>

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

queue<TreeNode*> items;

void level_traversal(TreeNode* root)
{
	items.push(root);
	while (!items.empty())
	{
		TreeNode* item = items.front();
		items.pop();
		cout << item->val << " ";
		if (nullptr != item->left)
			items.push(item->left);
		if (nullptr != item->right)
			items.push(item->right);
	}
}


void recursion_traversal(TreeNode* root)
{
	items.push(root);
	while (!items.empty())
	{
		TreeNode* item = items.front();
		items.pop();
		cout << item->val << " ";
		if (nullptr != item->left)
			items.push(item->left);
		if (nullptr != item->right)
			items.push(item->right);
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

	level_traversal(&root);

	return 0;
}