void Levenshtein(string a, string b)
{
  D[0][0] = 0;
  int m = a.length(), n = b.length(),cost = 0;
  for (int i = 1; i<=m;++i){
    D[i][0] = i;
  }
  for (int j = 1; j<=n;++j){
    D[0][j] = j;
  }
  for (int i = 1; i <= m; ++i){
    for (int j = 1; j<= n; ++j){
        cost = (a[i-1] == b[j-1]) ? 0 : 1;
        D[i][j] = min((D[i-1][j-1]+cost),min(D[i-1][j]+1,D[i][j-1]+1));
    }
  }
  printf("%d\n",D[m][n]);
}
