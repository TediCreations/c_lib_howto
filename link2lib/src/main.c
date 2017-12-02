#include <stdio.h>

#include "math.h"

int main( void )
{
	printf( "--- Begin Good ---\n" );
	should( 2 == add( -2, 4 ) );
	should( 2 == add( 0, 2 ) );
	should( 2 == add( 2, 0 ) );
	should( 2 == add( 1, 1 ) );
	
	printf( "--- Begin Bad ---\n" );
	should( 2 == add( 9, 32 ) );

	printf( "--- End ---\n" );

	return 0;
}