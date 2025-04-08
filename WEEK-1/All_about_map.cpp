#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false); // Fast IO for competitive programming
   cin.tie(nullptr); // Untie cin from cout for faster input

   // Declare a map where keys and values are both integers
   // It automatically sorts keys in ascending order
   map<int, int> mp;

   // Inserting key-value pairs into the map
   mp[10] = 20;   // Adds key 10 with value 20
   mp[2] = 12;    // Adds key 2 with value 12
   mp[10] = 15;   // Overwrites value at key 10 (20 -> 15)
   mp[8] = 22;
   mp[17] = 7;
   mp[5] = 9;

   // Accessing values using keys
   cout << mp[10] << '\n';  // Output: 15
   cout << mp[2] << '\n';   // Output: 12

   // Traversing map using range-based for loop
   // (Here we are just iterating but not printing)
   for (auto it : mp) {
      int key = it.first, value = it.second;
      // key and value variables can be used here if needed
   }
   cout << '\n';

   // ---------------------------------------------
   // Additional map operations (commented out below)
   // ---------------------------------------------

   // Find a key in the map
   // auto it = mp.find(8);
   // if (it == mp.end()) {
   //    cout << "Key not found" << '\n';
   // } else {
   //    cout << it->first << " " << it->second << '\n';
   // }

   // Accessing a non-existing key adds it with value 0
   // cout << mp[25] << '\n';  // Outputs 0 and inserts key 25
   // cout << mp[9] << '\n';   // Outputs 0 and inserts key 9

   // Erase element with specific key
   // mp.erase(8);  // Removes key 8 from map if exists

   // Erase using iterator
   // auto it = mp.find(10);
   // if (it != mp.end()) {
   //    mp.erase(it);  // Removes key 10
   // }

   // Accessing second element in sorted map
   // auto it = mp.begin();
   // it++;
   // cout << it->first << " " << it->second << '\n';

   // Insert another element into the map
   mp[6] = 49;

   // Print all key-value pairs in map
   for (auto it : mp) {
      int key = it.first, value = it.second;
      cout << key << " -> " << value << '\n';
   }

   // Use upper_bound to find the first key greater than 5
   auto it = mp.upper_bound(5);
   // It returns an iterator pointing to first element with key > 5
   // If no such element, it == mp.end()
   if (it != mp.end()) {
      cout << it->first << " " << it->second;
   } else {
      cout << "No key found greater than 5\n";
   }

   return 0;
}
