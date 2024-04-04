#include <bits/stdc++.h>
using namespace std;
int R, C;
int x = 0, y = 0, cnt = 0;

int main(){
    cin >> R >> C;
    char G[R][C];

    for(int i = 0; i < R ;i ++){
        for(int j = 0 ;j < C; j ++){
            cin >> G[i][j];
        }
    }

    while(true){
        if(x < 0 || y < 0 || x >= R || y >= C){
            printf("Out\n"); return 0;
        }
        if(cnt > R * C * 2){
            printf("Lost\n"); return 0;
        }

        if(G[x][y] == 'T'){
            printf("%d\n", cnt); return 0;
        }
        else if(G[x][y] == 'N')x--;

        else if(G[x][y] == 'S')x++;

        else if(G[x][y] == 'W')y--;

        else if(G[x][y] == 'E')y++;

        cnt++;
    }

    return 0;
}
