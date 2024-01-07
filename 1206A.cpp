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


int bin_search(int A[],int l,int r,int ele){
    int mid = (l+r)/2;
    while(l<r){
        if(A[mid] == ele)
            return mid;
        else if(A[mid]<ele){
            l = mid+1;
            //bin_search(A,l,r,ele);
            }
        else{
            r=mid-1;
            //bin_search(A,l,r,ele);
            }
        }

        return -1;
    }

int main(){
fastio
    int n,m;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
        cin >> A[i];
    cin >> m;
    int B[m];
    for(int i=0;i<m;i++)
        cin >> B[i];
    
    sort(A,A+n);
    sort(B,B+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x = A[i]+B[j];
            // int t1=-1,t2=-1;
            // for(int k=j;k<m;k++){
            //     if(B[k]==x){
            //         t1=0;
            //         break;
            //     }
            // }
            // for(int l=i;l<n;l++){
            //     if(A[l]==x){
            //         t2=0;
            //         break;
            //     }
            // }

            // if(t1 == -1 && t2 == -1){
            //     cout << A[i] << " " << B[j];
            //     return 0;
            //     break;
            // }
            if(bin_search(A,i,n-1,x) == -1){
                if(bin_search(B,j,m-1,x) == -1){

                    cout << A[i] << " " << B[j];
                    return 0;
                    break;
                }
                else
                    continue;
            }
            else
                continue;
        }
    }
    // }
    return 0;
}