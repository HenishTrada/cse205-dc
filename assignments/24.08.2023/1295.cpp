class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            int n = nums[i];
                int no = 0;
            while(n !=0){
                no++;
                n = n/10;
            }
            if(no%2 ==0 ){
            count++;

            }
        }
        return count;
    }
};