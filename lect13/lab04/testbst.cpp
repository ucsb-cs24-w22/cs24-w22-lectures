// testbst.cpp:
// Modified version of lab04 starter code for demo purposes

#include "bst.h"
#include <iostream>
#include <vector>
using namespace std;

void insertIntoBST(BST& b, vector<int>& v)
{
  // insert data to bst1
    for(auto item: v){
        b.insert(item);
    }

}

int main() {
    vector<int> v1{64, 128, 8, 512, 16, 4};
    BST bst1;  
    insertIntoBST(bst1, v1);

    cout << "  pre-order: ";
    bst1.printPreOrder();
    cout << endl;

  
    return 0;
}


