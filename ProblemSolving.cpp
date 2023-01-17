// Bit Manipulation


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


+++++++++++++++++++++++



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
