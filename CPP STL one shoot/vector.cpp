#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 5};

    for(auto it = vec.rbegin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);
    // vec.push_back(7);

    // for(int val : vec){
    //     cout << val <<" ";

    cout << endl;

    // // cout <<"idx of 3: is  " << vec[3];
    // cout <<"front : " << vec.front() <<" ";
    // cout << endl; 
    // cout <<"back : " << vec.back() <<" ";

    

    
    return 0;
}