#include "0013eecc_0013f380.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0013f380(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (7 < param_3) {
      param_3 = 7;
    }
    do {
      uVar11 = param_1[4];
      uVar1 = *param_1;
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar6 = param_1[3];
      uVar8 = uVar11;
      if ((int)uVar11 < 1) {
        if (uVar11 != 0) {
          return;
        }
        if (uVar1 == uVar2 && uVar5 == uVar6) {
          if ((int)uVar5 < 0) {
            return;
          }
          uVar8 = 7;
        }
      }
      uVar3 = *param_5;
      uVar7 = param_5[1];
      if ((int)(uVar7 - (uVar5 + (uVar3 < uVar1))) < 0 ==
          (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)(uVar3 < uVar1)))) {
        iVar10 = uVar8 - *param_6;
      }
      else if ((int)uVar6 < 0) {
        iVar10 = uVar8 + 1;
      }
      else if ((int)(uVar7 - (uVar6 + (uVar3 < uVar2))) < 0 ==
               (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)(uVar3 < uVar2)))) {
        iVar10 = (uVar8 - *param_6) + 8;
      }
      else {
        iVar10 = param_3;
      }
      iVar12 = 0;
      if (param_3 < iVar10) {
        iVar10 = param_3;
      }
      if (0 < iVar10) {
        do {
          iVar4 = (int)((uVar8 - iVar12) + 8) % 8;
          puVar9 = (undefined2 *)(param_2 + iVar12 * 6);
          iVar12 = iVar12 + 1;
          *puVar9 = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x20);
          puVar9[1] = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x22);
          puVar9[2] = *(undefined2 *)((int)param_1 + iVar4 * 6 + 0x24);
        } while (iVar12 < iVar10);
      }
    } while (((param_1[4] != uVar11) || (*param_1 != uVar1 || param_1[1] != uVar5)) ||
            (param_1[2] != uVar2 || param_1[3] != uVar6));
    *param_4 = iVar10;
    *param_5 = uVar1;
    param_5[1] = uVar5;
    *param_6 = uVar8;
  }
  return;
}



void fn_0013f20c(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (7 < param_3) {
      param_3 = 7;
    }
    do {
      uVar11 = param_1[4];
      uVar1 = *param_1;
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar6 = param_1[3];
      uVar8 = uVar11;
      if ((int)uVar11 < 1) {
        if (uVar11 != 0) {
          return;
        }
        if (uVar1 == uVar2 && uVar5 == uVar6) {
          if ((int)uVar5 < 0) {
            return;
          }
          uVar8 = 7;
        }
      }
      uVar7 = *param_5;
      uVar3 = param_5[1];
      if ((int)(uVar3 - (uVar5 + (uVar7 < uVar1))) < 0 ==
          (SBORROW4(uVar3,uVar5) != SBORROW4(uVar3 - uVar5,(uint)(uVar7 < uVar1)))) {
        iVar10 = uVar8 - *param_6;
      }
      else if ((int)uVar6 < 0) {
        iVar10 = uVar8 + 1;
      }
      else if ((int)(uVar3 - (uVar6 + (uVar7 < uVar2))) < 0 ==
               (SBORROW4(uVar3,uVar6) != SBORROW4(uVar3 - uVar6,(uint)(uVar7 < uVar2)))) {
        iVar10 = (uVar8 - *param_6) + 8;
      }
      else {
        iVar10 = param_3;
      }
      iVar12 = 0;
      if (param_3 < iVar10) {
        iVar10 = param_3;
      }
      if (0 < iVar10) {
        do {
          puVar9 = (undefined2 *)(param_2 + iVar12 * 8);
          iVar4 = (int)((uVar8 - iVar12) + 8) % 8;
          iVar12 = iVar12 + 1;
          *puVar9 = (short)param_1[iVar4 * 2 + 8];
          puVar9[1] = *(undefined2 *)((int)param_1 + iVar4 * 8 + 0x22);
          *(char *)(puVar9 + 2) = (char)param_1[iVar4 * 2 + 9];
        } while (iVar12 < iVar10);
      }
    } while (((param_1[4] != uVar11) || (*param_1 != uVar1 || param_1[1] != uVar5)) ||
            (param_1[2] != uVar2 || param_1[3] != uVar6));
    *param_4 = iVar10;
    *param_5 = uVar1;
    param_5[1] = uVar5;
    *param_6 = uVar8;
  }
  return;
}



void fn_0013f074(uint *param_1,int param_2,uint param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (7 < (int)*param_6) {
    *param_6 = (int)*param_6 % 8;
  }
  uVar5 = param_1[4];
  uVar6 = uVar5;
  if ((int)uVar5 >= 0) {
    uVar6 = param_3;
  }
  if (uVar6 == 0 || ((int)uVar5 < 0 || (int)param_3 < 0)) {
    *param_4 = 0;
    return;
  }
  uVar6 = param_5[1];
  uVar5 = *param_5;
  if ((int)uVar6 < 0) {
    if ((int)param_1[3] < 0) {
      uVar6 = param_1[4] + 1;
      goto LAB_0013f144;
    }
  }
  else {
    uVar2 = param_1[3];
    if ((int)(uVar6 - (uVar2 + (uVar5 < param_1[2]))) < 0 ==
        (SBORROW4(uVar6,uVar2) != SBORROW4(uVar6 - uVar2,(uint)(uVar5 < param_1[2])))) {
      uVar2 = param_1[1];
      if ((int)(uVar6 - (uVar2 + (uVar5 < *param_1))) < 0 ==
          (SBORROW4(uVar6,uVar2) != SBORROW4(uVar6 - uVar2,(uint)(uVar5 < *param_1)))) {
        uVar6 = param_1[4] - *param_6;
        goto LAB_0013f144;
      }
      if ((int)param_1[3] < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = 7 - *param_6;
      }
      uVar6 = iVar4 + param_1[4] + 1;
      *param_4 = uVar6;
      if ((int)uVar6 < 9) goto LAB_0013f144;
    }
  }
  uVar6 = 8;
LAB_0013f144:
  if ((int)uVar6 < (int)param_3) {
    param_3 = uVar6;
  }
  *param_4 = uVar6;
  *param_4 = param_3;
  if (7 < (int)param_3) {
    param_3 = 7;
    *param_4 = 7;
  }
  uVar6 = param_1[4];
  iVar4 = 0;
  if (0 < (int)param_3) {
    do {
      iVar1 = (int)((uVar6 - iVar4) + 8) % 8;
      puVar3 = (undefined2 *)(param_2 + iVar4 * 0x18);
      *(uint *)(puVar3 + 4) = param_1[iVar1 * 6 + 0xc];
      *(uint *)(puVar3 + 6) = param_1[iVar1 * 6 + 0xd];
      *(uint *)(puVar3 + 8) = param_1[iVar1 * 6 + 0xe];
      *(char *)(puVar3 + 10) = (char)param_1[iVar1 * 6 + 0xf];
      *(bool *)((int)puVar3 + 0x15) = *(char *)((int)param_1 + iVar1 * 0x18 + 0x3d) != '\0';
      *puVar3 = (short)param_1[iVar1 * 6 + 0x10];
      puVar3[1] = *(undefined2 *)((int)param_1 + iVar1 * 0x18 + 0x42);
      puVar3[2] = (short)param_1[iVar1 * 6 + 0x11];
      iVar4 = iVar4 + 1;
      puVar3[3] = *(undefined2 *)((int)param_1 + iVar1 * 0x18 + 0x46);
    } while (iVar4 < (int)*param_4);
  }
  uVar5 = param_1[1];
  *param_5 = *param_1;
  param_5[1] = uVar5;
  *param_6 = uVar6;
  return;
}



void fn_0013f068(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1 + 2;
  puVar1 = param_1 + 1;
  uVar3 = *puVar1;
  if ((((~uVar3 & 0xc) == 0) || (((uVar3 & 4) != 0 && ((*param_1 & 8) == 0)))) ||
     (((uVar3 & 8) != 0 && ((*param_1 & 4) == 0)))) {
    uVar3 = uVar3 | 8;
  }
  else {
    uVar3 = uVar3 & 0xfffffff7;
  }
  *puVar1 = uVar3;
  uVar3 = *puVar2;
  if ((((~uVar3 & 0xc) == 0) || (((uVar3 & 4) != 0 && ((*param_1 & 8) == 0)))) ||
     (((uVar3 & 8) != 0 && ((*param_1 & 4) == 0)))) {
    uVar3 = uVar3 | 8;
  }
  else {
    uVar3 = uVar3 & 0xfffffff7;
  }
  *puVar2 = uVar3;
  if ((*param_1 & 4) != 0) {
    *param_1 = *param_1 & 0xfffffffb | 8;
  }
  *puVar1 = *puVar1 & 0xfffffffb;
  *puVar2 = *puVar2 & 0xfffffffb;
  return;
}



void fn_0013ef80(uint *param_1)

{
  undefined *local_90 [17];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_90[0] = &DAT_00857574;
  local_48 = 0;
  local_44 = 0;
  local_4c = 0;
  local_40 = 0x6a09e667;
  local_3c = 0xbb67ae85;
  local_38 = 0x3c6ef372;
  local_34 = 0xa54ff53a;
  local_30 = 0x510e527f;
  local_2c = 0x9b05688c;
  local_28 = 0x1f83d9ab;
  local_24 = 0x5be0cd19;
  fn_00125e98(local_90);
  fn_00125e10(local_90);
  *param_1 = local_40 << 0x18 | (local_40 >> 8 & 0xff) << 0x10 | (local_40 >> 0x10 & 0xff) << 8 |
             local_40 >> 0x18;
  param_1[1] = local_3c << 0x18 | (local_3c >> 8 & 0xff) << 0x10 | (local_3c >> 0x10 & 0xff) << 8 |
               local_3c >> 0x18;
  param_1[2] = local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
               local_38 >> 0x18;
  param_1[3] = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
               local_34 >> 0x18;
  param_1[4] = local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
               local_30 >> 0x18;
  param_1[5] = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
               local_2c >> 0x18;
  param_1[6] = local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
               local_28 >> 0x18;
  param_1[7] = local_24 << 0x18 | (local_24 >> 8 & 0xff) << 0x10 | (local_24 >> 0x10 & 0xff) << 8 |
               local_24 >> 0x18;
  return;
}



int fn_0013ef44(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x130040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c0718;
  if (-1 < DAT_008c0718) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013ef08(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3b0000;
  svc_0x32();
  iVar1 = DAT_008c0718;
  if (-1 < DAT_008c0718) {
    *param_1 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0013eecc(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_003d0040;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c0718;
  if (-1 < DAT_008c0718) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


