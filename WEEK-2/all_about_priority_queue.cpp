#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   // Declaring a min-heap using priority_queue
   // By default, priority_queue is a max-heap
   // Syntax for min-heap: priority_queue<Type, vector<Type>, greater<Type>>
   priority_queue<int, vector<int>, greater<int>> pq;

   // Inserting elements into the min-heap
   // Time Complexity: O(log n) per insertion
   pq.push(5);
   pq.push(2);
   pq.push(1);
   pq.push(5);
   pq.push(3);
   pq.push(2);

   // Accessing the smallest element (top of min-heap)
   // Time Complexity: O(1)
   // cout << pq.top() << '\n';
   // pq.pop(); // Removes the smallest element, O(log n)
   // cout << pq.top() << '\n';
   // pq.pop();
   // cout << pq.top() << '\n';
   // pq.pop();
   // cout << pq.top() << '\n';

   // Checking size and whether it's empty
   // pq.size() -> O(1)
   // pq.empty() -> O(1)
   // cout << "Size -> " << pq.size() << '\n';
   // cout << pq.empty() << '\n';

   // Printing all elements in increasing order by popping the min-heap
   // Total Time Complexity: O(n log n)
   while (!pq.empty()) {
      int value = pq.top(); // Get the smallest element
      pq.pop();             // Remove it
      cout << value << '\n';
   }

   return 0;
}
