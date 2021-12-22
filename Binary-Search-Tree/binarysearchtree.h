#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H
class BinarySearchTree
{
public:
	BinarySearchTree();
	~BinarySearchTree();
	void insert(Node* node);
	Node* insertRecursively(Node* root, Node* Newnode);
	Node* getRoot();
	void updateRoot(Node* node);
	void inOrderTraversal(Node* root);
	void dumpBinarySearchTree();
	int sum(Node* node);
private:
	Node* root;
};
#endif
