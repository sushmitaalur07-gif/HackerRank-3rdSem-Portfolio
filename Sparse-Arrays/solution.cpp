#include <bits/stdc++.h>
using namespace std;

// Finds the frequency of each query string
vector<int> matchingStrings(vector<string> stringList,
                            vector<string> queries) {
    unordered_map<string, int> frequency;

    // Store frequency of each string
    for (string str : stringList) {
        frequency[str]++;
    }

    vector<int> result;

    // Find frequency for each query
    for (string query : queries) {
        result.push_back(frequency[query]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> stringList(n);

    for (int i = 0; i < n; i++) {
        cin >> stringList[i];
    }

    int q;
    cin >> q;

    vector<string> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }

    vector<int> result = matchingStrings(stringList, queries);

    for (int value : result) {
        cout << value << endl;
    }

    return 0;
}