//gfg
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
    int left = n - 1;
    int right = 0;
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    } 
};

//lc
class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
	int i = 0, j = 0;
	vector<int>res;
	while(i<n && j<m){
		if(nums1[i]<nums2[j]){
			res.push_back(nums1[i++]);
		}else{
			res.push_back(nums2[j++]);
		}
	}
	while(i<n){
		res.push_back(nums1[i++]);
	}
	while(j<m){
		res.push_back(nums2[j++]);
	}
	nums1 = res;
    }
};