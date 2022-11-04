class MyQueue {

public:
    stack<int>s;
    stack<int>s2;
	MyQueue() {

	}

	void push(int x) {
		if (s.empty()) {
			s.push(x);
		    return;
		}
       
		int s2=s.top();
		s.pop();
		push(x);
		s.push(s2);
	}

	int pop() {
        int peek=s.top();
         s.pop();
		return peek;
	}

	int peek() {
		int peek=s.top();
		return peek;
	}

	bool empty() {
		return s.empty();
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