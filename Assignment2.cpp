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

int getMin(vector<int>& input){
    int min = input[0];
    for(int i=1;i<input.size();i++){
       min=min<input[i]?min:input[i];
    }
    return min;
}

int main(){
    vector<int> test = {1,2,3,4,5,6,7,8,9,10};
    cout << getVectorSum(test)<<endl;
    cout << getMin(test)<<endl;
    return 0;
}