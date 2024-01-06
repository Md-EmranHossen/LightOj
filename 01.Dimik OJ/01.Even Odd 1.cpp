#include <bits/stdc++.h>

using namespace std;
int main(){
    int tst;
    cin>>tst;

    while (tst--){
        int num;
        cin>>num;
        if (num % 2 == 0){
            cout << "even" << '\n';
        } else cout << "odd" <<'\n';
    }
    return 0;
}