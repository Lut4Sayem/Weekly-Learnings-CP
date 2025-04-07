#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); // Fast input/output
   cin.tie(nullptr);

   // ✅ 2D Vector Input (Vector of Vectors of Integers)
   int n;
   cin >> n;

   vector<vector<int>> v; // Declaring 2D vector

   for (int i = 0; i < n; i++) {
      int m;
      cin >> m; // Size of inner vector
      vector<int> a;

      for (int j = 0; j < m; j++) {
         int x;
         cin >> x;
         a.push_back(x); // O(1) amortized
      }

      v.push_back(a); // O(1) amortized
   }

   // ✅ Print 2D Vector
   cout << "2D Vector (vector<vector<int>>):\n";
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < v[i].size(); j++) {
         cout << v[i][j] << " ";
      }
      cout << '\n';
   }

   // ✅ Vector of Strings Input
   int m;
   cin >> m;
   vector<string> vs;

   for (int i = 1; i <= m; i++) {
      string s;
      cin >> s;
      vs.push_back(s); // O(1) amortized
   }

   // ✅ Print Characters in Each String (Nested Loop)
   cout << "\nVector of Strings (character-wise output):\n";
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < vs[i].size(); j++) {
         cout << vs[i][j] << " "; // O(1)
      }
      cout << '\n';
   }

   return 0;
}
