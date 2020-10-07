#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
void calculate(int cgpa)
{

if(cgpa<5)
printf("D");
if(cgpa>5&&cgpa<=6)
printf("C");
if(cgpa>6&&cgpa<=7)
printf("B");
if(cgpa>7&&cgpa<=8)
printf("A");


}
#endif
