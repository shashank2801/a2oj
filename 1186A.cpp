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
    int n1,m,k;
    cin >> n1 >> m >> k;
    if(m>=n1 && k>=n1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}