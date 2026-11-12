#include "00507bf4_00508974b.h"



void fn_00508974(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x14) = 0xfd;
  if ((*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) &&
     (uVar1 = 0, *(int *)(param_1 + 0x1c) != 0)) {
    do {
      fn_0050a678(*(int *)(param_1 + 0x18) + uVar1 * 0x60);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x1c));
  }
  return;
}



undefined1 * fn_0050877c(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uStack_2c;
  uint local_28 [3];
  uint local_1c;
  
  piVar4 = *(int **)(param_1 + 0x10);
  puVar5 = &DAT_e0a14827;
  if ((piVar4 + -0x40000 < (int *)0x3ff00000) && (*(byte *)(param_1 + 0x14) != param_2)) {
    uVar1 = *param_3;
    local_28[0] = ((uVar1 >> 0x10) << 0x18 | (uVar1 >> 0x18) << 0x10) >> 0x10 |
                  ((uVar1 & 0xff) << 8 | uVar1 >> 8 & 0xff) << 0x10;
    local_28[1] = 0;
    uVar1 = (param_3[3] & 0xffff00ff) << 8 | (param_3[3] & 0xff00ff00) >> 8;
    uVar3 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
    local_1c = uVar3 >> 0x10 | uVar3 << 0x10;
    local_28[2] = uVar1 << 0x10 | uVar1 >> 0x10;
    uStack_2c = *(undefined4 *)(param_1 + 0xc);
    iVar2 = (**(code **)(*piVar4 + 0x10))(piVar4,&uStack_2c,param_2,0x10,0);
    if (iVar2 == 0) {
      return (undefined1 *)0x0;
    }
    fn_001694d4(iVar2,local_28);
    puVar5 = (undefined1 *)fn_0050a490(piVar4);
    if (-1 < (int)puVar5) {
      return (undefined1 *)0x0;
    }
  }
  return puVar5;
}



longlong fn_00508580(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x14);
  if (uVar2 == 0xfd) {
    uVar3 = 0xfd;
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    return CONCAT44(uVar3,&DAT_e0a14827);
  }
  uVar1 = (uint)*(byte *)(param_2 + 5);
  if (uVar1 < (*(uint *)(param_1 + 0x1c) & 0xff)) {
    if (uVar1 != uVar2) {
      uVar2 = (uint)*(byte *)(param_2 + 4);
      if (uVar2 == 0) {
        fn_0050a6a8(*(int *)(param_1 + 0x18) + uVar1 * 0x60);
        fn_00508b3c(param_1,*(undefined1 *)(param_2 + 5));
        fn_0050a62c(*(int *)(param_1 + 0x18) + (uint)*(byte *)(param_2 + 5) * 0x60,DAT_008bf4d4 + 8
                    );
        uVar2 = extraout_r1;
      }
      else {
        if (uVar2 != 1) {
          if (DAT_008c0630 != 0) {
            uVar2 = 8;
          }
          goto LAB_005086bc;
        }
        fn_0050a678(*(int *)(param_1 + 0x18) + uVar1 * 0x60);
        uVar2 = extraout_r1_00;
      }
      return (ulonglong)uVar2 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar2 = 8;
  }
LAB_005086bc:
  return CONCAT44(uVar2,0xe0e14826);
}



undefined8 fn_00508398(int param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    uVar4 = param_2;
    if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
    puVar1 = &DAT_e0a14821;
  }
  else {
    if ((param_2 == 0) || (0xc < param_2)) {
      if (DAT_008c0630 != 0) {
        param_2 = 8;
      }
      return CONCAT44(param_2,0xe0e14826);
    }
    puVar2 = (undefined4 *)fn_00656df8(param_2 * 0x60 + 8);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x60;
      puVar2[1] = param_2;
      iVar3 = fn_00101a1c(puVar2 + 2,&LAB_0050a6d0,0x60,param_2);
    }
    uVar4 = iVar3 - 0x100000;
    *(int *)(param_1 + 0x18) = iVar3;
    if (0x3fefffff < uVar4) {
      if (DAT_008c0630 != 0) {
        uVar4 = 8;
      }
      return CONCAT44(uVar4,0xe0614820);
    }
    puVar1 = (undefined1 *)0x0;
    *(uint *)(param_1 + 0x1c) = param_2;
  }
  return CONCAT44(uVar4,puVar1);
}



undefined8 fn_0050823c(void)

{
  undefined4 uVar1;
  undefined *local_18;
  char *local_14;
  
  uVar1 = 0x4000110;
  if (DAT_008bf4c8 == '\0') {
    local_14 = "pia transport heap";
    local_18 = &DAT_00859700;
    fn_004ed230(4,0,&local_18);
    DAT_008bf4c8 = 1;
    return 0x100000000;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,&DAT_e0a14821);
}



longlong fn_00508070(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint extraout_r1;
  
  uVar1 = (uint)DAT_008bf4c8;
  if (uVar1 == 0) {
    uVar2 = 0;
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    return CONCAT44(uVar2,&DAT_e0a1482b);
  }
  if (DAT_008bf4c9 == '\0') {
    fn_004ed204(4);
    DAT_008bf4c9 = 1;
    return (ulonglong)extraout_r1 << 0x20;
  }
  if (DAT_008c0630 != 0) {
    uVar1 = 8;
  }
  return CONCAT44(uVar1,&DAT_e0a14827);
}


