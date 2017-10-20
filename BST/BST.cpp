#include "stdafx.h"

BST::BST()
{
	root = NULL;

}

BST::node* BST::CreateLeaf(int key)
{
	node* n = new node;
	n->key = key;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void BST::AddLeaf(int key)
{
	AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* ptr)
{
	if (root == NULL)
	{
		root = CreateLeaf(key);
	} 
	else if (key < ptr->key) 
	{
		if (ptr->left != NULL)
		{
			AddLeafPrivate(key, ptr->left);
		}
		else 
		{
			ptr->left = CreateLeaf(key);
		}
	}
	else if (key > ptr->key)
	{
		if (ptr->right != NULL)
		{
			AddLeafPrivate(key, ptr->right);
		}
		else
		{
			ptr->right = CreateLeaf(key);
		}
	}
	else 
	{
		std::cout << "The key " << key << " has already been added to the tree" << std::endl;
	}
}

void BST::PrintInOrder()
{
	PrintInOrderPrivate(root);
}

void BST::PrintInOrderPrivate(node* ptr)
{
	if (root != NULL) {
		if (ptr->left != NULL)
		{
			PrintInOrderPrivate(ptr->left);
		}
		std::cout << ptr->key << " ";
		if (ptr->right != NULL)
		{
			PrintInOrderPrivate(ptr->right);
		}
		return;
	}

	std::cout << "The tree is empty" << std::endl;
}

