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
    if(n%4==0)
        cout << 1 << " A";
    else if(n%4==1)
        cout << 0 << " A";
    else if(n%4==2)
        cout << 1 << " B";
    else
        cout << 2 << " A";
    return 0;
}