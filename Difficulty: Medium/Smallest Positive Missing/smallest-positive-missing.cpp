class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            // Keep swapping until arr[i] is in correct position or out of range
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // Find the first index where value is not i+1
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i + 1)
                return i + 1;
        }

        // All positions are correct, so smallest missing is n+1
        return n + 1;
    }
};
