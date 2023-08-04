class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        // store string into the character array
        int array[26] = {0};
        int number;
        for(int i = 0; i < str.length(); i++){
            char ch = str[i];
            number = ch - 'a';
            array[number]++;
        }
        // find maximum element in char array
        int maxi = -1;
        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(maxi < array[i]){
                ans = i;
                maxi = array[i];
            }
        }
        char maxOccur = 'a' + ans;
        return maxOccur;
    }

};
