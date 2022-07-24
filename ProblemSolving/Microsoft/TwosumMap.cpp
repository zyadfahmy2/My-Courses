#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> list;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            list.insert(pair<int, int>(nums[i], i));
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int value = target - nums[i];
            if (list.find(value)->first == value && list.find(value)->second != i)
            {
                result.pushback()
            }
        }
    }
};