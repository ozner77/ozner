#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array={-1,2,4,-3,5,2,-5,2};
    int best = 0, sum = 0;
    for (int k = 0; k < array.size(); k++) {
    cout<<sum<<" ";
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
    }
    cout << best << "\n";
}
//handbook