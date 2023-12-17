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
    int t;
    cin >> t;
    int a,b,c,d,k;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c >> d >> k;
        int x=0,y=0;
        x = (a%c)?a/c + 1 : a/c;
        y = (b%d)?b/d + 1 : b/d;
        if(x+y<=k)
            cout << x << " " << y << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}