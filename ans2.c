#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPose1, UINT iPose2)
{
    UINT iMask1 =0X00000001;
    UINT iMask2 =0X00000001;
    UINT iMask3 =0X00000001;
    UINT iResult =0;
   

    iMask3 = iMask1 << (iPose1 -1) || iMask2 << (iPose2 -1) ;
    iResult = iNo & iMask3;

    if(iResult == iMask3)
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
  UINT iValue1 =0;
  UINT iValue2 =0;
  
  bool bRet = false;

  printf("enter number\n");
  scanf("%d",&iValue1);

  printf("enter number\n");
  scanf("%d",&iValue2);

  
  bRet= CheckBit(iValue1,iValue2);

  if(bRet == true)
  {
    printf("bit is ON\n");
  }
  else
  {
    printf("bit is OFF\n");
  }

  return 0;
}