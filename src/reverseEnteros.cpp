ll reverse_num( ll sourcenum ){
  ll temp = sourcenum;
  ll sum = 0;
  while ( temp ){
    sum *= 10;
    sum += temp%10;
    temp /= 10;
  }
  return sum;
}
