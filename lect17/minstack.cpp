// minstack.cpp:
class minstack{
    public:
    void pop(){
        s.pop();
    }
    int top() const{
        return s.top().first;
    }
    int min() const{
        return s.top().second;
    }
    void push(int item){
        int min_elem;
        if(s.empty()) min_elem = item;
        else{
            min_elem = item<=min()? item: min(); 
        }
        s.push(make_pair(item, min_elem));

    }

    private:
    stack<pair<int, int>> s;
};
