#include <bits/stdc++.h>
using namespace std;
int n;

char arr[105][105];
int recurs_ans(int x, int y){
    int ans;
    arr[x][y] = '#';

    ans = 0;


    if(x - 1 >= 1 && arr[x - 1][y] == '.'){
        ans += recurs_ans(x - 1, y);
    }
    if(y - 1 >= 1 && arr[x][y - 1] == '.'){
        ans += recurs_ans(x, y - 1);
    }
    if(x + 1 <= n && arr[x + 1][y] == '.'){
        ans += recurs_ans(x + 1, y);
    }
    if(y + 1 <= n && arr[x][y + 1] == '.'){
        ans += recurs_ans(x, y + 1);
    }
    return ans + 1;
}

int main(){
    int x1, y1;
    cin >> n >> x1 >> y1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }

    cout << recurs_ans(y1, x1);
return 0;
}