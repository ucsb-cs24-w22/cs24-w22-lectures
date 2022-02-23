// testbst.cpp:
// Modified version of lab04 starter code for demo purposes

#include "bst.h"
#include <iostream>
#include <vector>
#include <set>
using namespace std;

template <class Data>
void insertIntoBST(BST<Data>& b, vector<Data>& v)
{
  // insert data to bst1
    for(auto item: v){
        b.insert(item);
    }

}

int main() {
    vector<int> v1{64, 128, 8, 512, 16, 4};
    BST<int> b;
    insertIntoBST(b, v1);
    cout<<"Printing out keys breadth first"<<endl;
    b.printBreadthFirst();
    cout<<endl;
    return 0;
}


