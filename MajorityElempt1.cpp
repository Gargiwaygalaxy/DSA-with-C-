class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        Boyer-Moore Voting Algorithm follows a simple thought that if some
        element in the array is present in majority (i.e more than n/2 times)
        then even if other elements try to balance it's count, it will always remain
        as the candidate due to higher freq..
        */
        int count =0; 
        int candidate; 
        for(int num: nums){
            if(count ==0){
                candidate = num; 
            }
            count += (num == candidate) ? 1 : -1; 
        }

        return candidate; 
    }
};
