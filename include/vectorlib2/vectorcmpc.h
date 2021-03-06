/*
 * vectorcmpc.h
 *
 *  Created on: 16.4.2010
 *      Author: Lukáš
 */

#ifndef VECTORCMPC_H_
#define VECTORCMPC_H_


/*! \def VECTOR_CMPEQ_CHAR(a,b)
 *
 *	\brief Vector Compare Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_UINT type.
 *  Each element of the result is all ones if the corresponding element of a is equal to the
 *  corresponding element of b. Otherwise, it returns all zeros.
 *
 */

/*! \def VECTOR_CMPLT_CHAR(a,b)
 *
 *	\brief Vector Compare Less Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_UINT type.
 *  Each element of the result is all ones if the corresponding element of a is less than the
 *   corresponding element of b. Otherwise, it returns all zeros.
 *
 */

/*! \def VECTOR_CMPLE_CHAR(a,b)
 *
 *	\brief Vector Compare Less Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_UINT type.
 *  Each element of the result is all ones if the corresponding element of a is less than or equal
 *  to the corresponding element of b. Otherwise, it returns all zeros.
 *
 */

/*! \def VECTOR_CMPGT_CHAR(a,b)
 *
 *	\brief Vector Compare Greater Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_UINT type.
 *  Each element of the result is all ones if the corresponding element of a is greater than the
 *  corresponding element of b. Otherwise, it returns all zeros.
 *
 */

/*! \def VECTOR_CMPGE_CHAR(a,b)
 *
 *	\brief Vector Compare Greater Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is VECTOR_UINT type.
 *  Each element of the result is all ones if the corresponding element of a is greater than or
 *  equal to the corresponding element of b. Otherwise, it returns all zeros.
 *
 */

/*! \def VECTOR_ANY_EQ_CHAR(a,b)
 *
 *	\brief Any Element Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_eq returns 1 if any element of a is equal to the corresponding
 *	element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ANY_NE_CHAR(a,b)
 *
 *	\brief Any Element Not Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_eq returns 1 if any element of a is not equal to the corresponding
 *	element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ANY_LT_CHAR(a,b)
 *
 *	\brief Any Element Less Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_lt returns 1 if any element of a is less than the corresponding
 *  element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ANY_LE_CHAR(a,b)
 *
 *	\brief Any Element Less Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_le returns 1 if any element of a is less than or equal to the
 *  corresponding element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ANY_GT_CHAR(a,b)
 *
 *	\brief Any Element Greater Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_gt returns 1 if any element of a is greater than the corresponding
 *  element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ANY_GE_CHAR(a,b)
 *
 *	\brief Any Element Greater Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_any_ge returns 1 if any element of a is greater than or equal to the
 * 	corresponding element of b. Otherwise, it returns 0.
 *
 */


/*! \def VECTOR_ALL_EQ_CHAR(a,b)
 *
 *	\brief All Elements Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_all_eq returns 1 if every element of a is equal to the corresponding
 * 	element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ALL_LT_CHAR(a,b)
 *
 *	\brief All Elements Less Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_all_le returns 1 if every element of a is less than or equal to the
 * 	corresponding element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ALL_LE_CHAR(a,b)
 *
 *	\brief All Elements Less Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_all_le returns 1 if every element of a is less than or equal to the
 *  corresponding element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ALL_GT_CHAR(a,b)
 *
 *
 *	\brief All Elements Greater Than
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_all_gt returns 1 if every element of a is greater than the corresponding
 *	element of b. Otherwise, it returns 0.
 *
 */

/*! \def VECTOR_ALL_GE_CHAR(a,b)
 *
 *
 *	\brief All Elements Greater Than or Equal
 *
 *  Parameters \a a and \a b are VECTOR_CHAR type. Return value is integer type.
 *  The predicate vec_all_ge returns 1 if every element of a is greater than or equal to the
 * 	corresponding element of b. Otherwise, it returns 0.
 *
 */

#if defined(__SSE2__)
	#define VECTOR_CMPEQ_CHAR(a,b) _mm_cmpeq_epi8(a,b)
	#define VECTOR_CMPLT_CHAR(a,b) _mm_cmplt_epi8(a,b)
	//#define VECTOR_CMPLE_CHAR(a,b) _mm_cmple_ps(a,b)
	#define VECTOR_CMPGT_CHAR(a,b) _mm_cmpgt_epi8(a,b)
	//#define VECTOR_CMPGE_CHAR(a,b) _mm_cmpge_ps(a,b)

	#define VECTOR_ANY_EQ_CHAR(a,b) (_mm_movemask_epi8(_mm_cmpeq_epi8(a,b)) != 0)
	#define VECTOR_ANY_NE_CHAR(a,b) (_mm_movemask_epi8(_mm_cmpeq_epi8(a,b)) != 0xffff)
	#define VECTOR_ANY_LT_CHAR(a,b) (_mm_movemask_epi8(_mm_cmplt_epi8(a,b)) != 0)
	//#define VECTOR_ANY_LE_CHAR(a,b) (_mm_movemask_ps(_mm_cmple_ps(a,b)) != 0)
	#define VECTOR_ANY_GT_CHAR(a,b) (_mm_movemask_epi8(_mm_cmpgt_epi8(a,b)) != 0)
	//#define VECTOR_ANY_GE_CHAR(a,b) (_mm_movemask_ps(_mm_cmpge_ps(a,b)) != 0)

	#define VECTOR_ALL_EQ_CHAR(a,b) (_mm_movemask_epi8(_mm_cmpeq_epi8(a,b)) == 0xffff)
	#define VECTOR_ALL_LT_CHAR(a,b) (_mm_movemask_epi8(_mm_cmplt_epi8(a,b)) == 0xffff)
	//#define VECTOR_ALL_LE_CHAR(a,b) (_mm_movemask_ps(_mm_cmple_ps(a,b)) == 0xf)
	#define VECTOR_ALL_GT_CHAR(a,b) (_mm_movemask_epi8(_mm_cmpgt_epi8(a,b)) == 0xffff)
	//#define VECTOR_ALL_GE_CHAR(a,b) (_mm_movemask_ps(_mm_cmpge_ps(a,b)) == 0xf)

#elif defined(__VEC__)
	#define VECTOR_CMPEQ_CHAR(a,b) vec_cmpeq(a,b)
	#define VECTOR_CMPLT_CHAR(a,b) vec_cmplt(a,b)
	//#define VECTOR_CMPLE_CHAR(a,b) vec_cmple(a,b)
	#define VECTOR_CMPGT_CHAR(a,b) vec_cmpgt(a,b)
	//#define VECTOR_CMPGE_CHAR(a,b) vec_cmpge(a,b)

	#define VECTOR_ANY_EQ_CHAR(a,b) vec_any_eq(a,b)
	#define VECTOR_ANY_LT_CHAR(a,b) vec_any_lt(a,b)
	//#define VECTOR_ANY_LE_CHAR(a,b) vec_any_le(a,b)
	#define VECTOR_ANY_GT_CHAR(a,b) vec_any_gt(a,b)
	//#define VECTOR_ANY_GE_CHAR(a,b) vec_any_ge(a,b)

	#define VECTOR_ALL_EQ_CHAR(a,b) vec_all_eq(a,b)
	#define VECTOR_ALL_LT_CHAR(a,b) vec_all_lt(a,b)
	//#define VECTOR_ALL_LE_CHAR(a,b) vec_all_le(a,b)
	#define VECTOR_ALL_GT_CHAR(a,b) vec_all_gt(a,b)
	//#define VECTOR_ALL_GE_CHAR(a,b) vec_all_ge(a,b)
#else
	#define VECTOR_CMPEQ_CHAR(a,b) vector_cmpeq_char(a,b)
	#define VECTOR_CMPLT_CHAR(a,b) vector_cmplt_char(a,b)
	//#define VECTOR_CMPLE_CHAR(a,b) vector_cmple_char(a,b)
	#define VECTOR_CMPGT_CHAR(a,b) vector_cmpgt_char(a,b)
	//#define VECTOR_CMPGE_CHAR(a,b) vector_cmpge_char(a,b)

	#define VECTOR_ANY_EQ_CHAR(a,b) vector_any_eq_char(a,b)
	#define VECTOR_ANY_LT_CHAR(a,b) vector_any_lt_char(a,b)
	//#define VECTOR_ANY_LE_CHAR(a,b) vector_any_le_char(a,b)
	#define VECTOR_ANY_GT_CHAR(a,b) vector_any_gt_char(a,b)
	//#define VECTOR_ANY_GE_CHAR(a,b) vector_any_ge_char(a,b)

	#define VECTOR_ALL_EQ_CHAR(a,b) vector_all_eq_char(a,b)
	#define VECTOR_ALL_LT_CHAR(a,b) vector_all_lt_char(a,b)
	//#define VECTOR_ALL_LE_CHAR(a,b) vector_all_le_char(a,b)
	#define VECTOR_ALL_GT_CHAR(a,b) vector_all_gt_char(a,b)
	//#define VECTOR_ALL_GE_CHAR(a,b) vector_all_ge_char(a,b)
#endif

#if defined(__SSE2__)
#elif defined(__VEC__)
#else
	#include "nonvector/vector_cmpeq.h"
	#include "nonvector/vector_cmplt.h"
	//#include "nonvector/vector_cmple.h"
	#include "nonvector/vector_cmpgt.h"
	//#include "nonvector/vector_cmpge.h"

	#include "nonvector/vector_any_eq.h"
	#include "nonvector/vector_any_ne.h"
	#include "nonvector/vector_any_lt.h"
	//#include "nonvector/vector_any_le.h"
	#include "nonvector/vector_any_gt.h"
	//#include "nonvector/vector_any_ge.h"

	#include "nonvector/vector_all_eq.h"
	#include "nonvector/vector_all_lt.h"
	//#include "nonvector/vector_all_le.h"
	#include "nonvector/vector_all_gt.h"
	//#include "nonvector/vector_all_ge.h"
#endif

#endif /* VECTORCMPC_H_ */
