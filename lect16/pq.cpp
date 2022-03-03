// pq.cpp


#include<iostream>
#include<set>
#include<vector>
using namespace std;
#include <queue>

//std::greater<int> class that implements a function operator (functor)
template<class T>
class myFunctor{
    public:
        bool operator()(T a, T b){
            return a>b;
        }
};

int main(int argc, char const *argv[])
{
    
    // priority_queue: "heap" top(), pop(), push(), empty(), size()
    //priority_queue<int> pq; //max heap
    //priority_queue<int, vector<int>, std::less<int>> pq;  //"max-heap"
    priority_queue<int, vector<int>, myFunctor<int>> pq; //min-heap
    myFunctor<int> comp;
    cout<<"Comparing 10 and 20: "<<std::boolalpha<<comp(10, 20);
    //For PQ, if comp(a, b) is false, 
    // then kay a has higher priority than key  b 
    cout<<endl;
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
