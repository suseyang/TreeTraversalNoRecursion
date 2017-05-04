#pragma once

struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* newTreeNode(int data);
void deleteTree(TreeNode* root);
void inOrder(TreeNode* root);
