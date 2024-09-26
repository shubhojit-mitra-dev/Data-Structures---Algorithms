// Convert uppercase string to lowercase using for loop.

#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);

    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }

    cout << str << endl;

    return 0;
}