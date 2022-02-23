// testbst.cpp:
// Modified version of lab04 starter code for demo purposes

#include "bst.h"
#include <iostream>
#include <vector>
#include <set>
using namespace std;

template <class Data>
void insertIntoBST(set<Data>& b, vector<Data>& v)
{
  // insert data to bst1
    for(auto item: v){
        b.insert(item);
    }

}

template <class Item>
void printElements(set<Item>& s){ // s is a reference 
    for(auto item: s){
        cout<<item<<" ";
    }
    cout<<endl;


}

int main() {
    vector<int> v1{64, 128, 8, 512, 16, 4};
    // Want BST to work with any type of key similar to set
    set<int> s; 
    insertIntoBST(s, v1);
    // print the elments of set
    printElements(s);
    //cout << "  pre-order: ";
    //bst1.printPreOrder();
    cout << endl;

    vector<string> v2{"Orange", "Pear", "Banana"};
    // Want BST to work with any type of key similar to set
    set<string> s2; 
    insertIntoBST(s2, v2);
    // print the elments of set
    printElements(s2);
    //cout << "  pre-order: ";
    //bst1.printPreOrder();
    cout << endl;


  
    return 0;
}


