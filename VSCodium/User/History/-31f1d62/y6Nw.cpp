#include <bits/stdc++.h>
#define ll long long
    
using namespace std;
    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 0;
    cin >> a;
    int b = 0;
    cin >> b;

    if(a >= b){
        b = a;
    }    

    int n = 1;
    int thingy = 0;
    while (n <= b){
        thingy *= n;
        n++;
    }
    cout << thingy;
    
    return 0;
}