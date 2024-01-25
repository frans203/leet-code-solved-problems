#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string inputString) {
        std::unordered_map<char, int> romanToIntTable = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int totalValue = 0;
        for(int i=0;i<inputString.length();i++){
            
            if(romanToIntTable[inputString[i]] < romanToIntTable[inputString[i+1]]){
                totalValue -= romanToIntTable[inputString[i]];
            }else{
                totalValue += romanToIntTable[inputString[i]];
            }
            
            
           
        }
        std::cout << totalValue;
        return totalValue;
    }
};

int main() {
    Solution solution =  Solution();
    string newString = "MCMXCIV";
    solution.romanToInt(newString);
    return 0;
}