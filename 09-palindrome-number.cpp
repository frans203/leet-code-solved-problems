#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string integerString = std::to_string(x);

        for(int i =0;i<=integerString.size()/2;i++){
            if(integerString[i] != integerString[integerString.size() - 1 - i]){
                return false;
            } 
        }
        return true;
    }
};


int main() {
    Solution solution = Solution();
    bool result = solution.isPalindrome(313);
    std::cout << result << std::endl;

    return 0;
}