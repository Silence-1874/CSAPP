/*
 * 已知信息如下。将一个原型为
 * void decode1(long *xp, long *yp, long *zp);
 * 的函数编译成汇编代码，得到如下代码:
 *   void decode1(long *xp, long *yp, long *zp)
 *   xp in %rdi, yp in %rsi, zp in %rdx
 * decode1:
 *   movq		(%rdi), %r8
 *   movq		(%rsi), %rcx
 *   movq		(%rdx), %rax	
 *   movq		%r8,	(%rsi)
 *   movq		%rcx,   (%rdx)
 *   movq		%rax,   (%rdi)
 *   ret
 *
 * 参数xp、yp和zp分别存储在对应的寄存器％rdi、％rsi和%rdx中。
 * 	请写出等效于上面汇编代码的decode1的C代码。
 */
void decode1(long *xp, long *yp, long *zp)
{
	long a = *xp;
	long b = *yp;
	long c = *zp;
	*yp = a;
	*zp = b;
	*xp = c;
}
