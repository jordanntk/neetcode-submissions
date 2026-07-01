class Solution {
public:
    bool isAnagram(string s, string t) {
        // START build dict
        std::unordered_map<char,int> sDict;
        std::unordered_map<char,int> tDict;

        for (char letter : s) { 
            sDict[letter]++;
        }
        
        for (char letter : t) { 
            tDict[letter]++;
        }
        // END build dict


        // DEBUG: this is to print a dict
        // for (const auto& [key, value] : sDict) {
        //     std::cout << key << ", " << value << "\n";
        // }

        // for (const auto& [key, value] : tDict) {
        //     std::cout << key << ", " << value << "\n";
        // }
        return (sDict == tDict);
    }
};
