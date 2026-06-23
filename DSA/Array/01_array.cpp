#include <iostream>
#include <vector>
using namespace std;
int main(){
    // int arr[5]={1,2,3,4,5};
    // for(int n:arr){ //for each loop
    //     cout<<n<<" ";
    // }

    vector<int> arr1={1,2,3,4,5};
    cout<<arr1.at(3)<<endl;
    arr1.push_back(10);
    for(int n:arr1){ 
        cout<<n<<" ";
    }
    cout<<endl;
    arr1.pop_back();
        for(int n:arr1){ 
        cout<<n<<" ";
    }
    cout<<endl;
    cout<<arr1.size()<<endl;
    arr1.clear();

}
/*2 3 pointer
sliding window
prefix suffix
2d array
sliding window
binary search*/