#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;
    queue<int> q;

    pq.push(30);
    pq.push(40); // front
    pq.push(25);
    pq.push(10);
    pq.push(15);
    ///////////
    q.push(30); // front
    q.push(40);
    q.push(25);
    q.push(10);
    q.push(15);
    ///////////

    cout << q.front() << endl;
    cout << pq.top() << endl;

    return 0;
}