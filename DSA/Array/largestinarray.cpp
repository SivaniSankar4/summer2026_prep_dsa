#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxim=arr[0];
        for(int i=1;i<arr.size();i++){
            maxim=max(maxim,arr[i]);
        }
        return maxim;
    }
};
int main(){
    vector<int> arr={5,7,8,2,11};
    Solution ob;
    cout<<ob.largest(arr)<<endl;
    return 0;
}