// Build
void buildTree(int arr[], int st[], int idx, int l, int r) {
    if (l == r) {
        st[idx] = arr[l];
        return;
    }
    int mid = (l + r) / 2;
    buildTree(arr, st, 2 * idx + 1, l, mid);
    buildTree(arr, st, 2 * idx + 2, mid + 1, r);
    st[idx] = min(st[2 * idx + 1], st[2 * idx + 2]);
}

// Query helper
int query(int st[], int idx, int l, int r, int ql, int qr) {
    if (qr < l || ql > r) return INT_MAX;      // No overlap
    if (ql <= l && r <= qr) return st[idx];    // Complete overlap
    int mid = (l + r) / 2;
    int leftMin = query(st, 2 * idx + 1, l, mid, ql, qr);
    int rightMin = query(st, 2 * idx + 2, mid + 1, r, ql, qr);
    return min(leftMin, rightMin);
}

/* The function which builds the segment tree */
int* constructST(int arr[], int n) {
    int* st = new int[4 * n];  // segment tree array
    buildTree(arr, st, 0, 0, n - 1);
    return st;
}

/* The function returns the min element in range [a, b] */
int RMQ(int st[], int n, int a, int b) {
    return query(st, 0, 0, n - 1, a, b);
}
