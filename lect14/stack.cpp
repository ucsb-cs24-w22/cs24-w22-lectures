// stack.cpp
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isbalanced(string expr){
    stack<char> s;
    for(auto e: expr){
        if(e == '(')
            s.push('(');
        else{ // must be a ")"
            if (s.empty()) return false;
            s.pop(); // popping out of an empty stack will result in a segfault
        }
    }
    if (s.empty()) return true;
    return false;
}


int main(int argc, char const *argv[])
{
    //Lab 6
    //"((7 * 4) + 25)" //Fully paranthesized expression
    vector<string> expressions {"(())", "(()()())", "((()()))", "((())", ")("};
    for(string e: expressions){
        cout<<"Is "<<e<<" balanced? "<<std::boolalpha<<isbalanced(e)<<endl;
    }
    return 0;
}
