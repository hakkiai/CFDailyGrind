#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int maxAscendingSum(vector<int>& nums){
if(nums.empty()){
    return 0;
}

int maxsum = 0;
int sum = nums[0];

for(int i=1; i<nums.size();i++){
    if(nums[i] > nums[i-1]){
        sum = sum + nums[i];
    }else{
        maxsum = max(maxsum, sum);
        sum = nums[i];
    }
}
maxsum = max(maxsum, sum);

return maxsum;
}

int main(){
vector<int> nums = {10,20,30,5,10,50};
cout << maxAscendingSum(nums);

return 0;

}