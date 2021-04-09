/*
 * BIT_MATH.h
 *
 * Created: 4/6/2021 4:10:50 PM
 *  Author: 20111
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT)	 REG |= (1<<BIT)  /*Add logic(1) to specific bit*/
#define CLR_BIT(REG,BIT)	 REG &=~ (1<<BIT) /*Add logic(0) to specific bit*/
#define GET_BIT(REG,BIT)	 ((REG>>BIT)&1)   /*Get specific bit value*/
#define TGL_BIT(REG,BIT)     REG ^= (1<<BIT)  /*NOT-Gate*/

#define Get_LOW_Nibble(REG)  REG & 0x0F //HexaDecimal
#define Get_HIGH_Nibble(REG) (REG>>4) & 0b00001111 //Binary
#define GET_PORT(REG) REG & 0xFF
#define TGL_PORT(REG) REG ^= 0xFF



#endif /* BIT_MATH_H_ */