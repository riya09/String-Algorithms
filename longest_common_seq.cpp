#include<bits/stdc++.h>
using namespace std;
#define MAX 2005
int lcs[MAX][MAX];
    int main() {
        string a,b;
        while(getline(cin,a)){
        getline(cin,b);
        for(int i=0;i<=a.length();i++){
            for(int j=0;j<=b.length();j++){
                if(i==0 || j==0){
                        lcs[i][j]=0;
                }
                else if(a[i-1]==b[j-1]){
                        lcs[i][j]= 1 + lcs[i-1][j-1];
                }
                else {
                        lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }

        cout << lcs [a.length()][b.length()] << '\n';
        }
    return 0;
}
