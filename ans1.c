#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
  UNIT iMask = 0X00004000;
  UNIT iResult =0;

  iResult = iNo & iMask;
  
  if(iResult == iMask)
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main()
{
  UNIT iValue =0;
  bool bRet = false;

  printf("enter number\n");
  scanf("%d",&iValue);

  bRet= ChkBit(iValue);

  if(bRet == true)
  {
    printf("15th bit is ON\n");
  }
  else
  {
    printf("15th bit is OFF\n");
  }

  return 0;
}