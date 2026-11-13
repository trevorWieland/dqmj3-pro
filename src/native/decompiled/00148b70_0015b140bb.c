#include "00148b70_0015b140bb.h"

static void svc_0x17(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x17 }
#endif
}


void fn_0015b140(undefined4 param_1,char *param_2,undefined4 param_3)

{
  undefined1 auStack_90 [132];
  
  fn_00101a50(auStack_90,0x80,L"patch:/data/Motion/%s.bch",param_3);
  fn_0016b874(param_1,2,(int)*param_2,auStack_90,1,0);
  return;
}



void fn_0015b114(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016e350();
  *puVar1 = &DAT_0081d114;
  return;
}



void fn_00158ef8(undefined4 *param_1,undefined4 param_2)

{
  svc_0x17();
  *param_1 = param_2;
  return;
}



void fn_00157dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  uStack_10 = 0;
  local_14 = param_2;
  local_c = param_3;
  fn_00166b2c(param_1,&LAB_00158fac,&local_14,param_4,param_5);
  return;
}



void fn_00156f48(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_008bf798;
  if (param_1 == 0) {
    return;
  }
  for (iVar2 = *DAT_008bf798; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x24)) {
    iVar3 = 0;
    do {
      puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x10);
      if (puVar4[3] == param_1) {
        if (piVar1[2] == iVar2) {
          *DAT_008bfab0 = *DAT_008bfab0 | 1;
        }
        puVar4[3] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  return;
}


