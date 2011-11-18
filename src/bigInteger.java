static BigInteger [] fact = new BigInteger[104];
public static void init(){
  fact[0] = BigInteger.ONE;
    for (int i = 1; i<=100;++i){
      fact[i] = new BigInteger(String.valueOf(i)).multiply(fact[i-1]);
    }
}

