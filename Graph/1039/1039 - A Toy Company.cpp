/*

Name    :      Md. Ashraful Haque
Study   :      CSE, DUET
Address :      Dhaka, Bangladesh

E-mail  :      ashraful.duetg@gmail.com
FB      :      fb.com/ashrafulDUET1

*/


///#include<bits/stdc++.h>
#include <time.h>

#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include<complex>
using namespace std;
///----------------------------------------------------------------------------------------------
#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)
#define UI              unsigned int
#define LL              long long int
#define ULL             unsigned long long int
#define HI              printf("HI\n")
#define SF              scanf
#define PF              printf
#define SF1(a)          scanf("%d",&a)
#define SF2(a,b)        scanf("%d %d",&a,&b)
#define SFS1(a)         scanf("%s",a)
#define SFS2(a,b)       scanf("%s %s",a,b)
#define SF3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define SF4(a,b,c,d)    scanf("%d %d %d %d",&a,&b,&c,&d)
#define SF1LL(a)        scanf("%lld",&a)
#define SF2LL(a,b)      scanf("%lld %lld",&a,&b)
#define SF3LL(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)
#define SF4LL(a,b,c,d)  scanf("%lld %lld %lld %lld",&a,&b,&c,&d)

#define FIR              first
#define SEC              second
#define PB              push_back
#define POB             pop_back
#define PUF             push_front
#define POF             pop_front

#define PLL             pair<LL,LL>
#define PII             pair<int, int>
#define PDD             pair<double, double>
#define MKP             make_pair
#define MAX3(a,b,c)     max(a,max(b,c))
#define MIN3(a,b,c)     min(a,min(b,c))
#define POPC(a)         (__builtin_popcount(a))
#define Unique(a)       sort(all(a)),a.erase(unique(all(a)),a.end())

#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset((a),x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))
#define PI              acos(-1.0)
#define ALL(a)          a.begin(),a.end()

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define SIZ(s)           ((int)s.size())
#define END             cout<<endl


#define DEBI4(a,b,c,d)  cout << "   --> " << #a << " = " << a << " \n"<< "   --> " << #b << " = " \
<< b << " \n"<< "   --> " << #c << " = " << c << " \n"<< "   --> " << #d << " = " << d << " \n"

template<class T1,class T2,class T3,class T4,class T5,class T6> void debt6(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}

/// <---------------------------  For Bitmasking  -------------------------------->

//template <class T, class X> inline bool getbit(T a, X i) { T t=1; return ((a&(t<<i))>0);}
//template <class T, class X> inline T setbit(T a, X i) { T t=1;return (a|(t<<i)); }
//template <class T, class X> inline T resetbit(T a, X i) { T t=1;return (a&(~(t<<i)));}
//template <class T, class X> inline T togglebit(T a, X i) { T t=1;return (a^((t<<i)));}
//template <class T> inline T countbit(T a) {return __builtin_popcount( a );}

/// <---------------------------  End of Bitmasking  -------------------------------->

/// <--------------------------- For B - Base Number System ----------------------------------->
//int base;
//int pw[10];
//void calPow(int b){
//    base = b;
//    pw[0] = 1;
//    for( int i = 1; i<10; i++ ){
//        pw[i] = pw[i-1]*base;
//    }
//}
//int getV(int mask, int pos){
//    mask /= pw[pos];
//    return ( mask%base );
//}
//int setV(int mask, int v, int pos){
//    int rem = mask%pw[pos];
//    mask /= pw[pos+1];
//    mask = ( mask*base ) + v;
//    mask = ( mask*pw[pos] ) + rem;
//    return mask;
//}
/// <--------------------------- End B - Base Number System ----------------------------------->

// moves

//int dx[]= {0,0,1,-1};/*4 side move*/
//int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*knight move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*knight move*/

int dx[]={1,-1,0,0,0,0};
int dy[]={0,0,1,-1,0,0};
int dz[]={0,0,0,0,1,-1};

//double Expo(double n, int p) {
//	if (p == 0)return 1;
//	double x = Expo(n, p >> 1);
//	x = (x * x);
//	return ((p & 1) ? (x * n) : x);
//}



//template <class T> inline T bigmod(T p,T e,T M) { T ret = 1; for(; e > 0; e >>= 1) { if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T)ret; }
//template <class T> inline T gcd(T a,T b){while (a&&b)a>b?a%=b:b%=a;return a+b;}
//template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

///--------------------------------------------------Reference Kazi Nayeem and Never Mind----------------------------------------------------

int vis[27][27][27], dist[27][27][27];

bool check(string con1, string con2, string con3)
{
    int f, s, t;
        for(int j=0;j< con1.size(); j++)
            {
                for(int k=0;k<con2.size();k++)
                {
                    for(int r=0;r<con3.size();r++)
                    {
                        f = con1[j]-97;
                        s = con2[k]-'a';
                        t = con3[r]-97;
                        vis[f][s][t] = 1;
                    }
                }
            }
}

int button(int b)
{
    if(b==-1) return 25;
    return (b%26);
}
int bfs(string start, string finish)
{
    int ff = finish[0]-97;
    int fs = finish[1]-97;
    int ft = finish[2]-97;
    queue<string> q;

    q.push(start);
    if(start==finish) { return 0; }
    while(!q.empty())
    {
        string  from =q.front();
        q.pop();
        int f = from[0]-97; // Convert into integer number for array index;
        int s = from[1]-97;
        int t = from[2]-'a';
        for(int i=0;i<6;i++)
        {
            int nf = button(f + dx[i]);
            int ns = button(s + dy[i]);
            int nt = button(t + dz[i]);

            if(!vis[nf][ns][nt])
            {
                    dist[nf][ns][nt] = dist[f][s][t] + 1;
                    vis[nf][ns][nt] =1;
                    string str ="";
                    str+=nf+97;
                    str+=ns+97;
                    str+=nt+97;
                    if(str==finish)
                    {
                        return dist[nf][ns][nt];
                    }
                    q.push(str);
            }
        }
    }
    return -1;
}
int main()
{
//    fRead("in");
//    fWrite("out");
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n; string start,finish,con1,con2,con3;
        cin>>start>>finish;
        cin>>n;
        MEM(vis,0);
        MEM(dist,0);
        for(int i=0;i<n;i++)
        {
            cin>>con1;
            cin>>con2;
            cin>>con3;
            check(con1,con2,con3);
        }
        int f = start[0]-97;
        int s = start[1]-97;
        int tt = start[2]-97;
        cout<<"Case "<<t<<": ";
        if(vis[f][s][tt])
            cout<<-1<<endl;
        else
            cout<<bfs(start,finish)<<endl;;
    }
    return 0;
}































