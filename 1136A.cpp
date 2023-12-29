#include<bits/stdc++.h>


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MP make_pair
#define PB push_back


using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef pair<int,int> pi;
typedef vector<pair<int,int>> vpi;


int main(){
fastio
    int n;
    cin >> n;
    int A[n][2];
    for(int i=0;i<n;i++)
        cin >> A[i][0] >> A[i][1];

    int idx,ans = 0;
    cin >> idx;
    for(int i=0;i<n;i++){
        if((A[i][0]<=idx && A[i][1]>idx) || (A[i][0]<idx && A[i][1]>= idx) || (A[i][0]==idx && A[i][1]==idx)){
            ans = i;
            break;
        }
    }

    cout << n-ans;
    return 0;
}