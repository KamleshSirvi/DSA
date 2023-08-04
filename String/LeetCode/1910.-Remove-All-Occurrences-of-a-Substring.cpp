class Solution {
public:
    string removeOccurrences(string s, string part) {
        // s.find(part) == finds the first occurence of that substring 
        while(s.length() != 0 && s.find(part) < s.length()){
            // s.erase(beginning index, how many number you want to erase)
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
