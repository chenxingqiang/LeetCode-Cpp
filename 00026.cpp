#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 空数组的判断
        if (nums.empty()) return 0; 
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < (nums.size() - 1); fastIndex++){
            // 发现和后一个不相同
            if(nums[fastIndex] != nums[fastIndex + 1]) { 

                //slowIndex = 0 的数据是不重复，直接 ++slowIndex
                nums[++slowIndex] = nums[fastIndex + 1]; 
            }
        }
        //slowIndex是从0开始的，返回 slowIndex + 1
        return slowIndex + 1; 
    }
};