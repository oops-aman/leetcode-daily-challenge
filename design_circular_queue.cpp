class MyCircularQueue {
public:
    vector<int> val;
    int front = 0, rear = 0;
    MyCircularQueue(int k): val(k) {}
    
    bool enQueue(int value) {
        if(isFull()) return false;
        val[(front + rear++) % val.size()] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front + 1) % val.size();
        --rear;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return val[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return val[(front + rear - 1) % val.size()];
    }
    
    bool isEmpty() {
        return !rear;
    }
    
    bool isFull() {
        return rear == val.size();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */