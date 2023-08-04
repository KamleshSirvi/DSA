class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = 0;
        int b = 0;
        int m = nums1.size();
        int n = nums2.size();
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
        double median;
        if(count % 2 == 0){
            int mid = count/2;
            cout << "temp[mid] is : " << temp[mid];
            median = (double)(temp[mid-1] + temp[mid])/2;
            return median;
        }else{
            int mid = count / 2;
            cout << "temp[mid] is : " << temp[mid];
            median = (double)(temp[mid]);
            return median;
        }
        return 0;
    }
};
