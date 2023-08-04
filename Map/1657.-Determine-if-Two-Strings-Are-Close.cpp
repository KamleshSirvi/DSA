class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){
            return false;
        }

        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        vector<int> v1;
        vector<int> v2;

        for(int i = 0; i < word1.size(); i++){
            map1[word1[i]]++;
            map2[word2[i]]++;
        }
        int x = 0;
        int y = 0;
        for(auto a : map1){
            v1.push_back(a.second);
            x++;
        }

        for(auto a : map2){
            v2.push_back(a.second);
            y++;
        }

        for(auto a : map1){
            if(map2.find(a.first) == map2.end()){
                return false;
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for(int i = 0; i < v1.size(); i++){
            cout << "arr1[" << i << "]" << v1[i] << endl;
            cout << "arr2[" << i << "]" << v2[i] << endl;
            if(v1[i] != v2[i]){
                return false;
            }
        }

        return true;
    }
};
