#include<iostream.h>
#include<stdlib.h>

int fibonacci( int n ){
    if( n <= 2 ) return 1;
    int a=1,b=1,c;
    for( int i=3; i <= n; i++ ){
         c = b + a;
         a = b;
         b = c;
    }
    return c;
}

int main()
{
 cout << "What number you want to compute?: ";
 int n;
 cin >> n;
 cout << "Fibonacci (" << n << "): " << fibonacci( n ) << endl;
 system( "pause" );
 return 0;
}
