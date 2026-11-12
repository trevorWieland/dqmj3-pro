#include "00193690_0019ba68.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_0019ba68(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016b5f0(*(undefined4 *)(param_1 + 0x14));
  *(int *)(iVar1 + 0xc) = param_1;
  return;
}



void fn_00198230(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = *(int **)(param_1 + 0x44);
  uVar4 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x44) = param_2[1];
  uVar2 = *param_2;
  *(uint *)(param_1 + 0x40) = uVar2;
  if ((uVar2 & 0x8000000) != 0) {
    *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(*(int *)(param_1 + 0x44) + 4) + 1;
  }
  if (((uVar4 & 0x8000000) == 0) || (iVar1 = piVar3[1], piVar3[1] = iVar1 + -1, iVar1 + -1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00198284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 8))(piVar3);
  return;
}



void fn_001968e4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_001a2388(param_2);
  fn_0019f4c4(*param_1,*(undefined4 *)(iVar1 + 0x1c),iVar1,param_1[1],param_1[2]);
  return;
}



void fn_00193d68(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  do {
    iVar3 = DAT_008ef5d0 + 1;
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
  DAT_008ef5d0 = iVar3;
  if (DAT_008c034e != '\0') {
    uVar4 = fn_0019f0e8(&DAT_008ef5bc,iVar3,0x952b80,0,iVar3);
    uVar2 = (uint)uVar4;
    if (uVar2 != 0) {
      svc_0x28();
      uVar5 = fn_0019eee8(&DAT_008ef5bc);
      DAT_008c0351 = 0;
      svc_0x28();
      param_1[1] = (int)((ulonglong)uVar5 >> 0x20) -
                   ((int)((ulonglong)uVar4 >> 0x20) + (uint)((uint)uVar5 < uVar2));
      *param_1 = (uint)uVar5 - uVar2;
      do {
        bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
      } while (!bVar1);
      goto LAB_00193e0c;
    }
    DAT_008c034d = '\x01';
  }
  if (DAT_008c034d != '\0') {
    do {
      bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
    } while (!bVar1);
    DAT_008ef5d0 = DAT_008ef5d0 + -1;
    fn_0015def0(&DAT_008c0354);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
    } while (!bVar1);
    DAT_008ef5d0 = DAT_008ef5d0 + 1;
    fn_0013c428(&DAT_008c0354);
  }
  if (DAT_008c034f == '\0') {
    uVar4 = fn_0019f158(&DAT_008ef5bc);
    svc_0x28();
    uVar5 = fn_0019eee8(&DAT_008ef5bc);
    DAT_008c0351 = 0;
    svc_0x28();
    param_1[1] = (int)((ulonglong)uVar5 >> 0x20) -
                 ((int)((ulonglong)uVar4 >> 0x20) + (uint)((uint)uVar5 < (uint)uVar4));
    *param_1 = (uint)uVar5 - (uint)uVar4;
  }
  else {
    fn_0012d6a4(0x4a95c0,0);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(0x8ef5d0);
  } while (!bVar1);
LAB_00193e0c:
  DAT_008ef5d0 = DAT_008ef5d0 + -1;
  return;
}



undefined4 fn_00193968(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort local_68 [3];
  undefined2 local_62;
  uint local_60;
  uint local_5c;
  uint local_58 [3];
  undefined2 local_4c;
  undefined2 local_4a;
  short local_48 [4];
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c [12];
  
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[2];
    }
    if (*param_1 != 0 && iVar2 != 0) {
      uVar4 = in_fpscr & 0xfffffff;
      if (((((0.0 <= (float)param_2[3]) && (param_2[3] < 0x3f800001)) && (0.0 <= (float)param_2[4]))
          && ((param_2[4] < 0x3f800001 && (0.0 <= (float)param_2[6])))) &&
         ((param_2[6] < 0x3f800001 && ((0.0 <= (float)param_2[7] && (param_2[7] < 0x3f800001)))))) {
        uVar16 = 0x4120000000000000;
        uVar9 = (uint)(*param_2 * 1000) / 0x1318;
        if (uVar9 == 0) {
          uVar9 = 1;
        }
        local_4c = (undefined2)uVar9;
        uVar3 = (uint)(param_2[2] * 1000) / 0x1318;
        if (uVar3 == 0) {
          uVar3 = 1;
        }
        local_4a = (undefined2)uVar3;
        local_62 = 2;
        puVar6 = (uint *)param_2[5];
        if (puVar6 == (uint *)0x0) {
          puVar6 = &DAT_008c33c0;
        }
        VectorUnsignedToFloat(param_2[1],(byte)(uVar4 >> 0x16) & 3);
        local_48[0] = (short)(*puVar6 / 0xa0);
        iVar2 = puVar6[1] * -0x33333333;
        uVar15 = 0x43000000;
        local_48[1] = (short)(puVar6[1] / 0xa0);
        iVar7 = 0;
        do {
          VectorSignedToFloat(local_48[iVar7] * 0xa0,(byte)(uVar4 >> 0x16) & 3);
          fVar11 = (float)((ulonglong)uVar16 >> 0x20);
          fn_001a4a80(local_48[iVar7] * 0xa0,iVar2);
          fVar14 = (float)uVar15;
          iVar5 = iVar7 + 1;
          local_3c[iVar7] = (short)(int)(fVar11 * fVar14);
          iVar2 = extraout_r1;
          iVar7 = iVar5;
        } while (iVar5 < 2);
        uVar10 = VectorFloatToUnsigned((float)param_2[6] * fVar14,3);
        local_48[3] = (short)uVar10;
        uVar10 = VectorFloatToUnsigned((float)param_2[7] * fVar14,3);
        local_40 = (undefined2)uVar10;
        uVar10 = VectorFloatToUnsigned((float)param_2[3] * fVar14,3);
        local_3e = (undefined2)uVar10;
        local_48[2] = (short)(puVar6[2] / 0xa0);
        fVar11 = (float)param_2[4];
        if (0x3f733333 < (int)fVar11) {
          fVar11 = 0.95;
        }
        if ((char)param_2[8] == '\x01') {
          fVar12 = -fVar11;
          fVar13 = fVar11 - 1.0;
        }
        else {
          fVar13 = 1.0 - fVar11;
          fVar12 = fVar11;
        }
        local_68[0] = 4;
        local_3c[2] = (undefined2)(int)(fVar13 * fVar14);
        local_3c[3] = (undefined2)(int)(fVar12 * fVar14);
        iVar7 = *param_1;
        uVar9 = uVar9 * 0x500;
        uVar4 = fn_0019e94c(iVar7,uVar9);
        iVar2 = fn_0019e94c(iVar7,uVar9);
        local_60 = uVar4 >> 0x10 | iVar2 << 0x10;
        if (uVar9 <= (uint)param_1[2]) {
          iVar2 = uVar3 * 0x500;
          uVar4 = fn_0019e94c(iVar7 + uVar9,iVar2);
          iVar5 = fn_0019e94c(iVar7 + uVar9,iVar2);
          local_5c = uVar4 >> 0x10 | iVar5 << 0x10;
          uVar9 = uVar9 + iVar2;
          if (uVar9 <= (uint)param_1[2]) {
            iVar2 = 0;
            do {
              iVar8 = local_48[iVar2] * 0x500;
              uVar4 = fn_0019e94c(iVar7 + uVar9,iVar8);
              iVar5 = fn_0019e94c(iVar7 + uVar9,iVar8);
              local_58[iVar2] = uVar4 >> 0x10 | iVar5 << 0x10;
              uVar9 = uVar9 + iVar8;
              iVar2 = iVar2 + 1;
            } while (iVar2 < 2);
            if (uVar9 <= (uint)param_1[2]) {
              iVar2 = (int)local_48[2];
              uVar4 = fn_0019e94c(uVar9 + iVar7,iVar2 * 0x500);
              iVar2 = fn_0019e94c(uVar9 + iVar7,iVar2 * 0x500);
              local_58[2] = uVar4 >> 0x10 | iVar2 << 0x10;
            }
          }
        }
        local_68[0] = local_68[0] | 2;
        fn_00158f6c(*param_1,param_1[2]);
        fn_0017cad8(*param_1,param_1[2]);
        cVar1 = *(char *)((int)param_1 + 0xd);
        uVar10 = fn_00189e28();
        uVar10 = fn_0018a090(uVar10,(int)cVar1,local_68);
        return uVar10;
      }
    }
  }
  return 0;
}



uint fn_001938dc(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_48;
  undefined2 local_46;
  
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[2];
    }
    if (*param_1 != 0 && iVar2 != 0) {
      local_46 = (undefined2)param_2;
      local_48 = 1;
      cVar1 = *(char *)((int)param_1 + 0xd);
      uVar3 = fn_00189e28();
      uVar4 = fn_0018a090(uVar3,(int)cVar1,&local_48);
      if ((param_2 & ~uVar4) == 0) {
        *(char *)((int)param_1 + 0xe) = (char)param_2;
      }
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        *(undefined1 *)((int)param_1 + 0xf) = DAT_008f08d9;
      }
      return uVar4;
    }
  }
  return 0;
}



undefined4 fn_0019371c(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined2 local_20 [3];
  undefined2 local_1a;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    if (*param_1 != 0) {
      param_4 = param_1[2];
    }
    if ((((*param_1 != 0 && param_4 != 0) && (0.0 <= (float)param_2[2])) &&
        (param_2[2] < 0x3f800001)) && ((0.0 <= (float)param_2[1] && (param_2[1] < 0x3f800001)))) {
      uVar2 = (uint)(*param_2 * 1000) / 0x1318;
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      if ((char)param_2[3] == '\0') {
        iVar3 = 2;
      }
      else {
        iVar3 = 4;
      }
      if (iVar3 * uVar2 * 0x280 <= param_4) {
        local_14 = (undefined2)uVar2;
        local_1a = (undefined2)iVar3;
        uVar4 = VectorFloatToUnsigned((float)param_2[1] * 128.0,3);
        local_12 = (undefined2)uVar4;
        fVar5 = (float)param_2[2];
        local_20[0] = 4;
        if (0x3f733333 < (int)fVar5) {
          fVar5 = 0.95;
        }
        local_10 = (undefined2)(int)((1.0 - fVar5) * 128.0);
        local_e = (undefined2)(int)(fVar5 * 128.0);
        fn_00158f6c(*param_1,param_1[2]);
        fn_0017cad8(*param_1,param_1[2]);
        cVar1 = *(char *)((int)param_1 + 0xd);
        uVar4 = fn_00189e28();
        uVar4 = fn_00189ff4(uVar4,(int)cVar1,local_20);
        return uVar4;
      }
    }
  }
  return 0;
}



uint fn_00193690(int *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_28;
  undefined2 local_26;
  
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = param_1[2];
    }
    if (*param_1 != 0 && iVar2 != 0) {
      local_26 = (undefined2)param_2;
      local_28 = 1;
      cVar1 = *(char *)((int)param_1 + 0xd);
      uVar3 = fn_00189e28();
      uVar4 = fn_00189ff4(uVar3,(int)cVar1,&local_28);
      if ((param_2 & ~uVar4) == 0) {
        *(char *)((int)param_1 + 0xe) = (char)param_2;
      }
      if (*(char *)((int)param_1 + 0xe) == '\0') {
        *(undefined1 *)((int)param_1 + 0xf) = DAT_008f08d9;
      }
      return uVar4;
    }
  }
  return 0;
}


