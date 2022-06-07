class Solution {
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int in1 = n+m-1, in2 = 0;
        for (int i = m-1; i >=0; i--)
            swap(nums1[i], nums1[in1--]);
        in1=n;
        for (int i = 0; i < n + m; i++)
            if (in1 == n + m)
                nums1[i] = nums2[in2], in2++;
            else if (in2 == n)
                nums1[i] = nums1[in1], in1++;
            else if (nums1[in1] <= nums2[in2])
                nums1[i] = nums1[in1], in1++;
            else nums1[i] = nums2[in2], in2++;

    }
};