//better
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	vector<int>v;
	for(int i=0; i<n; i++){
		v.push_back(arr[i]);
	}
	map<int,int>mpp;
	for(int i = 0; i<v.size(); i++){
		mpp[v[i]]++;
	}
	for(auto it: mpp){
		if(it.second>(v.size()/2)){
			return it.first;
		}
	}
	return -1;
}

//best (Moore's Voting)

//when majority element always exists
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int count = 0;
        for(int i=0; i< nums.size(); i++){
            if(count==0){
                count++;
                el = nums[i];
            }else if(el == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return el;
    }
};

// when majority element may or may not exist

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int el;
	int c=0;
	for(int i=0; i<n; i++){
		if(c==0){
			c=1;
			el = arr[i];
		}else{
			if(arr[i]==el) c++;
			else c--;
		}
	}
	int res = 0;
	for(int i=0; i<n; i++){
		if(arr[i]==el){
			res++;
		}
	}
	if(res>n/2) return el;
	else return -1;
}