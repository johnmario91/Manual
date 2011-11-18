void Floyd()
{
	//llenar primero la matriz dp!!!!
  for (int k = 0; k<maxNodes;++k){
    for (int i = 0; i<maxNodes;++i){
      for (int j = 0; j<maxNodes;++j){
       dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
      }
    }
  }
}
