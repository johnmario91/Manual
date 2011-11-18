int array[2100][2100], t;
string c, b;


int main(){
  cin >> t;
  For(h,0,2100) array[h][0] = array[0][h] = h;
  while( t-- ){
    cin >> c >> b;
    for ( int a = 1; a <= c.size() ; ++a ) {
        for ( int i = 1; i<= b.size(); ++i ) {
           int tales = array[a-1][i-1];
           if (c[a-1] != b[i-1]) tales++;
           array[a][i]=min(tales, min(array[a][i-1]+1,array[a-1][i]+1));
        }
    }
    cout << array[c.size()][b.size()] << endl;
  }
  return 0;
}
