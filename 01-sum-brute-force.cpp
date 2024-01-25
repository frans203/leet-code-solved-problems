#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr, int size){
    cout << "[";
    for(auto i=arr.begin(); i<arr.end(); i++)
	{
		cout<<" "<<*i;
	}

    cout << " ]" << endl;
}


class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int> output {};
        for(auto i=0;i<nums.size();i++){
            for(auto j=0;j<nums.size();j++){
                    if(nums[i] + nums[j] == target && i != j){
                        cout << i << " + " << j << endl;
                        output.push_back(i);
                        output.push_back(j);
                        return output;
                    }
            }
        }

        return output;
    }
};

int main(){
    Solution solution = Solution();
    vector<int> nums {3,3};
    vector<int> solutionArr = solution.twoSum(nums, 6);
    printArray(solutionArr, solutionArr.size());
    return 0;
}