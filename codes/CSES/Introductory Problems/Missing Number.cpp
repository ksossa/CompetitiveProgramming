#include <bits/stdc++.h> 
#define D(x) cout << #x << ": " << x << endl; 
#define forn(i,n) for(int i=0; i< (int)n; i++) 
#define for1(i,n) for(int i=1; i<= (int)n; i++) 
#define all(v) v.begin(),v.end()  

using namespace std;  

typedef long long ll;   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cout<< setprecision(20)<< fixed;
    #ifdef LOCAL         
        freopen("input.txt", "r", stdin);
    #else
        #define endl '\n'     
    #endif
    
    long long n;
    int aux;
    cin >> n;
    bool nums[n+1]={false};
    forn(i,n-1){
    	cin >> aux;
    	nums[aux] = true;
    }
    for1(i,n){
    	if (!nums[i]){
    		cout << i << endl;
    		break;
    	}
    }
    return 0;
}