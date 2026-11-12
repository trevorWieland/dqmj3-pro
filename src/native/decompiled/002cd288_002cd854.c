#include "002cd288_002cd854.h"



void fn_002cd854(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_0044fcfc();
  fn_0025b2dc(*(undefined4 *)(DAT_00897804 + 8),uVar1);
  return;
}



void fn_002cd778(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  pcVar2 = (char *)fn_002429d0(param_2);
  if (pcVar2 != (char *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar3 = fn_002ea030(param_3,&local_28,0);
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        iVar3 = (int)*pcVar2;
        while( true ) {
          puVar5 = (undefined1 *)(param_1 + uVar4 * 6);
          iVar1 = uVar4 * 6;
          *puVar5 = 1;
          *(undefined2 *)(puVar5 + 2) = *(undefined2 *)((int)&local_28 + iVar1 + 2);
          *(undefined2 *)(puVar5 + 4) = *(undefined2 *)((int)&local_24 + iVar1);
          iVar3 = *(char *)((int)&local_28 + iVar1 + 1) - iVar3;
          if (0x78 < iVar3) {
            iVar3 = iVar3 + -0xf0;
          }
          if (iVar3 < -0x78) {
            iVar3 = iVar3 + 0xf0;
          }
          puVar5[1] = (char)iVar3;
          uVar4 = uVar4 + 1 & 0xff;
          if (2 < uVar4) {
            return;
          }
          iVar3 = 0;
          if (uVar4 == 0) break;
          if (uVar4 == 1) {
            iVar3 = (int)pcVar2[1];
          }
          else if (uVar4 == 2) {
            iVar3 = (int)pcVar2[2];
          }
        }
      } while( true );
    }
  }
  return;
}



void fn_002cd71c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  fn_00117984();
  fn_0010fa20();
  fn_006eb278();
  if ((uint)((*(int *)(DAT_008977cc + 8) - *(int *)(DAT_008977cc + 4)) / 0x34) < 2) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(DAT_008977cc + 4) + 0x34);
  }
  uVar3 = *puVar2;
  uVar1 = fn_006e9fcc();
  func_0x00547d58(uVar1,uVar3);
  return;
}



void fn_002cd6b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = fn_006ebee0(param_1);
  if (0 < iVar1) {
    do {
      fn_006ebf54(param_1,iVar2);
      fn_005ea624(param_1,iVar2);
      iVar2 = iVar2 + 1;
      iVar1 = fn_006ebee0(param_1);
    } while (iVar2 < iVar1);
  }
  return;
}



void fn_002cd69c(void)

{
  return;
}



void fn_002cd5b0(void)

{
  undefined4 *in_r3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_34 [2];
  undefined2 local_32 [9];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  
  uVar4 = *in_r3;
  uVar1 = in_r3[1];
  uVar2 = in_r3[2];
  uVar3 = in_r3[3];
  local_10 = *(undefined2 *)(in_r3 + 4);
  local_20 = (local_20 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)uVar4) & 0xff);
  if ((char)local_20 != '\0') {
    local_34[0] = 4;
    local_20 = (local_20 & ~((unsigned int)0xff << 8)) | (((unsigned int)((undefined1)((uint)uVar4 >> 8)) & 0xff) << 8);
    local_34[1] = ((unsigned int)(local_20) >> 8) & 0xff;
    local_20 = (local_20 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)uVar4 >> 0x10)) & 0xffff) << 16);
    local_32[0] = ((unsigned int)(local_20) >> 16) & 0xffff;
    local_1c = (local_1c & ~((unsigned int)0xffff << 0)) | ((unsigned int)((undefined2)uVar1) & 0xffff);
    local_32[1] = (undefined2)local_1c;
  }
  uVar5 = (uint)((char)local_20 != '\0');
  local_1c = (local_1c & ~((unsigned int)0xff << 16)) | (((unsigned int)((char)((uint)uVar1 >> 0x10)) & 0xff) << 16);
  uVar6 = uVar5;
  if (((unsigned int)(local_1c) >> 16) & 0xff != '\0') {
    uVar6 = uVar5 + 1;
    local_34[uVar5 * 6] = 8;
    local_1c = (local_1c & ~((unsigned int)0xff << 24)) | (((unsigned int)((undefined1)((uint)uVar1 >> 0x18)) & 0xff) << 24);
    local_34[uVar5 * 6 + 1] = ((unsigned int)(local_1c) >> 24) & 0xff;
    local_18 = (local_18 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((undefined2)uVar2) & 0xffff);
    local_32[uVar5 * 3] = (undefined2)local_18;
    local_18 = (local_18 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)uVar2 >> 0x10)) & 0xffff) << 16);
    local_32[uVar5 * 3 + 1] = ((unsigned int)(local_18) >> 16) & 0xffff;
  }
  local_14 = (local_14 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)uVar3) & 0xff);
  if ((char)local_14 != '\0') {
    local_34[uVar6 * 6] = 0xf;
    local_14 = (local_14 & ~((unsigned int)0xff << 8)) | (((unsigned int)((undefined1)((uint)uVar3 >> 8)) & 0xff) << 8);
    local_34[uVar6 * 6 + 1] = ((unsigned int)(local_14) >> 8) & 0xff;
    local_14 = (local_14 & ~((unsigned int)0xffff << 16)) | (((unsigned int)((undefined2)((uint)uVar3 >> 0x10)) & 0xffff) << 16);
    local_32[uVar6 * 3] = ((unsigned int)(local_14) >> 16) & 0xffff;
    local_32[uVar6 * 3 + 1] = local_10;
  }
  local_20 = uVar4;
  local_1c = uVar1;
  local_18 = uVar2;
  local_14 = uVar3;
  fn_003119e0();
  return;
}



void fn_002cd59c(void)

{
  return;
}



void fn_002cd56c(short param_1)

{
  int iVar1;
  
  fn_002ea524();
  iVar1 = fn_002e9c90((int)param_1);
  if (iVar1 == -1) {
    fn_0066173c();
  }
  return;
}



void fn_002cd4cc(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  pcVar1 = (char *)fn_002429d0(param_2);
  if (pcVar1 == (char *)0x0) {
    return;
  }
  uVar3 = 0;
  do {
    iVar4 = (int)*pcVar1;
    while( true ) {
      puVar5 = (undefined1 *)(param_1 + uVar3 * 6);
      iVar2 = param_3 + uVar3 * 6;
      *puVar5 = 1;
      *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(iVar2 + 2);
      *(undefined2 *)(puVar5 + 4) = *(undefined2 *)(iVar2 + 4);
      iVar4 = *(char *)(iVar2 + 1) - iVar4;
      if (0x78 < iVar4) {
        iVar4 = iVar4 + -0xf0;
      }
      if (iVar4 < -0x78) {
        iVar4 = iVar4 + 0xf0;
      }
      puVar5[1] = (char)iVar4;
      uVar3 = uVar3 + 1 & 0xff;
      if (2 < uVar3) {
        return;
      }
      iVar4 = 0;
      if (uVar3 == 0) break;
      if (uVar3 == 1) {
        iVar4 = (int)pcVar1[1];
      }
      else if (uVar3 == 2) {
        iVar4 = (int)pcVar1[2];
      }
    }
  } while( true );
}



void fn_002cd4b4(void)

{
  DAT_0089284c = 0;
  DAT_00892850 = 0;
  return;
}



undefined4 * fn_002cd3f0(undefined4 *param_1)

{
  *param_1 = &DAT_0081fc44;
  return param_1;
}



undefined4 * fn_002cd3ec(undefined4 *param_1)

{
  *param_1 = &DAT_0081fc44;
  return param_1;
}



undefined4 * fn_002cd364(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *param_1 = &DAT_0081fc44;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  fn_00158f6c((int)param_1 + 0x1e,0x40);
  return param_1;
}



void fn_002cd348(int *param_1)

{
  if (*(char *)((int)param_1 + 0x5e) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x002cd35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



void fn_002cd288(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    uVar1 = fn_006b8538(uVar5,iVar4);
    iVar2 = fn_0028aad0(uVar5,uVar1);
    if ((iVar2 != 0) && (iVar3 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c)), iVar3 != 0)) {
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == *(int *)(param_2 + 8)) {
        fn_00787f6c(param_2,iVar3,iVar2);
      }
      else {
        *(int *)(param_2 + 4) = iVar3 + 0xf0;
        if (iVar3 != 0) {
          fn_0017821c(iVar3,iVar2,0xf0);
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}


