#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int sndlargest(vector<int> &arr) {
        // code here
        int l=-1;  //for positive array only
        int s=-1;  //for positive array only
        //int l=INT_MIN;
        //int s=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){
                s=l;
                l=arr[i];
            }else if(arr[i]>s&&arr[i]<l){
                s=arr[i];
            }
        }
        return s;
        //return s==INT_MIN?-1:s;
    }
};
int main(){
    vector<int> arr={5,7,8,2,11};
    Solution ob;
    cout<<ob.sndlargest(arr)<<endl;
    return 0;
}