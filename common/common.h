#ifndef __COMMON_H
#define __COMMON_H
// ***************************************************************
// Name		: common.h
// Purpose	: 一些数据类型的宏定义
// Author	: DongDL
// Version	: v1.0
// History	: 2021年7月28日被DongDL创建
// ***************************************************************

/*
 * 自定义一些数据类型供库文件使用
 */
#define		__I						volatile 
#define		__O						volatile 
#define		__IO					volatile

#define		ON						1
#define		OFF						0

#define		SUCCESS					1
#define		FAIL					0

#define		NONE					1
#define		ERROR					(-1)

#ifndef		NULL
#define		NULL					0
#endif

typedef		signed char				int8_t;
typedef		signed short int		int16_t;
typedef		signed int				int32_t;
typedef		unsigned char			uint8_t;
typedef		unsigned short int		uint16_t;
typedef		unsigned int			uint32_t;
typedef		unsigned long long		uint64_t;
typedef		signed char				s8;		
typedef		signed short int		s16;
typedef		signed int				s32;
typedef		signed long long int	s64;
typedef		unsigned char			u8;
typedef		unsigned short int		u16;
typedef		unsigned int			u32;
typedef		unsigned long long int	u64;


#endif
