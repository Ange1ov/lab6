#include <iostream.h>
#include <vcl.h> 
#pragma hdrstop
#pragma argsused 
#include <stdio.h>
#include <conio.h> 
using namespace std;
#include <iomanip.h>
#include <stdlib.h> 
void main()
{
    int mas[ 50 ][ 50 ]; 
 
    
 
    printf( "Vvedite razmer matrici\n" );
    srand( 1 );
 
    
 
    int i, j, a, b; scanf( "%d  %d", &a, &b ); 
    for( i = 0; i < a; i++ )
    {
        for( j = 0; j < b; j++ )
        {
 


            mas[ i ][ j ] = ( double )rand() / ( RAND_MAX + 1 ) * 99 + 1;
 

 
            printf( "%3d", mas[ i ][ j ] );
        }
        printf("\n");
    }
    int x,y;

 
 
    for( y = 0; y < a; y++ )
    {
        for ( i = 0; i < ( a - 1 ); i++ )
        {
            if( mas[ i ][ 0 ] > mas[ i + 1 ][ 0 ] )
            {
                for( j = 0 ; j < b; j++ )
                {
                    x = mas[ i ][ j ];
                    mas[ i ][ j ] = mas[ i + 1 ][ j ];
                    mas[ i + 1 ][ j ] = x;
                }
            }
        }
    }
    printf("\n");



    for( i = 0; i < a; i++ )
    {
        for( j = 0; j < b; j++ )
        {
            printf( "%3d", mas[ i ][ j ] );
        }
        printf("\n");
    }
puts("\n Press any key ... ");
getch();
}
