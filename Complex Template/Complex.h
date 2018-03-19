#ifndef __Complex_H  // 避免重复包含
#define __Complex_H

// 复数类型定义
typedef struct{
    float real, imag;  // 实部和虚部
}Complex;

// 函数声明
Status InitComplex(Complex &z, float v1, float v2);
Status GetReal(Complex x, float &RealPart);
Status GetImag(Complex x, float &ImagPart);
Status Add(Complex z1, Complex z2, Complex &sum);


#endif
/********************************END OF FILE***********************************/
