#include <bits/stdc++.h>
using namespace std;
int secondLarge(int arr[], int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else{
            if(arr[i] < first && arr[i] > second){
                second = arr[i];
            }
        }
    }
    if(second == INT_MIN){
        return -1;
    }
    return second;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = secondLarge(arr, n);
    cout <<"second large: " << ans << endl;
}
