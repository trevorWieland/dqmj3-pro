#include "005de83c_005df130bba.h"



int fn_005df030(int param_1,int param_2,short *param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  char **ppcVar5;
  char *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = 0;
  iVar4 = 0;
  local_30 = (char *)((int)"dmp_FragmentLightSource[3].enabled" + 6);
  uStack_2c = 0x460088;
  uStack_28 = 0x480047;
  uStack_24 = 0x4a0049;
  uStack_20 = 0x4c004b;
  uStack_1c = 0x4e004d;
  if (0 < param_2) {
    do {
      iVar3 = 0xc;
      psVar2 = param_3;
      ppcVar5 = &local_30;
      do {
        if ((uint)*(ushort *)ppcVar5 == (int)*(short *)(param_1 + iVar4 * 2)) {
          iVar1 = (int)(short)((short)iVar1 + *psVar2);
        }
        iVar3 = iVar3 + -1;
        psVar2 = psVar2 + 1;
        ppcVar5 = (char **)((int)ppcVar5 + 2);
      } while (iVar3 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return iVar1;
}


