//bst.cpp
//BST ADT
#include <iostream>
using namespace std;

class bst{
   public:
      bst():root(nullptr){}
      ~bst(){
         clear();
      }
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

};
bool bst::insert(int value){
	return true;
}

void bst::printInOrder() const{
}

void bst::clear(){

}


int main(){
   return 0;
}
