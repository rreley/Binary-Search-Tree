#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"
BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}
BinarySearchTree::~BinarySearchTree()
{
}
Node* BinarySearchTree::getRoot()
{
	return(root);
}
void BinarySearchTree::updateRoot(Node* node)
{
	root = node;
}
void BinarySearchTree::insert(Node* node)
{
	if (root == NULL)
		root = node; else
	{
		Node* tempNode = root;
		while (tempNode != NULL)
		{
			if (node->value < tempNode->value) // go left
			{
				if (tempNode->left != NULL)
					tempNode = tempNode->left;
				else
				{
					tempNode->left = node;
					break;
				}
			}
			else // go right
			{
				if (tempNode->right != NULL)
					tempNode = tempNode->right;
				else
				{
					tempNode->right = node;
					break;
				}
			}
		} // while
	} //if
}
Node * BinarySearchTree::insertRecursively(Node* troot, Node* newNode) //Complete!
{
	if (troot == NULL)
		return newNode;

	if (newNode->value < troot->value)
		troot->left = insertRecursively(troot->left, newNode);
	else
		troot->right = insertRecursively(troot->right, newNode);
	return troot;
}
void BinarySearchTree::dumpBinarySearchTree()
{
	inOrderTraversal(root);
}
void BinarySearchTree::inOrderTraversal(Node* root) // Left Root Right
{
	if (root != NULL)
	{
		inOrderTraversal(root->left);
		cout << root->value << " ";
		inOrderTraversal(root->right);
	}
}
int BinarySearchTree::sum(Node* node) //Complete!
{
	if (node == NULL)
		return 0;
	return (node->value + sum(node->left) + sum(node->right));
}