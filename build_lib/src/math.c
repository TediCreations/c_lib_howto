﻿/******************************************************************************
	Code
******************************************************************************/

/******************************************************************************
	Include files
******************************************************************************/

#include "math.h"

/******************************************************************************
	Local definitions
******************************************************************************/

/******************************************************************************
	Local variables
******************************************************************************/

/******************************************************************************
	Local function declarations
******************************************************************************/

/******************************************************************************
	Function definitions
******************************************************************************/

/**
 * \brief	Function does this
 *
 * \param[in]	arg			Explanation of foo.
 *
 * \see						Similar code element.
 *
 * \return					What does it return?
 * \retval					True if correct.
 * \retval					False if wrong.
 */
void should( const int must_be_true )
{
	if( must_be_true != 0 )
	{
		printf( "OK\n" );
	}
	else
	{
		printf( "ASSERTION!\n" );
	}
}


int add( const int a, const int b )
{
	return a + b;
}