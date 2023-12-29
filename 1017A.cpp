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
    // int n;
    // cin >> n;
    // vector<pair<int,int>> val;
    // for(int i=1;i<=n;i++){
    //     int a,b,c,d;
    //     cin >> a >> b >> c >> d;
    //     val.push_back(make_pair(a+b+c+d,i));
    // }
    // sort(val.rbegin(),val.rend());
   
    // int x = 0;
    // for(int i=0;i<n;i++){
    //     if(val[i].second == 1)
    //         x=i+1;
    // }
    // // cout << x << "\n";
    // for(int i=x-1;i>=0;i--){
    //     if(val[i].first == val[i-1].first)
    //         x--;
    // }
    
    // cout << x;
    // return 0;

    int n;
    cin >> n;
    int thomas,position=1;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    thomas = (a+b+c+d);

    for(int i=1;i<n;i++){
        int total = 0;
        cin >> a >> b >> c >> d;
        total = (a+b+c+d);

        if(total>thomas)
            position++;
    }
    
    cout << position;
    return 0;
}