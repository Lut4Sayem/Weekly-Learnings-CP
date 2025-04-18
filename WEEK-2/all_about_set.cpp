#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin >> n;

   // Creating a set which stores only unique elements in sorted order
   set<int> s;

   for (int i = 1; i <= n; i++) {
      int x;
      cin >> x;

      // Inserting an element
      // Time Complexity: O(log n)
      s.insert(x);
   }

   // Example of iterating over a set using iterator
   // auto it = s.begin(); // Points to the first element (smallest)
   // it++; it++; it++; it--; // Move around with ++ or --
   // cout << *it << '\n'; // Dereference to get the value

   // Printing all elements in sorted order
   // Time Complexity: O(n)
   for (auto value : s) {
      cout << value << " ";
   }
   cout << '\n';

   // Searching for an element in the set
   // Time Complexity: O(log n)
   // auto it = s.find(25); // Try to find 25 in the set
   // if (it != s.end()) {
   //    cout << "Found" << '\n';
   // } else {
   //    cout << "Not Found" << '\n';
   // }

   // Erasing an element (by value)
   // Time Complexity: O(log n)
   // s.erase(6);

   // Printing the set after erase
   // for (auto value : s) {
   //    cout << value << " ";
   // }
   // cout << '\n';

   // Count returns 1 if element is found, 0 if not (unique values only)
   // Time Complexity: O(log n)
   // cout << s.count(4) << '\n';

   // Finding the first element >= N
   // Time Complexity: O(log n)
   // int N;
   // cin >> N;
   // auto it = s.lower_bound(N);
   // if (it == s.end()) {
   //    cout << "END" << '\n';
   // } else {
   //    cout << *it << '\n';
   // }

   // Finding the first element > N
   // Time Complexity: O(log n)
   int N;
   cin >> N;
   auto it = s.upper_bound(N);

   if (it == s.end()) {
      cout << "END" << '\n';
   } else {
      cout << *it << '\n';
   }

   return 0;
}
