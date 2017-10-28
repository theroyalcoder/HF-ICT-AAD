/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;

class Node {
	public:
		Node * left;
		Node * right;
		int value;
		Node(int value);
};

Node::Node(int value) : left(0), right(0), value(value) {
}

class BinaryTree {
	private:
		Node * root;
		void insert(int v, Node * n);
		void postOrder(Node * n);
		int height(Node * last);
	public:
		BinaryTree();
		void insert(int v);
		int height();
		void postOrder();
};

BinaryTree::BinaryTree() : root(0) {
}

void BinaryTree::insert(int v, Node * n) {
	if (v < n->value) {
		// left
		if (n->left == 0) {
			n->left = new Node(v);
		} else {
			insert(v, n->left);
		}
	} else {
		// right
		if (n->right == 0) {
			n->right = new Node(v);
		} else {
			insert(v, n->right);
		}
	}
}

void BinaryTree::postOrder(Node *n)
{
	if(n != 0){
		postOrder(n->left);
		postOrder(n->right);
		cout<< n->value<<endl;
	}
}
void BinaryTree::postOrder()
{
	postOrder(root);
}

void BinaryTree::insert(int v) {
	if (root == 0) {
		root = new Node(v);
	} else {
		insert(v, root);
	}
}

int BinaryTree::height() {
	if (root != 0) {
		return height(root);
	} else {
		return 0;
	}

};

int BinaryTree::height(Node *last) {
	int l = 1;
	int r = 1;
	if (last->left != 0) {
		l = height(last->left) + 1;
	}
	if (last->right != 0) {
		r = height(last->right) + 1;
	}
	if (l >= r) {
		return l;
	} else {
		return r;
	}
};




int main() {
	BinaryTree bt;
	int values[] = {50, 25, 75, 14, 7, 19, 63, 89, 99, 79, 100};
	for (int &x : values) {
		bt.insert(x);
	}

	cout<<bt.height()<<endl;


	return 0;
}



























