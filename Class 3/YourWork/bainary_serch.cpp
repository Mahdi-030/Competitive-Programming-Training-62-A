#include <bits/stdc++.h>
using namespace std;

int b_Search(vector<int>& v, int target) {
    int low = 0;
    int high = v.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (v[mid] == target) {
            return mid;
        }
        else if (v[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int index = b_Search(a, target);
    if (index != -1) {
        cout << "Found at index " << index << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
    return 0;
}
