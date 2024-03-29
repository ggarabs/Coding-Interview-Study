// Resolvido em 11/02/2024
class Solution { // Binary Search - Time O(lg N) - Space O(1)
public:
    int search(vector<int>& nums, int target) {
        int beg = 0, end = nums.size()-1;

        while(beg <= end){
            int mid = (beg+end)/2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) end = mid-1;
            else beg = mid+1;
        }

        return -1;
    }
};