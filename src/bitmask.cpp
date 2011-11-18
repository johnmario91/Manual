//tener en cuenta que el tamaño de
//valores debe ser >= que 1 << n
//y cortes es simplemente para llevar
//cuenta del numero de cortes por bitmask
for (int i = 0; i < (1<<n); ++i){
   valor[i] = cortes[i] = 0;
   for (int k = 0; k < n; ++k){
      if (i & (1 << k)){
         valor[i] += parts[k];
         cortes[i]++;
      }
   }
   suma[valor[i]].push_back(i);
   for (int g = 0; g < 105; ++g) memo[g][i] = -1;     
}
