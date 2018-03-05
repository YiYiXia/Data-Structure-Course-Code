/**
  ******************************************************************************
  * @file    Complex.cpp
  * @author  jing
  * @version V1.0
  * @date    2018-03-05
  * @brief   复数数据结构的实现
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */
  
#include "FunctionStateCode.h"
#include "Complex.h"

/**
  * @brief   初始化复数
  * @param
    * z: 需要初始化的复数
    * v1: 复数的实部
    * v2: 复数的虚部
  * @retval  初始化成功返回OK
  */
Status InitComplex(Complex &z, float v1, float v2){
    z.real = v1;
    z.imag = v2;
    return OK;
}

/**
  * @brief   取得已知复数的实部
  * @param   
    * z: 复数
    * RealPart: 返回的复数的实部
  * @retval  操作完成返回OK
  */
Status GetReal(Complex z, float &RealPart){
    RealPart = z.real;
    return OK;
}


/**
  * @brief   取得已知复数的虚部
  * @param   
    * z: 复数
    * ImagPart: 返回的复数的虚部
  * @retval  操作完成返回OK
  */
Status GetImag(Complex z, float &ImagPart){
    ImagPart = z.imag;
    return OK;
}


/**
  * @brief   计算两个复数z1和z2的和sum
  * @param   
    * z1, z2: 求和的两个复数
    * sum: 返回求和结果
  * @retval  操作成功返回OK
  */
Status Add(Complex z1, Complex z2, Complex &sum){
    sum.real = z1.real + z2.real;
    sum.imag = z1.imag + z2.imag;
    return OK;
}


/********************************END OF FILE***********************************/
