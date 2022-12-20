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
