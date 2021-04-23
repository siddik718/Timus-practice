#include<bits/stdc++.h>
#define N 170000
#define ll long long int
using namespace std;

vector <bool> ar(N+5,true);
vector <int> prime;
void sieve(){
for(int i = 2;i*i<=N;i++){
    if(ar[i]){
        for(int j = i*i;j<=N;j+=i){
            ar[j] = false;
        }
    }
}
for(int i = 2;i<=N;i++){
    if(ar[i]){
        prime.push_back(i);
    }
}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
int t,n;
cin >> t;
while(t--){
cin >> n;
cout << prime[n-1] << endl;
}
return 0;
}

