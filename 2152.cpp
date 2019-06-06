#include<bits/stdc++.h>

using namespace std;

int main(void){

    int x[3];
    int loop;

    cin >> loop;

    while(loop--){
        for(int i=0;i<3;i++){
            cin >> x[i];
        }
        cout << setfill('0') << setw(2) << x[0] << ":" << setw(2) << x[1] << " - ";
        if(x[2]==1) cout << "A porta abriu!" << endl;
        else cout << "A porta fechou!" << endl;
    }
}
