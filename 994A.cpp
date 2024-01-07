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
    int A[n],B[m];
    for(int i=0;i<n;i++)
        cin >> A[i];
    for(int i=0;i<m;i++)
        cin >> B[i];
    
    for(int i=0;i<n;i++){
        int x=A[i];
        for(int j=0;j<m;j++)
            if(B[j]==x){
                cout << x << " ";
                continue;
            }
    }
    return 0;
}