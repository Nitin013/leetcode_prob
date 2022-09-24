   #include<iostream>
   #include<vector>
   using namespace std;
   #include<algorithm>
   void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
    int main(){
        cout<<"enter the size of permutation array";
        int n;
        cin>>n;
        vector<int> prtsn_array;
        cout<<"enter the permutation";
        for(int i=0;i<n;i++){
            int n1;
            cin>>n1;
            prtsn_array.push_back(n1);
        }
        nextPermutation(prtsn_array);
        cout<<"####### Next permutation is ######"<<endl;
        for(int i=0;i<n;i++){
            cout<<prtsn_array[i]<<" ";
        }
        return 0;
    }