// BST.cpp
// Modified version of lab04 starter code for demo purposes



#include <iostream>
using std::cout;

// constructor sets up empty tree
template <class T>
BST<T>::BST() : root(nullptr) { }

// destructor deletes all nodes
template <class T>
BST<T>::~BST() {
    clear(root);
}

// recursive helper for destructor
template <class T>
void BST<T>::clear(Node *n) {
    if (n) {
	clear(n->left);
	clear(n->right);
	delete n;
    }
}

// insert value in tree; return false if duplicate
template <class T>
bool BST<T>::insert(T value) {
    // handle special case of empty tree first
    if (!root) {
	root = new Node(value);
	return true;
    }
    // otherwise use recursive helper
    return insert(value, root);
}

// recursive helper for insert (assumes n is never 0)
template <class T>
bool BST<T>::insert(T value, Node *n) {
    if (value == n->info)
	return false;
    if (value < n->info) {
	if (n->left)
	    return insert(value, n->left);
	else {
	    n->left = new Node(value);
	    n->left->parent = n;
	    return true;
	}
    }
    else {
	if (n->right)
	    return insert(value, n->right);
	else {
	    n->right = new Node(value);
	    n->right->parent = n;
	    return true;
	}
    }
}

// print tree data pre-order
template <class T>
void BST<T>::printPreOrder() const {
    printPreOrder(root);
}

// recursive helper for printPreOrder()
template <class T>
void BST<T>::printPreOrder(Node *n) const {
    if (n) {
	cout << n->info << " ";
	printPreOrder(n->left);
	printPreOrder(n->right);
    }
}


template<class T>
void BST<T>::printBreadthFirst() const{
	queue<Node*> q; // Storing node pointers in the queue
	if(!root) return;
	q.push(root);
	//Everything before the while loop is O(1)
	while(!q.empty()){ //Exactly N - N is number of nodes in the BST
		Node* fr = q.front(); //O(1)
		cout<<fr->info<<" "; //O(1)
		if(fr->left)//O(1)
			q.push(fr->left); // insert the left child //O(1)
		if(fr->right) //O(1)
			q.push(fr->right); //insert the right child
		q.pop();//O(1)
	}

	cout<<endl;
//O(1) + N* O(1)
//O(N)

}



// IMPLEMENT THIS FIRST: returns the node for a given value or NULL if none exists
// Parameters:
// int value: the value to be found
// Node* n: the node to start with (for a recursive call)
// Whenever you call this method from somewhere else, pass it
// the root node as "n"

/*BST::Node* BST::getNodeFor(int value, Node* n) const{
    return NULL; // REPLACE THIS NON-SOLUTION
}*/

