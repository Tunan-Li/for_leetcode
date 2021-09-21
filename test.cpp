#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int length = nums.size();
        for (int i = 0; i < length - 1; i++) {
            for (int j = i + 1; j < length; j++) {
                if ( nums[i] + nums[j] == target ) {
                    return { i, j };
                }
            }
        }
        return {};
    }
};
int main(){
    Solution S;
    vector<int> num(4);
    vector<int> one(2);
    int a[4] = { 2, 7, 11, 15 };
    for (int i = 0; i < 4; i++) {
        cout << a[i] << ' ';
        if ( i == 3 ) 
            cout << endl;
        num[i] = a[i];
        cout << num[i] << ' ' << endl;
    }
    one = S.twoSum(num, 9);
    cout << one[0] << ' ' << one[1] <<endl;
    return 0;
}