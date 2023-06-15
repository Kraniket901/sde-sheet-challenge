int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1;
  int high = m;
  while(low<=high){
    int mid = low + (high-low)/2;
    double p = pow(mid, n);
    if(p==m) return mid;
    else if(p>m){
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  return -1;
}