 #ifndef  __INCLUDES_H__
#define  __INCLUDES_H__

#include	<stdio.h>
#include	<string.h>
#include	<ctype.h>
#include	<stdlib.h>
#include	<stdarg.h>


#include "stm32f10x.h"
#include "global.h"
#include "cancom.h"
#include "uartcom.h"
#include "pducom.h"
#include "cancom.h" 



typedef unsigned char  uint8;                   /* defined for unsigned 8-bits integer variable 	�޷���8λ���ͱ���  */
typedef signed   char  int8;                    /* defined for signed 8-bits integer variable		�з���8λ���ͱ���  */
typedef unsigned short int   uint16;                  /* defined for unsigned 16-bits integer variable 	�޷���16λ���ͱ��� */
typedef signed   short int   int16;                   /* defined for signed 16-bits integer variable 		�з���16λ���ͱ��� */
typedef unsigned int  uint32;                  /* defined for unsigned 32-bits integer variable 	�޷���32λ���ͱ��� */
typedef signed   int  int32;                   /* defined for signed 32-bits integer variable 		�з���32λ���ͱ��� */
typedef float           fp32;                    /* single precision floating point variable (32bits) �����ȸ�������32λ���ȣ� */
typedef double         fp64;                    /* double precision floating point variable (64bits) ˫���ȸ�������64λ���ȣ� */
typedef unsigned long uint64;
typedef signed long int64;

#endif