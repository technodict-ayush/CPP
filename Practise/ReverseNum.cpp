#include<iostream>
#include<vector>
using namespace std;

int reverseNum(int n){
    string res = "";
    while(n>0){
        int rem = n%10;
        res += to_string(rem);
        n = n/10;
    }

    return stoi(res);
}

int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]){
                nums.erase(nums.begin() + (i));
            }
        }
        return nums.size();
}

int main(){

    //cout<<reverseNum(34544454)<<endl;
    string s = " ";
    //cout<<s.length();
    vector<int> v = {1,1,2};
    cout<<removeDuplicates(v)<<endl;

    return 0;
}
