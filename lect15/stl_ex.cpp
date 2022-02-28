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
#include <queue>

int main(int argc, char const *argv[])
{
    /* code */
    //Data structures that don't provide an iterator type
    // stack: top, pop, push, empty O(1)
    // queue: front, push, pop O(1)
    // deque: pronounced "deck"- double ended queue O(1)
    // priority_queue: "heap" top(), pop(), push(), empty(), size()
    priority_queue<int> pq;  //"heap"
    vector<int> nums {100, 20, 40, 60, 55};
    for(auto item: nums){
        pq.push(item);
    }

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }




    return 0;
}
