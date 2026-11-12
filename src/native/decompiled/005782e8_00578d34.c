#include "005782e8_00578d34.h"



void fn_00578d34(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_4 == 0) {
    iVar3 = *(int *)(param_1 + param_3 * 0x24 + 0x114);
    uVar1 = *(undefined4 *)(iVar3 + 0x54);
    uVar2 = *(undefined4 *)(iVar3 + 100);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x54);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 100);
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



void fn_00578cc8(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00578cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x150) + 0xc))();
    return;
  }
  uVar1 = 0;
  do {
    (**(code **)(**(int **)(param_1 + uVar1 * 0x24 + 0x11c) + 0xc))();
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}



uint fn_00578c58(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  uVar2 = *(uint *)(param_1 + 0x11c);
  uVar3 = *(uint *)(param_1 + 0x150);
  bVar1 = *(float *)(uVar2 + 0x24) == 0.0;
  fVar4 = *(float *)(uVar3 + 0x24);
  if (bVar1) {
    uVar2 = 1;
  }
  if (!bVar1) {
    uVar2 = 0;
  }
  if (fVar4 == 0.0) {
    uVar3 = 1;
  }
  if (fVar4 != 0.0) {
    uVar3 = 0;
  }
  return (uint)(*(float *)(*(int *)(param_1 + 0x140) + 0x24) == 0.0) & uVar2 & uVar3 &
         (uint)(fVar4 == 0.0);
}



void fn_00578bc0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_2 == 3) {
    fn_00578b50(param_1,0);
    fn_00578b50(param_1,1);
    return;
  }
  if (param_3 == 0) {
    fn_00578b50();
    return;
  }
  piVar1 = *(int **)(param_1 + param_2 * 0x24 + 0x11c);
  (**(code **)(*piVar1 + 0x10))(piVar1,0);
  (**(code **)(**(int **)(param_1 + 0x150) + 0x10))(*(int **)(param_1 + 0x150),1);
  *(byte *)(*(int *)(param_1 + 0x144) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x144) + 0x44) & 0xfe | 1;
                    /* WARNING: Could not recover jumptable at 0x00578c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x150) + 0x54))();
  return;
}



void fn_00578b50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x150) + 0x10))(*(int **)(param_1 + 0x150),0);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x10))(*(int **)(param_1 + 0x11c),1);
  }
  param_1 = param_1 + param_2 * 0x24;
  iVar1 = *(int *)(param_1 + 0x110);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
                    /* WARNING: Could not recover jumptable at 0x00578bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x54))();
  return;
}



undefined4 * fn_005789fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043ccd8(param_1,param_2,(char *)&DAT_00578aa0,0xd4);
  *puVar1 = &DAT_008414c4;
  puVar1[0x34] = 1;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3e] = 0;
  fn_00301f50(puVar1 + 0x3f,0xb0);
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  *(undefined1 *)(puVar1 + 0x72) = 0;
  *(undefined1 *)((int)puVar1 + 0x1c9) = 0;
  *(undefined1 *)((int)puVar1 + 0x1ca) = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  fn_00301f50(puVar1 + 0x78,0x284);
  return puVar1;
}



undefined4 fn_0057887c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char local_30 [24];
  
  iVar2 = param_1 + param_2 * 0x50;
  uVar1 = *(undefined1 *)(iVar2 + 0x228);
  uVar5 = *(uint *)(iVar2 + 0x220);
  uVar6 = *(uint *)(iVar2 + 0x224);
  puVar3 = (undefined1 *)fn_00113c58(local_30);
  *puVar3 = (char)(uVar5 >> 8);
  fn_0037cbe0(puVar3,(uVar5 & 0xffffff) >> 0x10);
  fn_0037cad0(puVar3,uVar5 >> 0x18);
  fn_0037cb60(puVar3,uVar6 & 0xff);
  fn_0037cac0(puVar3,(uVar6 & 0xffffff) >> 0x10);
  fn_0037cb40(puVar3,uVar6 >> 0x18);
  fn_0037cb0c(puVar3,uVar1);
  pcVar7 = *(char **)(*(int *)(*(int *)(param_1 + 0x1b0) + 0x3c) + 8);
  if (local_30[0] != *pcVar7) {
    return 0;
  }
  if (local_30[0] == '\x06') {
    iVar2 = fn_006c4734(local_30);
    iVar4 = fn_006c4734(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
    iVar2 = fn_006c40c8(local_30);
    iVar4 = fn_006c40c8(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
    iVar2 = fn_006c41e4(local_30);
    iVar4 = fn_006c41e4(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
    iVar2 = fn_006c4094(local_30);
    iVar4 = fn_006c4094(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
    iVar2 = fn_006c417c(local_30);
    iVar4 = fn_006c417c(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
    iVar2 = fn_006c4120(local_30);
    iVar4 = fn_006c4120(pcVar7);
    if (iVar2 != iVar4) {
      return 0;
    }
  }
  return 1;
}



void fn_00578680(int param_1)

{
  fn_00748448();
  fn_00578710(param_1);
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(int *)(param_1 + 0xd0) < 0x11) {
      fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x44));
    }
    if (0xd < *(int *)(param_1 + 0xd0)) goto LAB_005786c8;
  }
  fn_005f6270(*(undefined4 *)(param_1 + 0x1c0));
LAB_005786c8:
  fn_0057701c(param_1);
  fn_00577f4c(param_1);
  if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xdc) != 1 && *(int *)(param_1 + 0xdc) != 2) {
    fn_005782e8(param_1);
  }
  fn_00578204(param_1);
  return;
}



void fn_00578710(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0xd0);
    if (iVar3 == 6) {
      if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) == '\0') {
        fn_00689efc(param_1,0x7a,0);
      }
      else {
        fn_00689efc(param_1,0x39,0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 1;
      if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) != '\0') {
        *(undefined4 *)(param_1 + 0xd8) = 1;
      }
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      uVar2 = fn_0066eb80(DAT_00898840,2);
      fn_0066f2f0(uVar2,param_1 + 0x1cc,0x14);
      return;
    }
    if (((iVar3 < 7) && (iVar3 != 1)) && (iVar3 == 2)) {
      if (cVar1 == '\x03') {
        fn_0015b0dc(param_1 + *(int *)(param_1 + 0xe4) * 0x16 + 0xfc);
        fn_0074804c(param_1,DAT_00898214,(char *)&DAT_0057885c);
        if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) == '\0') {
          *(undefined4 *)(param_1 + 0xd0) = 4;
          *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0xf8);
          uVar2 = fn_0066eb80(DAT_00898840,2);
          fn_0066f2f0(uVar2,param_1 + 0x1cc,0x14);
          return;
        }
        *(undefined4 *)(param_1 + 0xd0) = 3;
      }
      else if (cVar1 == '\x02') {
        *(undefined4 *)(param_1 + 0xd0) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
    }
  }
  return;
}



void fn_005782e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_140;
  undefined2 local_13c;
  undefined1 local_13a;
  undefined4 local_138;
  undefined1 auStack_134 [256];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0x44);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      if (*(int *)(param_1 + 0xdc) == 0 || *(int *)(param_1 + 0xdc) == 3) {
        local_13c = 0;
        local_13a = 1;
        local_140 = 0;
        local_138 = 0;
        fn_00301f50(auStack_134,0x100);
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        local_28 = 0;
        local_18 = 0;
        uVar2 = *(undefined4 *)(param_1 + 0xf8);
        local_13c = 2;
        local_140 = 5;
        local_13a = 2;
        if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) != '\0') {
          uVar2 = fn_0052c888();
        }
        local_30 = 0;
        local_20 = 0;
        local_34 = uVar2;
        local_24 = uVar2;
        fn_00675b38(uVar3,2,&local_140);
        *(undefined4 *)(param_1 + 0xd8) = 2;
        return;
      }
    }
    else if (iVar1 == 2) {
      fn_0066eb80(DAT_00898840,3);
      iVar1 = fn_0066a53c();
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x1d0) = iVar1;
        *(undefined4 *)(param_1 + 0xd8) = 3;
      }
    }
  }
  return;
}


