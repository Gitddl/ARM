@ *****************************************************************************
@ Name		: start.s
@ Purpose	: 启动文件
@ Author	: DongDL
@ History	:2021年7月26日被DongDL创建
@ *****************************************************************************

.global _start				//全局标号

_start:

	@ 进入SVC模式
	mrs	r0,		cpsr
	bic	r0,		r0,		#0x1f		@ cpsr的低5位为工作模式控制位
	orr	r0,		r0,		#0x13
	msr	cpsr,	r0					@ 将0x13写入cpsr

	idr sp,		=0x80200000			@设置栈指针

	b	bspinit					@跳转到BSPinit
	b	main						@跳转到main


























