class MyQueue {
public:
    //attributes
        vector<int> stackarr;
        vector<int> temp;

    MyQueue() {
        //the two stacks used to make a queue
        vector<int> stackarr = {};
        vector<int> temp = {};
    }
    
    //member functions
    void push(int x) {
        //simple push back to add at the end 
        stackarr.push_back(x);
    }
    
    int pop() {
        //we would need to pop everything from the stack and push into the temp
        while(stackarr.size() > 0){
            //taking the last element
            temp.push_back(stackarr.back());

            //deleting it from the stack
            stackarr.pop_back();
        }

        //saving the first in value
        int val = temp.back();
        
        //deleting the value from the stack
        temp.pop_back();

        //now putting it all back in the stack
        while(temp.size() > 0){
            //taking the last element
            stackarr.push_back(temp.back());

            //deleting it from the stack
            temp.pop_back();
        }

        //returning the value
        return val;
    }
    
    int peek() {
        //returns the front most value
        return stackarr.front();
    }
    
    bool empty() {
        //returns if the stack is empty or not
        if(stackarr.size() == 0){
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */