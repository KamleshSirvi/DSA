class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = 0;
        int b = 0;
        int count = 0;
        int temp[m+n];
        
        while(a < m && b < n){
            if(nums1[a] < nums2[b]){
                temp[count] = nums1[a];
                a++;
                count++;
            }else{
                temp[count] = nums2[b];
                b++;
                count++;
            }
        }
        while(a < m){
            temp[count] = nums1[a];
            a++;
            count++;
        }
        while(b < n){
            temp[count] = nums2[b];
            b++;
            count++;
        }
        for(int i = 0; i < m+n; i++){
            nums1[i] = temp[i];
        }
    }
};
