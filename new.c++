#include<bits/stdc++.h>
using namespace std;

int fun(int n, int k, vector<int>& nums) {
    int max_elem = *max_element(nums.begin(), nums.end());
    vector<int> freq(max_elem+1, 0);

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (freq[abs(nums[i] - k)] != 0) {
            freq[abs(nums[i] - k)]--;
            c++;
        }
    }

    return c;
}

int main() {
    int sizes[] = {1000, 5000, 10000};
    int keys[] = {10, 50, 100};
    vector<int> nums;

    for (int i = 0; i < 10000; i++) {
        nums.push_back(rand() % 1000);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int size = sizes[i];
            int key = keys[j];
            vector<int> sub(nums.begin(), nums.begin() + size);

            auto start = chrono::high_resolution_clock::now();
            int count = fun(size, key, sub);
            auto end = chrono::high_resolution_clock::now();

            chrono::duration<double, milli> duration = end - start;
            cout << "Array size: " << size 
                 << ", Time: " << duration.count() << " ms" << endl;
        }
    }

    return 0;
}