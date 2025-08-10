class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Map to store the next greater element for each number in nums2
        unordered_map<int, int> nextGreater;
        stack<int> st;
        
        // Process nums2 from right to left using a stack
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int current = nums2[i];
            
            // Pop elements from stack that are smaller than current element
            while (!st.empty() && st.top() <= current) {
                st.pop();
            }
            
            // If stack is empty, no greater element exists
            // Otherwise, top of stack is the next greater element
            nextGreater[current] = st.empty() ? -1 : st.top();
            
            // Push current element to stack
            st.push(current);
        }
        
        // Build result array for nums1
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};