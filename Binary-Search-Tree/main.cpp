#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"
int main()
{
	BinarySearchTree* bst = new BinarySearchTree();

	Node* node1 = new Node(8);
	bst->insert(node1);
	Node* node2 = new Node(5);
	bst->insert(node2);
	Node* node3 = new Node(6);
	bst->insert(node3);
	Node* node4 = new Node(10);
	bst->insert(node4);
	Node* node5 = new Node(12);
	bst->insert(node5);
	// dump binary search tree
	bst->dumpBinarySearchTree();
	cout << endl;
	cout << bst->sum(bst->getRoot()) << endl;
	system("PAUSE");
	return 0;
}