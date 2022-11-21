class MinStack {
public:
    MinStack() {
        topNode = new stackNode;
        topNode->next = nullptr;
        topNode->currentMin = 2147483647;
    }
    
    void push(int val) {
        struct stackNode *node= new stackNode;
        node->val = val;
        if(val<topNode->currentMin){
            node->currentMin = val;
        }
        else{
            node->currentMin = topNode->currentMin;
        }
        node->next = topNode;
        topNode = node;
    }
    
    void pop() {
        struct stackNode *tmp = topNode;
        topNode = topNode->next;
        delete (tmp);
    }
    
    int top() {
        return topNode->val;
    }
    
    int getMin() {
        return topNode->currentMin;
    }
private:
    struct stackNode{
        int val;
        int currentMin;
        struct stackNode *next;
    };
    struct stackNode *topNode=nullptr;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */