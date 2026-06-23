#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here

        int n=arr.size();

        for(int a=0;a<n-1;a++){
            if(arr[a]>arr[a+1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    vector<int> arr={1,2,3,4,5};
    Solution st;
    cout<<st.isSorted(arr);
}