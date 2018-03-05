/**
  ******************************************************************************
  * @file    main.cpp
  * @author  jing
  * @version V1.0
  * @date    2018-03-05
  * @brief   进行复数计算
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */
  
#include <stdio.h>
#include "FunctionStateCode.h"
#include "Complex.h"

/**
  * @brief   进行复数计算
  * @param   None
  * @retval  0
  */
int main(void)
{
    Complex z1, z2, sum;
    float Real, Imag;

    InitComplex(z1, 7.0, 8.0);  // z1 = 7+8i
    InitComplex(z2, 5.0, 4.0);  // z2 = 5+4i
    Add(z1, z2, sum);           // sum = z1+z2
    GetReal(sum, Real); GetImag(sum, Imag);
    printf("sum=%f+%fi\n", Real, Imag);

	return 0;
}

/********************************END OF FILE***********************************/
