#include <bits/stdc++.h>
#include<queue>
#include <iostream>
#include<cstdio>
#define  ll long long
#define mp make_pair
#define pii pair<int, int>
#define pb push_back
#define pll pair<ll,ll>
#define vll vector<ll>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vs vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define ss  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL); 
#define vi vector<int>
#define vl vector<ll>
#define maxn 200005
#define db double
#define fi first
#define se second
#define ll long long 
//#define for(i,n) for(i=0;i<n;i++)
using namespace std;
 
ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main() {
 ll t,i,j;
    cin>>t;
 
 while(t--)
 {
  ll n,k;
 
 
 cin>>n;
 vl v(n);
 for(i=0;i<n;i++)
 cin>>v[i];
bool f=false;
map<ll,ll> m;
m[v[0]]++;
for(i=1;i<n;i++)
{
    m[v[i]]++;
    if(m[v[i]]>1)
    if(v[i]!=v[i-1] || m[v[i]]>2)
    {
        f=true;
        break;
    }
    
}



 if(f)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;
 }
 
return 0;
}


