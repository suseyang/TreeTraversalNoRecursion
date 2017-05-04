#include <iostream>
#include <stack>

#include "TreeTraversalNoRecursion.h"

using namespace std;


// Iterative function for inorder tree traversal
void inOrder(TreeNode* root)
{
	// Set current to root of binary tree.
	TreeNode* current = root;
	std::stack<TreeNode*> nodeStack;
	//StackNode* stack = null;
	bool done = false;

	while (!done)
	{
		// Reach the left most node of the current tree node.
		// And during the execution, if current is set to the right side node,
		// push it into stack and deal with that subtree likewise.
		if (current)
		{
			// Push pointer to a tree node into the stack before traversing
			// the node's left subtree.
			//push(&stack, current);
			nodeStack.push(current);
			current = current->left;

		}
		// Backtrack from the empty subtree and visit the tree node
		// at the top of the stack; however, if the stack is empty,
		// you're done.
		else 
		{
			if (!nodeStack.empty())
			{
				current = nodeStack.top();
				nodeStack.pop();
				cout << current->data << " ";
				// we have visited the node and its left subtree.
				// Now, it's right subtree's turn.
				current = current->right;

			}
			else
			{
				done = true;
			}
		}

	}
}

TreeNode* newTreeNode(int data)
{
	TreeNode* node = new TreeNode{ data, nullptr, nullptr };

	return node;
}

void deleteTree(TreeNode* root)
{
	if (root != nullptr)
	{
		deleteTree(root->left);
		deleteTree(root->right);
		delete root;
	}
}