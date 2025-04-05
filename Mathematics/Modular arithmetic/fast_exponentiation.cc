#define ll long long
#define MOD 1000000007

//Modular arithmetics
ll add(ll a, ll b) {
    return (a % MOD + b % MOD) % MOD;
}

ll sub(ll a, ll b){
    return (a % MOD - b % MOD + MOD) % MOD;
}

ll mul(ll a, ll b) {
    return (a % MOD * b % MOD) % MOD;
}

//Fast exponentiation method O(log(n)) with modulus
ll fp(ll x, ll y){
    if(y == 0){
        return 1LL;
    }

    ll ret = fp(x, y / 2);

    return y & 1 ? mul(x, mul(ret, ret)) : mul(ret, ret);
  }
  