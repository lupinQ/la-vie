#ifndef __STDARG_H__
#define __STDARG_H__

typedef char *va_list;

#define va_arg(ap,T)
        (*(T *)(((ap) += _Bnd(T,3U)) - _Bnd(T,3U)))//T为类型，先令指针指向下个参数，然后取出上个参数的内容
#define va_end(ap) (void)0

#define va_start(ap,A)\
        (void)((ap)=(char *)&(A) + _Bnd(A,3U))//令ap指向下一个参数

#define _Bnd(X,bnd)     (sizeof(X)+(bnd)& ~(bnd))/*对4的整数倍向上取整*/

#endif
