int main(){
   int n,k;
   while(cin >> n >> k && (n+k)){
       int r = 0;
       for(int i=1; i<=n;++i) r = (r+k) % i;
       cout << n << " " << k <<" " << (r+1) << endl;
   }
   return 0;
}

