#include <bits/stdc++.h>
using namespace std;

int main(){

    //input
    int num;
    cin >> num;
    int tmp = 0;

    for(int i = num; i > 0; i = i / 10){
        tmp = ((tmp * 10) + (i % 10));
    }

    //output
    if(tmp == num)
        cout << "true";
    else
        cout << "false";
}