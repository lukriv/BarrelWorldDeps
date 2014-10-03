/*
 * vector_or.h
 *
 *  Created on: 18.2.2010
 *      Author: Lukáš Křivský
 */

#ifndef VECTOR_OR_H_
#define VECTOR_OR_H_

//! Vector logical OR
/*!
 * Bitwise or result = a | b.
 *
 * \param a Input vector
 * \param b Input vector
 *
 * \return Logical or result.
 *
 */
__inline vector_t vector_or (vector_t a, vector_t b)
{
	vector_t vec;

	vec.vui[0] = a.vui[0] | b.vui[0];
	vec.vui[1] = a.vui[1] | b.vui[1];
	vec.vui[2] = a.vui[2] | b.vui[2];
	vec.vui[3] = a.vui[3] | b.vui[3];

	return vec;

}

#endif /* VECTOR_OR_H_ */
