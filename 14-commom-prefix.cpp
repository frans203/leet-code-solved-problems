#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strings) {
        std::string commomPrefix = "";
        std::sort(strings.begin(), strings.end());
        std::string first = strings[0];
        std::string last = strings[strings.size()- 1];
        for(int i=0;i<std::min(first.size(), last.size()); i++){
            if(last[i] != first[i]){
                return commomPrefix;
            }
            commomPrefix += first[i];
        }

        return commomPrefix;
    }
};

int main () {
    std::vector<std::string> strings = {"lexi", "lexton"};
    Solution sol = Solution();
    std::cout << sol.longestCommonPrefix(strings) << std::endl;
    
    return 0;
}