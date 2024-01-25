#include <iostream>
#include <vector>
#include <hashtable.h>
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
      unordered_map<int, int> hashtable;
      int size = nums.size();
    //   ONE PASS HASHTABLE 
    //   for(int i=0;i<size; i++){
    //     int complement = target - nums[i];
    //     if(hashtable.count(complement) && hashtable[complement] != i){
    //         return {hashtable[complement], i};
    //     }
    //     hashtable[nums[i]] = i;
    //   }

    //TWO PASS HASHTABLE
      for(int i=0;i<size; i++){
        hashtable[nums[i]] = i;
      }
      for(int i=0;i<size;i++){
        int complement = target - nums[i]; //test with opposite
        if(hashtable.count(complement) && hashtable[complement] != i) {
            return {hashtable[complement], i}  ;
        }
      }

      return {};
    }
};

int main(){
    Solution solution = Solution();
    vector<int> nums {3,3};
    vector<int> solutionArr = solution.twoSum(nums, 6);
    printArray(solutionArr, solutionArr.size());
    return 0;
}