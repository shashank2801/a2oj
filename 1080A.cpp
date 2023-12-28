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
    int n,k;
    cin >> n >> k;
    int r = 2*n,g=5*n,b=8*n;
    //cout << r << " " << g << " " << b << "\n";
    int x = (r%k)?(r/k + 1):(r/k);
    int y = (g%k)?(g/k + 1):(g/k);
    int z = (b%k)?(b/k + 1):(b/k);
    int req =  x+ y + z;
    cout << req;
    return 0;
}