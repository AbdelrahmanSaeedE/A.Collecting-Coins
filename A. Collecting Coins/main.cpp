#include <iostream>

using namespace std;

int main()
{
    int a , b , c , n , t ;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> n;
        int mx=max(a,max(b,c));
        int f=a+b+c+n;
        if(f%3==0&&f/3>=mx) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
