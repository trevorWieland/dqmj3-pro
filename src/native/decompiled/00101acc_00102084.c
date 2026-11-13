#include "00101acc_00102084.h"



undefined4 fn_00102084(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_00102944();
  }
  else {
    fn_001022f8();
  }
  return 1;
}



int fn_00101d86(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  for (; (uVar1 = (uint)*param_1, uVar1 != 0 && (uVar1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return uVar1 - *param_2;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00101d8a) */
/* WARNING: Removing unreachable block (ram,0x00101d9e) */
/* WARNING: Removing unreachable block (ram,0x001022ca) */

int fn_00101d80(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  int unaff_r4;
  int *unaff_r5;
  undefined4 unaff_r7;
  uint uVar3;
  int unaff_r10;
  int in_r12;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr2;
  
  lVar1 = CONCAT44(unaff_r7,unaff_r4);
  if (in_CY) {
    while (param_1 = param_1 + 1, !in_ZR) {
      *(int *)(param_4 + param_1 * 4) = unaff_r4;
      *(int *)(param_3 + param_1 * 4) = unaff_r4;
      *(int *)(in_r12 + param_1 * 4) = unaff_r4;
      param_2 = param_2 + -1;
      in_ZR = param_2 == 0;
    }
    *(char *)((int)unaff_r5 + 1) = (char)unaff_r4;
    unaff_r5[7] = unaff_r4;
    unaff_r5[8] = unaff_r4;
    *(short *)(unaff_r5 + 1) = (short)unaff_r4;
    *(short *)((int)unaff_r5 + 6) = (short)unaff_r4;
    *(char *)((int)unaff_r5 + 2) = (char)unaff_r4;
    fn_0013e0ac(&DAT_008ebd7c);
    fn_00123690(&DAT_008bfbbc);
    return unaff_r4;
  }
  if (in_ZR || in_NG != in_OV) {
    lVar1 = (longlong)param_3 * (longlong)unaff_r10 + CONCAT44(unaff_r7,unaff_r4);
    in_ZR = lVar1 == 0;
  }
  uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
  if (in_ZR) {
    uVar2 = param_1 - 0x809;
    coprocessor_load(0xe,in_cr2,uVar2);
    *(uint *)(*unaff_r5 + -4) = uVar3;
    *(undefined1 *)(uVar3 + *unaff_r5) = 0;
    return *unaff_r5 + (uVar2 & (uVar2 >> (uVar3 & 0x1f) | uVar2 << 0x20 - (uVar3 & 0x1f)));
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



void fn_00101d5c(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  do {
    bVar4 = param_3 == 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      *pcVar3 = '\0';
      return;
    }
    cVar2 = *param_2;
    param_2 = param_2 + 1;
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  return;
}



int fn_00101ce8(short *param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  short local_28 [2];
  short *local_24;
  undefined1 *puStack_20;
  int iStack_1c;
  int local_18;
  
  iVar5 = 0;
  puVar4 = param_2;
  iVar6 = param_3;
  local_24 = param_1;
  if (param_2 == (undefined1 *)0x0) {
    iVar6 = 1;
    puVar4 = &DAT_00101d58;
    local_24 = (short *)0x0;
  }
  puStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (param_4 == 0) {
    local_18 = fn_002fea7a(0,5);
  }
  while( true ) {
    bVar7 = iVar6 == 0;
    iVar6 = iVar6 + -1;
    if (bVar7) {
      return -2;
    }
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = fn_002fea88(local_28,uVar1,local_18);
    iVar5 = iVar5 + 1;
    if (iVar2 == -1) break;
    if (iVar2 != -2) {
      if (local_24 != (short *)0x0) {
        *local_24 = local_28[0];
      }
      iVar6 = 0;
      if (local_28[0] != 0) {
        iVar6 = iVar5;
      }
      return iVar6;
    }
  }
  puVar3 = (undefined4 *)fn_002ff798();
  *puVar3 = 4;
  return -1;
}



undefined8 fn_00101c78(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  pbVar5 = param_1;
  do {
    pbVar4 = pbVar5;
    uVar6 = (uint)*pbVar4;
    pbVar5 = pbVar4 + 1;
    if (uVar6 == 0) break;
    piVar1 = (int *)fn_002fea64();
  } while ((*(byte *)(*piVar1 + uVar6) & 1) != 0);
  if (uVar6 != 0x2b) {
    if (uVar6 == 0x2d) {
      iVar7 = 0x400;
    }
    else {
      pbVar5 = pbVar4;
    }
  }
  iVar2 = fn_00300c38(pbVar5,param_2,param_3);
  if ((param_2 != (undefined4 *)0x0) && ((byte *)*param_2 == pbVar5)) {
    *param_2 = param_1;
  }
  if (iVar7 * 0x200000 < 0) {
    iVar7 = -iVar2;
    bVar8 = iVar2 != 0;
    iVar2 = iVar7;
    if (bVar8 && -1 < iVar7) {
      puVar3 = (undefined4 *)fn_002ff798();
      *puVar3 = 2;
      iVar2 = -0x80000000;
    }
  }
  else if (iVar2 < 0) {
    puVar3 = (undefined4 *)fn_002ff798();
    *puVar3 = 2;
    return CONCAT44(param_1,0x7fffffff);
  }
  return CONCAT44(param_1,iVar2);
}



void fn_00101c4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300c22(*param_3,param_1);
  fn_00101c08(param_1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar1,0);
  return;
}



void fn_00101c08(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = param_3 >> 3 | uVar4) {
    *(byte *)((int)param_1 + iVar1 + 0x24) = ((byte)param_3 & 7) + 0x30;
    uVar4 = param_4 << 0x1d;
    param_4 = param_4 >> 3;
    iVar1 = iVar1 + 1;
  }
  uVar3 = 0;
  puVar2 = &DAT_00101c70;
  if (((int)(*param_1 << 0x1c) < 0) && ((*param_1 & 0x20) != 0 || iVar1 != 0)) {
    uVar3 = 1;
    puVar2 = &DAT_00101c74;
    param_1[7] = param_1[7] - 1;
  }
  fn_00300b5c(param_1,iVar1,puVar2,uVar3);
  return;
}



void fn_00101acc(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  int local_28;
  uint local_24;
  byte *pbStack_20;
  int local_1c;
  int iStack_18;
  
  iVar4 = 0;
  iVar3 = 0;
  local_38 = 0;
  local_34 = 0;
  pbStack_20 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  do {
    if ((((int)((uint)*param_1 << 0x1a) < 0) && (*(int *)(param_1 + 0x1c) <= iVar4)) ||
       ((param_3 <= iVar3 && (*(short *)(local_1c + iVar3 * 2) == 0)))) goto LAB_00101b22;
    iVar1 = fn_002ff59c(local_30,*(undefined2 *)(local_1c + iVar3 * 2),&local_38);
    if (iVar1 != -1) {
      if (((int)((uint)*param_1 << 0x1a) < 0) && (*(uint *)(param_1 + 0x1c) < (uint)(iVar4 + iVar1))
         ) {
LAB_00101b22:
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar4;
        fn_002ff970(param_1);
        local_38 = 0;
        local_34 = 0;
        for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
          local_24 = fn_002ff59c(local_30,*(undefined2 *)(local_1c + local_28 * 2),&local_38);
          if (local_24 != 0xffffffff) {
            for (uVar2 = 0; uVar2 < local_24; uVar2 = uVar2 + 1) {
              (**(code **)(param_1 + 4))(local_30[uVar2],*(undefined4 *)(param_1 + 8));
            }
          }
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar4;
        fn_002ff99c(param_1);
        return;
      }
      iVar4 = iVar4 + iVar1;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


