class Solution {
public:

    // function for Swaping 
    void swaping(unordered_map<char, int> &map, char Insert, char Remove){
        map[Insert]++;
        map[Remove]--;

        // if frequency of that element is 0 than remove that element from the map
        if(map[Remove] == 0){
            map.erase(Remove);
        }
    }
    bool isItPossible(string word1, string word2) {
        // first store all the char of both string into map with frequencys
        unordered_map<char, int> map1,map2;

        for(auto x : word1){
            map1[x]++;
        }
        for(auto x : word2){
            map2[x]++;
        }

        // run two for loop from a to z
        for(char c1 = 'a'; c1 <= 'z'; c1++){
            for(char c2 = 'a'; c2 <= 'z'; c2++){
                // if c1 or c2 not present in the word1 or word2
                if(map1.count(c1) == 0 || map2.count(c2) == 0 ){
                    continue;
                }

                // swaping the element of word1 and word2
                swaping(map1, c2, c1);
                swaping(map2, c1, c2);

                // check whether size of both map is same or not 
                if(map1.size() == map2.size()){
                    return true;
                }
                // if size of both map is not same than return back to original map
                swaping(map1, c1, c2);
                swaping(map2, c2, c1);
            }
        }
        return false;
    }
};
