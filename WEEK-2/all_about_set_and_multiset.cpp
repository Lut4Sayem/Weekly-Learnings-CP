#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> ms;

    // Inserting elements into multiset
    // Time Complexity: O(log n) per insertion
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }

    // Printing the multiset
    // Elements are stored in sorted order, duplicates allowed
    for (auto v : ms) {
        cout << v << " ";
    }
    cout << '\n';

    // Finding how many times a particular element appears
    // Time Complexity: O(log n)
    cout << "Count of 9: " << ms.count(9) << '\n';

    // Erasing all occurrences of an element
    // Time Complexity: O(log n + k), where k = number of elements erased
    ms.erase(6);  // all 6s will be removed
    ms.erase(9);  // all 9s will be removed

    cout << "After erasing 6 and 9:\n";
    for (auto v : ms) {
        cout << v << " ";
    }
    cout << '\n';

    // Erasing a single instance of a value (if multiple exist)
    auto it = ms.find(4);  // Time Complexity: O(log n)
    if (it != ms.end()) {
        ms.erase(it);  // Erases one occurrence
    }

    cout << "After erasing one 4:\n";
    for (auto v : ms) {
        cout << v << " ";
    }
    cout << '\n';

    // Searching using lower_bound
    int query;
    cin >> query;
    auto lb = ms.lower_bound(query); // Time Complexity: O(log n)
    if (lb == ms.end()) {
        cout << "Lower bound: END\n";
    } else {
        cout << "Lower bound: " << *lb << '\n';
    }

    // Searching using upper_bound
    auto ub = ms.upper_bound(query); // Time Complexity: O(log n)
    if (ub == ms.end()) {
        cout << "Upper bound: END\n";
    } else {
        cout << "Upper bound: " << *ub << '\n';
    }

    return 0;
}
