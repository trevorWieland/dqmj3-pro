#include "006cc5fc_006cd5a0.h"



bool fn_006cd5a0(void)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,5);
  return *(int *)(iVar1 + 0x70) == -0x134;
}



bool fn_006cd544(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0x5fdf40aa) {
    param_1 = (int *)(uint)*(byte *)((int)param_1 + 0x2f);
  }
  return iVar1 == 0x5fdf40aa && param_1 == (int *)0x0;
}



undefined4 fn_006cd1f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_006b4ed4(param_2);
  if (iVar1 == 0) {
LAB_006cd29c:
    iVar1 = fn_006b4ee4(param_2);
    if ((iVar1 == 0) || (iVar1 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 < 500)) {
      iVar1 = fn_006f5bec(*(undefined4 *)(param_1 + 0x100),param_2 + 8,0);
      if (iVar1 == 0) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = 2;
  }
  else {
    iVar3 = (int)*(short *)(param_2 + 4);
    iVar1 = fn_00660ec0(iVar3);
    if (iVar1 == 0x22) {
      iVar1 = fn_006b4ff0(*(undefined4 *)(DAT_00897804 + 0x18));
LAB_006cd28c:
      if (iVar1 == 0) goto LAB_006cd29c;
    }
    else {
      iVar1 = fn_00660ec0(iVar3);
      if (iVar1 == 0x21) {
        iVar1 = fn_006b5030(*(undefined4 *)(DAT_00897804 + 0x18));
        goto LAB_006cd28c;
      }
      iVar1 = fn_00660fe0(iVar3);
      iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),iVar3);
      if (iVar3 < iVar1) goto LAB_006cd29c;
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006cd0b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = fn_00203e8c(param_2,iVar2), iVar1 == 0 ||
         (((&DAT_007c6a3c)[iVar2] != -1 && (iVar1 = fn_00154ac8(), iVar1 == 0))))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}



int fn_006cd058(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 1) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0xc0) + uVar3 * 2);
  }
  return iVar1;
}



undefined4 fn_006ccfd4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int *unaff_r7;
  
  iVar1 = fn_00203e2c(param_2);
  if (0 < iVar1) {
    unaff_r7 = &DAT_00897804;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      psVar2 = (short *)fn_00203e08(param_2,iVar4);
      iVar3 = fn_006b2aa0(*(undefined4 *)(*unaff_r7 + 0x14),(int)*psVar2);
      if (iVar3 < psVar2[1]) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 1;
}



undefined4 fn_006ccbd8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 4) == 0) || (3 < *(byte *)(param_1 + 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006ccba8(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 0xb4) + 0x10) + param_2 * 0x104) == '\x05';
}



int fn_006ccb20(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x22);
  cVar2 = *(char *)(param_1 + 0x14);
  iVar4 = 0;
  if ((param_2 != 0) || (iVar3 = fn_0038d598(*(undefined4 *)(param_1 + 4)), iVar3 != 0)) {
    iVar4 = (int)*(short *)(*(int *)(param_1 + 0x40) + (char)(cVar1 * '\n' + -10 + cVar2) * 2);
  }
  return iVar4;
}



int fn_006ccaf4(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x40) +
                        (char)(*(char *)(param_1 + 0x22) * '\n' + -10 + *(char *)(param_1 + 0x14)) *
                        2);
}



void fn_006cc9c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *local_10;
  
  local_10 = param_4;
  iVar1 = fn_006e8230(*(undefined4 *)(param_1 + 0xb0));
  uVar2 = fn_002ea524((int)*(short *)(iVar1 + 0xa72));
  fn_002317d8(&local_10,uVar2,0);
  fn_0015b0dc(local_10);
  if (local_10 != &DAT_008f9cf4) {
    piVar3 = local_10 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_006cc5fc(undefined4 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short local_50 [22];
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x1c);
  iVar2 = 0;
  do {
    sVar1 = fn_006b51a8(uVar4,iVar2);
    iVar3 = iVar2 + 1;
    local_50[iVar2 * 2] = sVar1;
    local_50[iVar2 * 2 + 1] = 1;
    iVar2 = iVar3;
  } while (iVar3 < 10);
  iVar2 = 0;
  do {
    iVar3 = 10;
    sVar1 = local_50[iVar2 * 2];
    if (iVar2 < 10) {
      do {
        if (local_50[iVar3 * 2] == sVar1) {
          local_50[iVar2 * 2 + 1] = local_50[iVar2 * 2 + 1] + local_50[iVar3 * 2 + 1];
          local_50[iVar3 * 2] = 0;
          local_50[iVar3 * 2 + 1] = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar2 < iVar3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  fn_006cc754(param_1,local_50,10);
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (0 < local_50[iVar2 * 2]) {
      sVar1 = local_50[iVar2 * 2 + 1];
      fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14));
      iVar3 = iVar3 + sVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  fn_0025b9fc(*(undefined4 *)(DAT_00897804 + 8),iVar3);
  fn_002426f0(*(undefined4 *)(DAT_00897804 + 0x1c));
  return;
}



void fn_006cc754(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  local_28 = *(undefined4 *)(iVar1 + 0x10);
  iVar6 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      psVar5 = (short *)(param_2 + iVar1 * 4);
      if (0 < *psVar5) {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        fn_00102908(&local_50,0x20,DAT_00894b6c,iVar6);
        local_2c = fn_0068897c(local_28,&local_50);
        fn_0023097c(&local_30,(int)*psVar5,0);
        fn_00190d50(local_2c,local_30);
        if (local_30 != &DAT_008f9cf4) {
          piVar2 = local_30 + -3;
          iVar4 = *piVar2;
          if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
            fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
          }
        }
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        fn_00102908(&local_50,0x20,DAT_00894b74,iVar6);
        iVar4 = fn_0068897c(local_28,&local_50);
        *(byte *)(iVar4 + 0x44) = 0 < *psVar5 | *(byte *)(iVar4 + 0x44) & 0xfe;
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        fn_00102908(&local_50,0x20,DAT_00894b70,iVar6);
        uVar3 = fn_0068897c(local_28,&local_50);
        fn_00688c04(uVar3,(int)psVar5[1],0);
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return;
}


