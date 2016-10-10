#include<iostream.h>
#include<stdlib.h>

int fibonacci_r( int n ){
    if( n <= 2 ) return 1;
    return fibonacci_r( n-1 ) + fibonacci_r( n-2 );
}

int main()
{
 cout << "What number you want to compute?: ";
 int n;
 cin >> n;
 cout << "Fibonacci (" << n << "): " << fibonacci_r( n ) << endl;
 system( "pause" );
 return 0;
}
