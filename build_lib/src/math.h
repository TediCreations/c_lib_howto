/******************************************************************************
	About
******************************************************************************/

//TODO: Doxygen the about section in file math.h

/**
 * \file math.h
 *
 * \brief	TODO: Write brief
 *
 * Created:			02/12/2017
 *
 * \author	Ilias Kanelis	hkanelhs@yahoo.gr
 */

/**
* \defgroup	Ungrouped	Ungrouped
*
* \code	#include <math.h>	\endcode
*/

/******************************************************************************
	Code
******************************************************************************/

#ifndef MATH_H_ONLY_ONE_INCLUDE_SAFETY
#define MATH_H_ONLY_ONE_INCLUDE_SAFETY

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
	Function declarations
******************************************************************************/

void should( const int must_be_true );
int add( const int a, const int b );

#ifdef __cplusplus
}
#endif

#endif /* MATH_H_ONLY_ONE_INCLUDE_SAFETY */
