#include <iostream>
#include <math.h>
using namespace std;

int primes[4792];
int neededPrimes[2500];
int freqPrimes[4792];
int totalPrime=0;
int totalEvenDiv=0;
void seive(int anInt) {
  bool flag[anInt + 1];
  for (int m = 2; m <= anInt; m++)
    flag[m] = 1;
  int count = 0;
  int val = sqrt(anInt) + 1;
  for (int m = 2; m < val; m++) {
    if (flag[m])
      for (int n = m; m * n <= anInt; n++)
        flag[n * m] = 0;
  }
  for (int m = 2; m < anInt; m++) {
    if (flag[m]) {
      primes[count++] = m;
    }
  }
}
void generateDivisor(long anInt) {
  totalPrime = 0;
  totalEvenDiv = 0;
  int count = 0;
  long val = sqrt(anInt) + 1;
  for (int m = 0; primes[m] <= val; m++) {
    if (anInt % primes[m] == 0) {
      count = 0;
      while (anInt % primes[m] == 0) {
        anInt /= primes[m];
        count++;
      }
      neededPrimes[totalPrime] = primes[m];
      freqPrimes[totalPrime] = count;
      totalPrime++;
      val = sqrt(anInt) + 1;
    }
  }
  if (anInt > 1) {
    neededPrimes[totalPrime] = anInt;
    freqPrimes[totalPrime] = 1;
    totalPrime++;
  }
}
void evenDivisors(int cur, int num) {
  int val;
  if (cur == totalPrime) {
    if (num % 2 == 0)
      totalEvenDiv++;
  } else {
    val = 1;
    for (int m = 0; m <= freqPrimes[cur]; m++) {
      evenDivisors(cur + 1, num * val);
      val = val * neededPrimes[cur];
    }
  }
}
int main() {
  int tests;
  cin >> tests;
  seive(46340);
  while (tests > 0) {
    long x;
    cin >> x;
    generateDivisor(x);
    evenDivisors(0, 1);
    cout << totalEvenDiv << endl;
    --tests;
  }
}
