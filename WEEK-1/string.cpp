#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); // Fast I/O
   cin.tie(nullptr);

   // ✅ Basic string input and output
   int n;
   cin >> n;
   string s;
   cin >> s; // Only takes one word (no spaces)
   cout << "Initial string: " << s << '\n';

   // ✅ Adding characters one by one
   for (int i = 1; i <= n; i++) {
      char c;
      cin >> c;
      s.push_back(c); // O(1) amortized
   }

   // ✅ Removing last character
   s.pop_back(); // O(1)

   // ✅ Accessing front and back
   cout << "Front: " << s.front() << ", Back: " << s.back() << '\n'; // O(1)

   // ✅ Clear the string
   s.clear(); // O(n)

   // ✅ Check if string is empty
   cout << "Empty? " << (s.empty() ? "Yes" : "No") << '\n'; // O(1)

   // ✅ Substring usage
   string t;
   cin >> t;
   cout << "Substring t.substr(1, 3): " << t.substr(1, 3) << '\n'; // O(3)
   cout << "Substring t.substr(2): " << t.substr(2) << '\n';       // O(n-2)

   return 0;
}
