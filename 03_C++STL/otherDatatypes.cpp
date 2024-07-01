#include<bits/stdc++.h>
using namespace std;

void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2, 4}

    ls.push_front(5); //{5, 2, 4}
    ls.emplace_front(6); //{6, 5, 2, 4}

    //rest functions are same as vectors
}

void explainDeque() {
    deque<int> dq;
    dq.push_back(2); //{2}
    dq.emplace_back(4); //{2, 4}

    dq.push_front(5); //{5, 2, 4}
    dq.emplace_front(6); //{6, 5, 2, 4}

    dq.pop_back(); //{6, 5, 2}
    dq.pop_front(); //{5, 2}

    dq.back(); //prints last value of dq.
    dq.front(); //prints first value of dq.
}

void explainStack() {
    //Works on LIFO(Last in, First out)
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    //indexing is not there in Stacks.

    cout << st.top(); //prints the top value i.e "5"

    st.pop(); //removes the last input/top value, {4, 3, 2, 1}
    cout << st.top(); //prints the top value i.e "4"
    cout << st.size(); // 4

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    //FIFO(First in, First out)
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // {1, 2, 9}
    cout << q.back(); // prints 9

    cout << q.front(); // prints 1

    q.pop(); // deletes the first in value, q become {2, 9}
    cout << q.front(); // now it prints 2 as q is {2, 9}
}

void explainPQ() {
    // Gives priority to the largest value, largest value goes to the front
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << pq.top(); // print 10
    pq.pop(); // removes the top most element, {8, 5, 2}

    //Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8 ,10}

    cout << pq.top(); // print 2
}