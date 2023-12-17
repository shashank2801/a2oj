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
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    int l=0,r=0;
    char c1,c2;
    for(int t=0;t<m;t++){
        cin >> l >> r >> c1 >> c2;
        for(int i=l-1;i<r;i++){
            if(str[i]==c1)
                str[i]=c2;
        }
    }

    cout << str;
    return 0;
}