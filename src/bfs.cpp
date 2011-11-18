int G[MAXN][MAXN], V[MAXN][MAXN], D[MAXN][MAXN];
int r,c;
int di[] = {-1, 1, 0, 0};
int dj[] = {0, 0, -1, 1};

int vX, vY;

void BFS(int i, int j)
{	
queue <int> q;
q.push(i);
q.push(j);
int bi = i, bj = j;
  while(q.size()){
    int ci = q.front(); q.pop();
    int cj = q.front(); q.pop();
    if (D[bi][bj] < D[ci][cj]){
        bi = ci;
        bj = cj;
    }
    V[ci][cj] = 1;
    for (int k = 0; k<4;++k){
        int vi = ci + di[k], vj = cj + dj[k];
        if (G[vi][vj] > 0 && !V[vi][vj] && 
        (vi >= 0 && vi <= r) && (vj <= c && vj >= 0)){
               q.push(vi);
               q.push(vj);
               D[vi][vj] = D[ci][cj] + 1;
        }
    }
  }
  vX = bi, vY = bj;
}
