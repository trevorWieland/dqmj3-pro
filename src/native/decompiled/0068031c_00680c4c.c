#include "0068031c_00680c4c.h"



void fn_00680c4c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_2c [12];
  int local_20;
  undefined4 local_1c;
  
  pcVar4 = *(char **)(param_1 + 0xa8);
  bVar1 = true;
  pcVar2 = pcVar4;
  pcVar3 = *(char **)(pcVar4 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar1 = param_2 < *(int *)(pcVar3 + 0x10);
    pcVar2 = pcVar3;
    if (bVar1) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (bVar1) {
      if (pcVar2 == *(char **)(pcVar4 + 8)) goto LAB_00680cbc;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        pcVar2 = *(char **)(pcVar2 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar2 + 8);
        if (*(char **)(pcVar2 + 8) == (char *)0x0) {
          pcVar3 = pcVar2;
          pcVar2 = *(char **)(pcVar2 + 4);
          while (pcVar3 == *(char **)(pcVar2 + 8)) {
            pcVar3 = pcVar2;
            pcVar2 = *(char **)(pcVar2 + 4);
          }
        }
        else {
          do {
            pcVar2 = pcVar3;
            pcVar3 = *(char **)(pcVar2 + 0xc);
          } while (*(char **)(pcVar2 + 0xc) != (char *)0x0);
        }
      }
    }
    if (param_2 <= *(int *)(pcVar2 + 0x10)) {
      return;
    }
  }
LAB_00680cbc:
  local_20 = param_2;
  local_1c = param_3;
  fn_00774f8c(local_2c);
  return;
}



void fn_00680c44(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_2c [12];
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = *(char **)(*(int *)(param_1 + 0x14) + 0xa8);
  bVar1 = true;
  pcVar2 = pcVar4;
  pcVar3 = *(char **)(pcVar4 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar1 = param_2 < *(int *)(pcVar3 + 0x10);
    pcVar2 = pcVar3;
    if (bVar1) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0xb0) == '\0') {
    if (bVar1) {
      if (pcVar2 == *(char **)(pcVar4 + 8)) goto LAB_00680cbc;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        pcVar2 = *(char **)(pcVar2 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar2 + 8);
        if (*(char **)(pcVar2 + 8) == (char *)0x0) {
          pcVar3 = pcVar2;
          pcVar2 = *(char **)(pcVar2 + 4);
          while (pcVar3 == *(char **)(pcVar2 + 8)) {
            pcVar3 = pcVar2;
            pcVar2 = *(char **)(pcVar2 + 4);
          }
        }
        else {
          do {
            pcVar2 = pcVar3;
            pcVar3 = *(char **)(pcVar2 + 0xc);
          } while (*(char **)(pcVar2 + 0xc) != (char *)0x0);
        }
      }
    }
    if (param_2 <= *(int *)(pcVar2 + 0x10)) {
      return;
    }
  }
LAB_00680cbc:
  iStack_20 = param_2;
  uStack_1c = param_3;
  fn_00774f8c(auStack_2c);
  return;
}



bool fn_006805b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00561a34(param_1,param_2,0,param_3);
  return iVar1 == 1;
}



uint * fn_00680540(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1[5] != 0) {
    fn_006818c4();
    fn_002feef8();
    param_1[5] = 0;
  }
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 0xc;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 0xc,0);
  return param_1;
}



undefined4 * fn_006804ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0068177c();
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffff;
  param_1[5] = uVar2;
  param_1[8] = 0xffffffff;
  return param_1;
}



void fn_006804d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



void fn_0068031c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((char)param_1[6] != '\0') {
    *(undefined1 *)(param_1 + 6) = 0;
    uVar4 = *param_1;
    uVar6 = param_1[1];
    if (uVar4 != uVar6) {
      uVar1 = uVar4;
      if (uVar6 <= uVar4) {
        do {
          uVar1 = uVar1 + 0xc;
        } while (uVar1 != uVar6);
      }
      param_1[1] = uVar6 + ((int)(uVar6 - uVar4) / 0xc) * -0xc;
    }
    uVar4 = param_1[7];
    if ((-1 < (int)param_1[8] && -1 < (int)uVar4) && (param_1[8] != uVar4)) {
      iVar2 = fn_0067d3d8(param_1[4]);
      local_38[0] = (int *)(iVar2 + 0x6c);
      fn_0068095c(param_1[5],param_1[4],uVar4);
      fn_006805e8(param_1[5]);
      uVar4 = param_1[5];
      uVar6 = param_1[3];
      if (uVar6 == 1) {
        fn_0067fb7c(param_1);
      }
      else if (uVar6 == 2) {
        fn_0067fcd0(param_1);
      }
      else {
        if (uVar6 != 3) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        fn_0067ffdc(param_1);
      }
      if (*(int *)(uVar4 + 0x3c) != 0) {
        local_28 = *(undefined4 *)(uVar4 + 0x1c);
        local_24 = *(undefined4 *)(uVar4 + 0x20);
        local_20 = *(undefined4 *)(uVar4 + 0x24);
        local_1c = *(undefined4 *)(uVar4 + 0x28);
        fn_007852d4(local_38,&local_28,*(int *)(uVar4 + 0x3c) + -1);
        puVar3 = (undefined4 *)param_1[1];
        iVar2 = *local_38[0];
        if (puVar3 == (undefined4 *)param_1[2]) {
          fn_00794e34(param_1);
          return;
        }
        param_1[1] = (uint)(puVar3 + 3);
        if (puVar3 != (undefined4 *)0x0) {
          uVar5 = *(undefined4 *)(iVar2 + 0x70);
          uVar7 = *(undefined4 *)(iVar2 + 0x74);
          *puVar3 = *(undefined4 *)(iVar2 + 0x6c);
          puVar3[1] = uVar5;
          puVar3[2] = uVar7;
        }
      }
    }
  }
  return;
}



void fn_0068095c(uint *param_1,int *param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined1 auStack_38 [24];
  
  uVar3 = *param_1;
  uVar4 = 0;
  if ((int)(param_1[1] - uVar3) >> 2 != 0) {
    do {
      fn_002feef8(*(undefined4 *)(uVar3 + uVar4 * 4));
      uVar3 = *param_1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[1] - uVar3) >> 2));
  }
  uVar3 = 0;
  if ((int)(param_1[4] - param_1[3]) >> 2 != 0) {
    do {
      fn_002feef8(*(undefined4 *)(param_1[3] + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[4] - param_1[3]) >> 2));
  }
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    param_1[1] = uVar4 - (uVar4 - uVar3 & 0xfffffffc);
  }
  uVar3 = param_1[4];
  uVar4 = param_1[3];
  if (uVar4 != uVar3) {
    uVar1 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[4] = uVar3 - (uVar3 - uVar4 & 0xfffffffc);
  }
  uVar3 = param_1[0x1c];
  uVar4 = param_1[0x1d];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar4);
    }
    param_1[0x1d] = uVar3;
  }
  iVar2 = (int)((longlong)(param_2[1] - *param_2) * -0x22983759 +
                ((ulonglong)(uint)(param_2[1] - *param_2) << 0x20) >> 0x20);
  fn_0079cac8(param_1 + 0x1c,(iVar2 >> 7) - (iVar2 >> 0x1f),0);
  uVar3 = param_1[0x1f];
  uVar4 = param_1[0x20];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar4);
    }
    param_1[0x20] = uVar3;
  }
  iVar2 = (int)((longlong)(param_2[1] - *param_2) * -0x22983759 +
                ((ulonglong)(uint)(param_2[1] - *param_2) << 0x20) >> 0x20);
  fn_0079cac8(param_1 + 0x1f,(iVar2 >> 7) - (iVar2 >> 0x1f),0);
  local_48 = param_1[0xb];
  local_44 = param_1[0xc];
  local_40 = param_1[0xd];
  local_3c = param_1[0xe];
  local_58 = (uint *)param_1[7];
  local_54 = param_1[8];
  local_50 = param_1[9];
  local_4c = param_1[10];
  fn_00787ae4(auStack_38,param_1 + 7,&local_58,&local_48);
  param_1[6] = (uint)param_2;
  uVar4 = 0;
  uVar3 = *param_2 + param_3 * 0x94;
  local_58 = (uint *)fn_00145b00(0x1c,&DAT_00812c8c);
  if (local_58 != (uint *)0x0) {
    *local_58 = param_1[0x1a];
    local_58[1] = uVar3;
    local_58[2] = uVar4;
    local_58[3] = uVar4;
    local_58[4] = 0;
    local_58[5] = uVar4;
    *(undefined1 *)(local_58 + 6) = 0;
    *(undefined1 *)((int)local_58 + 0x19) = 0;
  }
  fn_00799c30(param_1,&local_58);
  param_1[0x1a] = param_1[0x1a] + 1;
  *(undefined1 *)(*(int *)(uVar3 + 0x78) + param_1[0x1c]) = 1;
  param_1[0x15] = param_3;
  param_1[0x16] = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  param_1[0x17] = *param_5;
  param_1[0x18] = uVar3;
  param_1[0x19] = uVar4;
  return;
}


