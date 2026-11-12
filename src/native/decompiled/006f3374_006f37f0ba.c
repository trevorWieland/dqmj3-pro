#include "006f3374_006f37f0ba.h"



int fn_006f352c(int param_1)

{
  short *psVar1;
  short local_10 [2];
  short local_c [4];
  short local_4 [2];
  
  local_4[0] = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x3e);
  psVar1 = local_10;
  if (0 < local_4[0]) {
    psVar1 = local_4;
  }
  local_10[0] = 1;
  local_c[0] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c;
  }
  return (int)*psVar1;
}



byte fn_006f3500(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x7e);
  bVar4 = cVar1 != '\0';
  if (!bVar4) {
    cVar1 = *(char *)(param_1 + 0xb7);
  }
  if ((bVar4 || cVar1 != '\0') ||
     (bVar2 = *(byte *)(param_1 + 0x353) >> 5, bVar3 = bVar2 & 1, (bVar2 & 1) != 0)) {
    bVar3 = 1;
  }
  return bVar3;
}



byte fn_006f34d4(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x7f);
  bVar4 = cVar1 != '\0';
  if (!bVar4) {
    cVar1 = *(char *)(param_1 + 0xb8);
  }
  if ((bVar4 || cVar1 != '\0') ||
     (bVar2 = *(byte *)(param_1 + 0x353) >> 6, bVar3 = bVar2 & 1, (bVar2 & 1) != 0)) {
    bVar3 = 1;
  }
  return bVar3;
}


