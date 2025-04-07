#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); // Fast input/output
   cin.tie(nullptr);            // Untie cin from cout for more speed

   int n;
   cin >> n;

   // Create a deque of size 'n'
   // Time Complexity: O(n)
   deque<int> dq(n);

   // Input elements using index assignment (direct access)
   // Time Complexity: O(n)
   for (int i = 0; i < n; i++) {
      cin >> dq[i];
   }

   // Print deque elements using range-based for loop
   // Time Complexity: O(n)
   for (auto value : dq) {
      cout << value << " ";
   }
   cout << '\n';

   // Insert element at the front of deque
   // Time Complexity: O(1) amortized
   dq.push_front(8);

   // Insert another element at the front
   // Time Complexity: O(1) amortized
   dq.push_front(2);

   // Remove element from front
   // Time Complexity: O(1) amortized
   dq.pop_front();

   // Remove element from back
   // Time Complexity: O(1) amortized
   dq.pop_back();

   // Print deque after modifications
   // Time Complexity: O(n)
   for (auto value : dq) {
      cout << value << " ";
   }
   cout << '\n';

   // Print the first and last elements
   // Time Complexity: O(1)
   cout << dq.front() << " " << dq.back() << '\n';

   /*
      Summary of deque operations:

      ✅ push_back(x)     -> Insert at back (O(1) amortized)
      ✅ push_front(x)    -> Insert at front (O(1) amortized)
      ✅ pop_back()       -> Remove from back (O(1) amortized)
      ✅ pop_front()      -> Remove from front (O(1) amortized)
      ✅ front()          -> Get front element (O(1))
      ✅ back()           -> Get last element (O(1))
      ✅ size()           -> Number of elements (O(1))
      ✅ clear()          -> Remove all elements (O(n))
      ✅ empty()          -> Check if deque is empty (O(1))
      ✅ begin(), end()   -> Iterators for looping
      ✅ sort(...)        -> Can be sorted using STL if needed (O(n log n))

      ❗ Note: Unlike vector, deque allows fast insertions/removals at both ends.
   */

   return 0;
}
