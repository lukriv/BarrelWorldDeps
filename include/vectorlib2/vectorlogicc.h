/*
 * vectorlogicc.h
 *
 *  Created on: 18.2.2010
 *      Author: Lukáš
 */

#ifndef VECTORLOGICC_H_
#define VECTORLOGICC_H_

#include <vectorstruct.h>

/*! \def VECTOR_AND_CHAR(a,b)
 *  \brief Vector logical AND
 *
 *  Bitwise \a and result = \a a & \a b.
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_CHAR type.
 */

/*! \def VECTOR_OR_CHAR(a,b)
 *  \brief Vector logical OR
 *
 *  Bitwise \a or result = \a a & \a b.
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_CHAR type.
 */

/*! \def VECTOR_XOR_CHAR(a,b)
 *  \brief Vector logical XOR
 *
 *  Bitwise \a exclusive \a or result = \a a & \a b.
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_CHAR type.
 */

/*! \def VECTOR_ANDNOT_CHAR(a,b)
 *  \brief Vector logical AND with complement
 *
 *	Bitwise \a and \a not - result = a & (~b).
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_CHAR type.
 */

/*! \def VECTOR_NOR_CHAR(a,b)
 *  \brief Vector logical NOR
 *
 *	Bitwise \a nor result = ~(a | b).
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_CHAR type.
 */

#if defined(__SSE2__)
	#define VECTOR_AND_CHAR(a,b) _mm_and_si128(a, b)
	#define VECTOR_OR_CHAR(a,b) _mm_or_si128(a, b)
	#define VECTOR_XOR_CHAR(a,b) _mm_xor_si128(a, b)
	#define VECTOR_ANDNOT_CHAR(a,b) _mm_andnot_si128(b, a)
	#define VECTOR_NOR_CHAR(a,b) _mm_xor_si128( _mm_or_si128(a,b), _mm_set1_epi32(-1))
#elif defined(__VEC__)
	#define VECTOR_AND_CHAR(a,b) vec_and(a, b)
	#define VECTOR_OR_CHAR(a,b) vec_or(a, b)
	#define VECTOR_XOR_CHAR(a,b) vec_xor(a, b)
	#define VECTOR_ANDNOT_CHAR(a,b) vec_andc(a, b)
	#define VECTOR_NOR_CHAR(a,b) vec_nor(a, b)
#else
	#define VECTOR_AND_CHAR(a,b) vector_and(a, b)
	#define VECTOR_OR_CHAR(a,b) vector_or(a, b)
	#define VECTOR_XOR_CHAR(a,b) vector_xor(a, b)
	#define VECTOR_ANDNOT_CHAR(a,b) vector_andnot(a, b)
	#define VECTOR_NOR_CHAR(a,b) vector_nor(a, b)
#endif

#if defined(__SSE2__)
#elif defined(__VEC__)
#else
	#include "nonvector/vector_and.h"
	#include "nonvector/vector_or.h"
	#include "nonvector/vector_xor.h"
	#include "nonvector/vector_andnot.h"
	#include "nonvector/vector_nor.h"
#endif

#endif /* VECTORLOGICC_H_ */
