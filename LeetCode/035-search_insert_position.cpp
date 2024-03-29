// Resolvido em 02/02/2024
class Solution { // Binary Search - Time O(lg n) - Space(1)
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0, end = nums.size()-1;

        while(begin <= end){
            int mid = (begin+end)/2;

            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) begin = mid+1;
            else end = mid-1;
        }

        return begin;
    }
};