#include "0028bcb0_0028c190.h"



void fn_0028c12c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  if (param_3 == 0 && param_4 == 0) {
    return;
  }
  local_18[0] = param_3 != 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  local_b = 0;
  if (param_4 != 0) {
    local_18[0] = local_18[0] | 2;
  }
  fn_0028c190(param_1,local_18,param_2,param_5);
  return;
}



void fn_0028c190(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = fn_0028c0f0(param_1,param_3);
  if (iVar1 == 0) {
    param_2[1] = param_3;
    param_2[2] = param_4;
    piVar2 = (int *)param_1[1];
    iVar1 = param_1[4];
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)param_1[2];
      if (piVar2 == (int *)param_1[3]) {
        if (*param_1 == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar3 = *(uint *)(*param_1 + 4);
          uVar5 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar5 < uVar3 + 0x20) {
            uVar5 = uVar3 + 0x20;
          }
        }
        piVar2 = (int *)fn_00100fc6(0xc,0);
        iVar4 = fn_00100fc6(uVar5 * 0x18,0);
        piVar2[2] = iVar4;
        *piVar2 = *param_1;
        piVar2[1] = uVar5;
        *param_1 = (int)piVar2;
        piVar2 = (int *)piVar2[2];
        param_1[2] = (int)piVar2;
        param_1[3] = (int)(piVar2 + uVar5 * 6);
      }
      param_1[2] = (int)(piVar2 + 6);
    }
    else {
      param_1[1] = *piVar2;
    }
    if (piVar2 + 2 != (int *)0x0) {
      iVar4 = param_2[1];
      iVar6 = param_2[2];
      iVar7 = param_2[3];
      piVar2[2] = *param_2;
      piVar2[3] = iVar4;
      piVar2[4] = iVar6;
      piVar2[5] = iVar7;
    }
    *piVar2 = iVar1;
    piVar2[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    param_1[5] = param_1[5] + 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0028c034) */
/* WARNING: Removing unreachable block (ram,0x0028c038) */
/* WARNING: Removing unreachable block (ram,0x0028c03c) */

void fn_0028c0e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  pbVar1 = (byte *)fn_0028c0f0(*(undefined4 *)(param_1 + 8));
  if (pbVar1 != (byte *)0x0) {
    if (*pbVar1 != 0) {
      if ((*pbVar1 & 4) != 0) {
        uStack_18 = 0xff000000;
        fn_00163988(DAT_00897808,&uStack_18,*(undefined4 *)(pbVar1 + 8));
      }
      if ((*pbVar1 & 8) != 0) {
        uStack_18 = 0xff000000;
        fn_00163988(DAT_0089780c,&uStack_18,*(undefined4 *)(pbVar1 + 8));
      }
    }
    pbVar1[0xc] = 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0028c044) */
/* WARNING: Removing unreachable block (ram,0x0028c040) */
/* WARNING: Removing unreachable block (ram,0x0028c048) */

void fn_0028c0d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  undefined4 local_18;
  
  local_18 = param_4;
  pbVar1 = (byte *)fn_0028c0f0(*(undefined4 *)(param_1 + 8));
  if (pbVar1 != (byte *)0x0) {
    if (*pbVar1 != 0) {
      if ((*pbVar1 & 1) != 0) {
        local_18 = 0;
        fn_00163988(DAT_00897808,&local_18,*(undefined4 *)(pbVar1 + 8));
      }
      if ((*pbVar1 & 2) != 0) {
        local_18 = 0;
        fn_00163988(DAT_0089780c,&local_18,*(undefined4 *)(pbVar1 + 8));
      }
    }
    pbVar1[0xc] = 1;
  }
  return;
}



int * fn_0028c0f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)0x0;
  piVar3 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)*piVar3;
  if (piVar2 != piVar3) {
    while (piVar2[3] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar3) {
        return (int *)0x0;
      }
    }
    piVar1 = piVar2 + 2;
  }
  return piVar1;
}



void fn_0028bf94(undefined4 *param_1)

{
  *param_1 = &DAT_0081e17c;
  if (param_1[3] != -1) {
    fn_0025fa58(DAT_00897800);
    param_1[3] = 0xffffffff;
  }
  if (param_1[2] != 0) {
    fn_00289c54();
    if (param_1[2] != 0) {
      fn_00289ca8();
      fn_002feef8();
      param_1[2] = 0;
    }
  }
  fn_002feef8(param_1);
  return;
}



void fn_0028bf74(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_0081e17c;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  return;
}



void fn_0028bf3c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == -1) {
    uVar1 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return;
}



void fn_0028bed4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00289c84();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_00289ca8(iVar1);
      fn_002feef8();
    }
    *(int *)(param_1 + 8) = iVar2;
  }
  fn_00289bac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4));
  return;
}



void fn_0028be4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  
  uVar1 = fn_0068897c(*(undefined4 *)(param_2 + 0x10),param_4);
  fn_001028d4(auStack_28,(char *)&DAT_006b8818,param_3);
  uVar2 = fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0xc),auStack_28);
  fn_00190d50(uVar1,uVar2);
  uVar1 = fn_001828f0(param_2,param_5);
  fn_00289ac0(*(undefined4 *)(param_1 + 8),uVar1,param_3);
  return;
}



int fn_0028be30(int param_1)

{
  return (int)*(short *)(DAT_00892824 + param_1 * 6 + 2);
}



int fn_0028be14(int param_1)

{
  return (int)*(short *)(DAT_00892824 + param_1 * 6 + 4);
}



void fn_0028bdfc(void)

{
  DAT_00892824 = 0;
  DAT_00892828 = 0;
  return;
}



undefined1 fn_0028bde4(int param_1)

{
  return *(undefined1 *)(DAT_00892824 + param_1 * 6);
}



undefined4 fn_0028bd54(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_0028bdd8,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 6;
  iVar2 = 0;
  DAT_00892828 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892828 = 0;
  }
  DAT_00892824 = param_1;
  return 1;
}



undefined4 fn_0028bcf4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006b7b54(*(undefined4 *)(DAT_00897804 + 0x24),param_1);
  if ((iVar1 == 0) &&
     ((iVar1 = fn_006b8370(*(undefined4 *)(DAT_00897804 + 0x24),param_1), iVar1 == 0 ||
      (iVar1 = fn_002e322c(param_1), iVar1 != 0)))) {
    return 0;
  }
  return 1;
}



bool fn_0028bcb0(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = fn_006a7b08(param_1);
  return iVar1 != 0;
}


