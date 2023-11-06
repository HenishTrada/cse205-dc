class MyCircularQueue {
    int front;
    int size;
    int capacity;
    vector<int> q;
public:
    MyCircularQueue(int k) {
        capacity =k;
        q.resize(k);
        front =size =0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        int idx = (front + size)% capacity;
        q[idx] = value;
        ++size;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front +1)% capacity;
        --size;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return q[(front+ size -1)%capacity];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

