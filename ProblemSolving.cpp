// Bit Manipulation
....

//SUM vs XOr
long sumXor(long n) {



long count=0;

for(long i=0;i<=n;i++){

   

    if((i+n) == (i^n)){

        count++;

    }

}

return count;

}


+++++++++++++++++++++++++++++++++++++++++++++++++=



// int main()
// {
//     /*
//     for n=4;

//       1
//       2 3
//       3 4 5
//       4 5 6 7
//     */

//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         int value=i;
//         while (j <= i)
//         {
//             cout <<value<< " ";
//             value++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }
   
   
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   
// C++ program to convert a decimal
// number to binary number
 
#include <iostream>
using namespace std;
 
// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
     
    // printing binary array in reverse order, Kyuki convert krte time revresed ho jata h jaise agar 25 ko krenge to convert krke 10011 aayga jabki shi h 11001
    // isliye reverse krna pdta h
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
 
// Driver program to test above function
int main()
{
    int n = 17;
    decToBinary(n);
    return 0;
}
OP- 10001
// https://www.geeksforgeeks.org/program-decimal-binary-conversion/

   
   
   // convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);

int main() {
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}



Test 1
Test 2
Test 3
Test 4
