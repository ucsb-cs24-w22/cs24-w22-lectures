//stl.cpp
//Pa02 is released, due Friday of deadweek
//Goal - Learn how to use and further explore theSTL: 
//    vector, set, list, ... 
// - Choosing between data structures
// - Solve problem related to a movie dataset

// set: balanced BST
// C++ Iterators!

#include<iostream>
#include<set>
#include<vector>
using namespace std;

void printBST(set<int>& s){
    cout<<"Printing the keys of the BST:"<<endl;
    // in order 
    // s.InOrder()
    // What is the mechanics behind the rang-based for loop?
    // Iterators!!
    for(auto item: s){
        cout<<item<<" ";

    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    set<int> s; //Empty BST
    vector<int> nums {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for(auto item: nums){
        s.insert(item);
    }
    set<int>::iterator it; // it is a iterator 
    // Balanced BST !! Height= O(log n)
    printBST(s);
    //What is the return type of find? Iterator!
    it = s.find(40);
    
    cout<<"Found "<< *it<<endl; //40
    //it++;
    cout<<"Found "<< *it<<endl; //40

    s.erase(10);
    printBST(s);
    it = s.find(45);
    //cout<<"Searching for 45: "<<*it<<endl;
    if(it == s.end()){ //check to see if key was not found
        cout<<"45 is not in the BST"<<endl;
    }else{
        cout<<"45 is in the BST"<<endl;
    }
    //it = s.end();

    it = s.find(40);
    s.erase(it);
    cout<<"Print the value of deleted node: " <<*it<<endl;;

    s.erase(11);
    printBST(s);
    // smallest key value greater than or equal to 55
    it= s.lower_bound(55); //O(logn)
    cout<<"Searching for 55 using lower_bound: "<<*it<<endl;
    set<int>::iterator en;
    //upper bound key value greater than the input value
    en= s.upper_bound(90); //O(log n)
    cout<<"Searching for 90 using upper_bound: "<<*en<<endl;
    cout<<"Deleting [55, 100)"<<endl;
    s.erase(it, en);

    printBST(s);









    return 0;
}
