#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    int z=0;
    n=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='z')
            z++;
        else if(str[i]=='n')
            n++;
    }
    for(int i=0;i<n;i++)
        cout << 1 << " ";
    for(int i=0;i<z;i++)
        cout << 0 << " ";
    return 0;
}