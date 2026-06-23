#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            swap(arr[i++],arr[j--]);
        }
        for(int i:arr){
            cout<<i<<" ";
        }
    }
};
int main(){
    vector<int> arr={1,2,3,4,5};
    Solution st;
    st.reverseArray(arr);
}