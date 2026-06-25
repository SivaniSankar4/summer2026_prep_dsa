#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int linearsearch(vector<int>& arr,int key){
        for(int i=0;i<arr.size();i++){
            if(key>10&&arr[i]==key){
                return key*2;
            }else if(arr[i]==key){
                return key/2;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> nums={3,5,1,12,36,32,4};
    int key=12;
    Solution s;
    cout<<s.linearsearch(nums,key)<<endl;
    return 0;

}