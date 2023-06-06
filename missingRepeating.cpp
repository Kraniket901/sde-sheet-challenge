//lc missing
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s1 = 0;
        for(int i=0; i<n; i++){
            s1+=nums[i];
        }
        int s2 = n*(n+1)/2;
        return s2-s1;
    }
};

//cn missing, repeating
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	pair<int,int>p;
	vector<int>hash(n+1, 0);
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	int missing = -1, repeat = -1;
	for(int i=1; i<=n; i++){
		if(hash[i]==2) repeat = i;
		if(hash[i]==0) missing = i;
		if(repeat!=-1 && missing!=-1) break;
	}
	p = {missing, repeat};
	return p;
}

//gfg both
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int num) {
        // code here
        long long n = num;
        long long s1 = 0, s3=0;
        for(int i=0; i<n; i++){
            s1+=arr[i];
            s3+=(long long)arr[i]*(long long)arr[i];
        }
        long long s2=n*(n+1)/2;
        long long s4=(long long)( n * (n+1) * ((2*n)+1) )/6;
        long long a = s1-s2;
        long long b = s3-s4;
        b=b/a;
        long long m=(a+b)/2;
        long long r=(b-a)/2;
        vector<int>v;
        v.push_back(m);
        v.push_back(r);
        return v;
    }
};