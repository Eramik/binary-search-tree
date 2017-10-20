#pragma once

class BST
{

private:

	struct node
	{
		int key;
		node* left;
		node* right;
	};

	node* root;

	node* CreateLeaf(int key);
	void AddLeafPrivate(int key, node* ptr);
	void PrintInOrderPrivate(node* ptr);

public:

	BST();
	void AddLeaf(int key);
	void PrintInOrder();

};