#include "0050e420_0050ef00.h"



void fn_0050ef00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00518610();
  puVar1[0x20] = 0;
  *puVar1 = &DAT_008570ec;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return;
}



void fn_0050eee8(int param_1)

{
  fn_00518378();
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



void fn_0050eec4(int param_1)

{
  if (*(int *)(param_1 + 0x5c) - 1U < 0xfe) {
    DAT_008ee068 = (undefined1)*(int *)(param_1 + 0x5c);
  }
  else {
    DAT_008ee068 = 0xff;
  }
  return;
}



undefined1 *
fn_0050ec34(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x80) - 0x100000U < 0x3ff00000) {
    puVar1 = &DAT_e0a14821;
  }
  else if (param_2 - 0x100000U < 0x3ff00000) {
    if (DAT_008bf4a0 != 0) {
      uVar2 = fn_004eea84(DAT_008bf4a0,0);
      fn_004f161c(uVar2,(char *)&DAT_0050ed14);
    }
    puVar1 = (undefined1 *)
             fn_0051845c(param_1,(char *)&DAT_0050ed30,param_4,param_3,param_5,param_6,0);
    if (-1 < (int)puVar1) {
      if (*(int *)(param_1 + 100) - 0x100000U < 0x3ff00000) {
        *(int *)(*(int *)(param_1 + 100) + 0x18) = param_2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      puVar1 = (undefined1 *)0x0;
      *(int *)(param_1 + 0x80) = param_2;
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}



void fn_0050eb9c(undefined4 *param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &DAT_008570c0;
  iVar4 = param_1[7];
  *(undefined1 *)(param_1 + 5) = 0xfd;
  param_1[6] = 0;
  if (iVar4 != 0) {
    uVar1 = fn_00656b0c(iVar4);
    uVar3 = 0;
    iVar2 = uVar1 * 0x4ec4ec4f;
    if (uVar1 / 0x68 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + uVar3 * 0x68))();
        uVar3 = uVar3 + 1;
        iVar2 = extraout_r1;
      } while (uVar3 < uVar1 / 0x68);
    }
    fn_00656b7c(iVar4,iVar2);
    param_1[7] = 0;
  }
  fn_004ecfd0(param_1);
  return;
}



undefined4 * fn_0050eadc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = &DAT_008570c0;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  if (DAT_008bf4a0 != 0) {
    uVar2 = fn_004eea84(DAT_008bf4a0,3);
    fn_004f161c(uVar2,(char *)&DAT_0050eb54);
    if (DAT_008bf4a0 != 0) {
      uVar2 = fn_004eea84(DAT_008bf4a0,4);
      fn_004f161c(uVar2,(char *)&DAT_0050eb78);
    }
  }
  return puVar1;
}



void fn_0050ea60(int param_1)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x14) = 0xfd;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar4 != 0) {
    uVar1 = fn_00656b0c(iVar4);
    uVar3 = 0;
    iVar2 = uVar1 * 0x4ec4ec4f;
    if (uVar1 / 0x68 != 0) {
      do {
        (*(code *)**(undefined4 **)(iVar4 + uVar3 * 0x68))();
        uVar3 = uVar3 + 1;
        iVar2 = extraout_r1;
      } while (uVar3 < uVar1 / 0x68);
    }
    fn_00656b7c(iVar4,iVar2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



undefined4 fn_0050e7d8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0x14) != -3) {
    local_20 = *(undefined4 *)(param_1 + 0xc);
    puVar1 = (undefined4 *)fn_0050953c(*(undefined4 *)(param_1 + 0x10),&local_20);
    (**(code **)(*(int *)*puVar1 + 0x28))();
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))();
    while (iVar2 == 0) {
      iVar2 = fn_006d9a38(puVar1);
      uVar5 = (uint)*(byte *)(*(int *)(iVar2 + 4) + 1);
      if (uVar5 < (*(uint *)(param_1 + 0x18) & 0xff)) {
        uVar3 = (uint)*(byte *)(param_1 + 0x14);
        bVar8 = uVar3 < uVar5;
        bVar7 = uVar3 != uVar5;
        if (bVar7) {
          uVar3 = *(uint *)(param_1 + 0x1c);
        }
        if (bVar8) {
          uVar5 = uVar5 - 1;
        }
        if (bVar7) {
          iVar6 = uVar3 + uVar5 * 0x68;
          iVar4 = fn_006db038(iVar6);
          if (((iVar4 != 0) && (iVar2 = fn_005171e8(iVar6,iVar2), -1 < iVar2)) &&
             (DAT_008bf4a0 != 0)) {
            uVar9 = fn_004eea84(DAT_008bf4a0,3);
            fn_004f15b4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined4 *)(iVar6 + 0x1c),0)
            ;
            if (DAT_008bf4a0 != 0) {
              uVar9 = fn_004eea84(DAT_008bf4a0,4);
              fn_004f15b4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined4 *)(iVar6 + 0x30),
                           0);
            }
          }
        }
      }
      (**(code **)(*(int *)*puVar1 + 0x30))();
      iVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))();
    }
    uVar5 = *(int *)(param_1 + 0x20) + 1;
    uVar3 = *(int *)(param_1 + 0x18) - 1;
    *(uint *)(param_1 + 0x20) = uVar5;
    if (uVar3 <= uVar5) {
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    for (; uVar5 < uVar3; uVar5 = uVar5 + 1) {
      iVar2 = fn_006db038(*(int *)(param_1 + 0x1c) + uVar5 * 0x68);
      if (iVar2 != 0) {
        fn_00517930(*(int *)(param_1 + 0x1c) + uVar5 * 0x68,*(undefined4 *)(param_1 + 0x10));
      }
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        iVar2 = fn_006db038(*(int *)(param_1 + 0x1c) + uVar5 * 0x68);
        if (iVar2 != 0) {
          fn_00517930(*(int *)(param_1 + 0x1c) + uVar5 * 0x68,*(undefined4 *)(param_1 + 0x10));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
    }
  }
  return 0;
}



void fn_0050e70c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x14) != -3) {
    iVar2 = *(int *)(param_1 + 0x18);
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0xfd;
    if (iVar2 != 1) {
      do {
        iVar1 = fn_006db038(*(int *)(param_1 + 0x1c) + uVar3 * 0x68);
        if (iVar1 != 0) {
          fn_005175e4(*(int *)(param_1 + 0x1c) + uVar3 * 0x68);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < iVar2 - 1U);
    }
  }
  return;
}



longlong fn_0050e420(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  int extraout_r1_00;
  int iVar3;
  uint extraout_r1_01;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14821);
  }
  *(undefined1 *)(param_1 + 0x14) = 0xfd;
  uVar5 = *(int *)(DAT_008bf4d4 + 0x30) - 1;
  *(int *)(param_1 + 0x18) = *(int *)(DAT_008bf4d4 + 0x30);
  uVar1 = fn_004ed2e8();
  uVar7 = fn_00656e14(uVar5 * 0x68,uVar1);
  uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar6 = (int)uVar7;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar5 != 0) {
      do {
        if (iVar6 + uVar4 * 0x68 != 0) {
          fn_00517f28();
          uVar2 = extraout_r1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
  }
  uVar4 = 0;
  *(int *)(param_1 + 0x1c) = iVar6;
  if (uVar5 != 0) {
    do {
      uVar7 = fn_00517050(*(int *)(param_1 + 0x1c) + uVar4 * 0x68,param_2,param_3);
      uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
      if ((int)uVar7 < 0) {
        iVar6 = *(int *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x14) = 0xfd;
        *(undefined4 *)(param_1 + 0x18) = 0;
        if (iVar6 != 0) {
          uVar2 = fn_00656b0c(iVar6);
          uVar5 = 0;
          iVar3 = uVar2 * 0x4ec4ec4f;
          if (uVar2 / 0x68 != 0) {
            do {
              (*(code *)**(undefined4 **)(iVar6 + uVar5 * 0x68))();
              uVar5 = uVar5 + 1;
              iVar3 = extraout_r1_00;
            } while (uVar5 < uVar2 / 0x68);
          }
          fn_00656b7c(iVar6,iVar3);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          uVar2 = extraout_r1_01;
        }
        return CONCAT44(uVar2,(int)uVar7);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  DAT_008ed940 = param_2;
  DAT_008ed944 = param_3;
  return (ulonglong)uVar2 << 0x20;
}


