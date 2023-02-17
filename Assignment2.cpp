#include <iostream>
#include <vector>

using namespace std;


int getVectorSum(vector<int>& input){
    long long sum = 0;
    for(int i=0;i<input.size();i++){
        sum += input[i];
    }
    return sum;
}

int main(){
    vector<int> test = {1,2,3,4,5,6,7,8,9,10};
    cout << getVectorSum(test)<<endl;
    return 0;
}