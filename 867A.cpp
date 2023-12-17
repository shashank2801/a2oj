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
    string str;
    cin >> str;
    int x=0,y=0;
    int i=0;
    for(int j=1;j<n;j++){
        if(str[i]=='S' && str[j]=='F')
            x++;
        else if(str[i]=='F' && str[j]=='S')
            y++;

        i++;
    }
    if(x>y)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}