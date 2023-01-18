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
   
   #include<iostream>
using namespace std;

int main()
{
    
    int a=4;
    int b=6;
    cout<<"a&b= "<<(a&b)<<endl;
    cout<<"a | b= "<<(a | b)<<endl;
    cout<<"~a= "<<(~a)<<endl;
    cout<<"a^b ="<<(a ^ b)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

}

OP- 4
    6
   -5// We get -5 coz 4 is 1 0 0 is binary when we make it Not it will be 1111....011 but 1 means last bit defines number became negative to hmne kya padha tha ki
   bhai negative number ko print krne k liye 2' s comliment krte h
   111....011 ka 1's hua 000...100 2's krne k liye +1 krdo which means
   
       111....011
   1's 000....100
       ----------
   2's         +1
       -----------
       000....101 which means 5 sign negative hi rhega
   
   
  
