#pragma once

struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
};

TreeNode* newTreeNode(int data);
void inOrder(TreeNode* root);
void deleteTree(TreeNode* root);