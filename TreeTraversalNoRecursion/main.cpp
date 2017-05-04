#include "TreeTraversalNoRecursion.h"

int main()
{
	/* Constructed binary tree is
				1
			  /   \
			2      3
		  /  \
		4     5
	*/
	TreeNode* root = newTreeNode(1);
	root->left = newTreeNode(2);
	root->right = newTreeNode(3);
	root->left->left = newTreeNode(4);
	root->left->right = newTreeNode(5);

	inOrder(root);
	//cin.get();
	deleteTree(root);
	return 0;

}