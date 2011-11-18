int  F[2][2];
int A[2][2];
typedef  long long ll;
const int modulus = 1000000007;
int a,b,c,d;

int main()
{
       int tc;
       long long p;
       ll ans;
       scanf("%d", &tc);
       while (tc--)
       {
               F[0][0] = 1;
               F[0][1] = 1;
               F[1][0] = 1;
               F[1][1] = 0;
               A[0][0] = 1;
               A[0][1] = 0;
               A[1][0] = 0;
               A[1][1] = 1;
               scanf("%lld", &p);
               p <<= 1;
               while (p)
       {
               if (p & 1)
               {
                       a = ((ll)A[0][0] * F[0][0]) % modulus 
+ ((ll)A[0][1] * F[1][0]) % modulus;
                       b = ((ll)A[0][0] * F[0][1]) % modulus 
+ ((ll)A[0][1] * F[1][1]) % modulus;
                       c = ((ll)A[1][0] * F[0][0]) % modulus 
+ ((ll)A[1][1] * F[1][0]) % modulus;
                       d = ((ll)A[1][0] * F[0][1]) % modulus 
+ ((ll)A[1][1] * F[1][1]) % modulus;
                       A[0][0] = a % modulus;
                       A[0][1] = b % modulus;
                       A[1][0] = c % modulus;
                       A[1][1] = d % modulus;
               }
               a = ((ll)F[0][0] * F[0][0]) % modulus
 + ((ll)F[0][1] * F[1][0]) % modulus;
                       b = (ll)F[0][1] * 
(F[0][0]  + F[1][1]) % modulus;
                       c = (ll)F[1][0] * 
(F[0][0] + F[1][1]) % modulus;
                       d = ((ll)F[1][0] * F[0][1]) % modulus
 + ((ll)F[1][1] * F[1][1]) % modulus;
                       F[0][0] = a % modulus;
                       F[0][1] = b % modulus;
                       F[1][0] = c % modulus;
                       F[1][1] = d % modulus;
                       p >>= 1;
       }
               ans = (ll)A[0][0] * A[0][1];
               printf("%d\n", (int)(ans % modulus));

       }
       return 0;
}
