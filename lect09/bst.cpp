//bst.cpp
//BST ADT
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

class bst{
   public:
      bst():root(nullptr){}
      ~bst(){
         clear();
      }
      bst(const bst& source);
      bool insert(int value); // return false if the value already exists
      bool remove(int value);
      void clear(); //deletes all the nodes in the BST
      bool search(int value) const;
      int min() const;
      int max() const;
      int successor(int value) const;
      int predecessor(int value) const;   
      void printInOrder() const;
   private:
      class bstNode{
         public:
            bstNode* left;
            bstNode* right;
            bstNode* parent;
            int const data;
            bstNode(const int& d):data{d}{
               left = right = parent =0;
            }
      };
      bstNode* root;
      bool insert(int value, bstNode* n);
      void printInOrderHelper(bstNode* n) const;
      void clear(bstNode* n);
      bstNode* getNode(int value) const;
     
};

int bst::predecessor(int value) const{
   //get a pointer to the node that has the key value
   //Node* n = getNode(value);
   return 42;

}
void bst::clear(bstNode* n){
   //post order traversal!
   if(!n) return;
   clear(n->left); 
   clear(n->right); //accessinhg memory that has been deleted
   delete n;
}

void bst::printInOrderHelper(bstNode* n) const{
   if(!n) return;
   printInOrderHelper(n->left);
   cout<<n->data<<" ";
   printInOrderHelper(n->right);
}



int bst::max() const{
   return std::numeric_limits<int>::max();
}

bool bst::insert(int value){
   if(!root) {
      root = new bstNode{value};
      return true;
   }else {
      return insert(value, root);
   }

}

bool bst::insert(int value, bstNode* n){
   if (value == n->data)
	   return false;
    if (value < n->data) {
	if (n->left)
	    return insert(value, n->left);
	else {
	    n->left = new bstNode(value);
	    n->left->parent = n;
	    return true;
	}
    }
    else {
	if (n->right)
	    return insert(value, n->right);
	else {
	    n->right = new bstNode(value);
	    n->right->parent = n;
	    return true;
	}
 }
}

void bst::clear(){
}



void bst::printInOrder() const{
   printInOrderHelper(root);
   cout<<endl;
}


int main(){
 
   bst t1;
  

   vector<int> v {42, 32, 12, 41, 45, 50};
   for(int elem: v){
      t1.insert(elem);
   }
   cout<<t1.max()<<endl;

   t1.printInOrder();
  
   return 0;
}
