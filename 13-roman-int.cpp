#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string inputString) {
        std::unordered_map<char, int> romanToIntTable = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        std::unordered_map<std::string, int> specialRomantToIntTable = {{"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400}, {"CM", 900}};
    

        int stringSize = inputString.length();
        int totalValue = 0;
        for(int i=0;i<stringSize;i++){
            char element = inputString.at(i);
            int currentValue = romanToIntTable[element];
            if(i < stringSize - 1){
                std::string combinedStrings;
                combinedStrings += inputString.at(i);
                combinedStrings += inputString.at(i+1);
                std::cout << "char: " << inputString.at(i) << "\n";
                if(specialRomantToIntTable[combinedStrings]){
                    totalValue += specialRomantToIntTable[combinedStrings];
                    i++;
                }else {
                    totalValue += currentValue;
                }
            }else{
              totalValue += currentValue;
            }
            
           
        }
        return totalValue;
    }
};

int main() {
    Solution solution =  Solution();
    string newString = "III";
    solution.romanToInt(newString);
    return 0;
}