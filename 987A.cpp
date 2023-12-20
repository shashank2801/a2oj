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
    map<string,string> mp;
    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";

    int n;
    cin >> n;
    cout << 6-n << "\n";
    string str;
    for(int i=0;i<n;i++){
        cin >> str;
        mp[str]="found";
    }
    map<string,string>:: iterator itr;
    for(itr = mp.begin(); itr!=mp.end(); ++itr)
        if(itr->second != "found")
            cout << itr->second << "\n";

    return 0;
}