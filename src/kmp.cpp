string p, text;
bool tales;

void Kmp2( long *kmpNext ){
  ll i,j;
  i = j = 0;
   while (j < text.size()){
      while (i > -1 && p[i] != text[j]) i = kmpNext[i];
      i++; j++;
      if (i >= p.size()){
         printf("%d\n",j-i);
         i = kmpNext[i];
      }
   }
}

/* Calculate the table of jumps */
void preKmp( long *b ){
    ll i = 0, j = -1;
    b[ i ] = j;
    while( i<p.size() ){
        while( j>=0 && p[i] != p[j] ) j = b[j];
        i++; j++;
        b[i] = j;
    }
}

int main()
{
    ll len, *y;
    while( scanf("%lli",&len) != EOF ){
        cin >> p >> text;
        if( p.size() <= text.size() ){
            long b[ len+1 ];
            preKmp( b );
            Kmp2( b );
        }
    }
    return 0;
}

