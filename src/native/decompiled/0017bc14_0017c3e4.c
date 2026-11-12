#include "0017bc14_0017c3e4.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_0017c3e4(int *param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_00189d00(&local_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x17c404);
  }
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  *param_1 = local_10;
  return;
}



int fn_0017c354(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_20;
  
  iVar1 = -0x181c0001;
  local_20 = 0;
  iVar3 = 0;
  *param_2 = 0;
  while( true ) {
    if (param_4 == 0) {
      return iVar1;
    }
    uVar2 = param_3 + iVar3 & 0xffff;
    if (param_4 < 0x40) {
      iVar1 = fn_0017c5f4(param_1 + iVar3,&local_20,uVar2,param_4);
    }
    else {
      iVar1 = fn_0017c5f4(param_1 + iVar3,&local_20,uVar2,0x40);
    }
    if (iVar1 < 0) break;
    param_4 = param_4 - local_20;
    iVar3 = iVar3 + local_20;
    *param_2 = *param_2 + local_20;
  }
  return iVar1;
}



uint fn_0017c1a4(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,int param_5,
                 uint param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_008c3c38 == '\0') {
    iVar2 = fn_0013db70(0,0x40002a5);
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x17c1f4);
    }
    uVar3 = fn_002febd8((char *)&DAT_0080f794);
    iVar2 = fn_0014fe94(&DAT_008c3cfc,(char *)&DAT_0080f794,uVar3,0);
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x17c21c);
    }
    fn_001707d4(&DAT_008f32b0,param_1,param_2,1,3);
    uVar1 = fn_00189d74(DAT_008f32c4,param_2,param_3 + param_4,param_4 >> 3,param_5 + param_6,
                         param_6 >> 3,param_7);
    if (-1 < (int)uVar1) {
      DAT_008c3c44 = DAT_008f32b8;
      fn_00189ad0(&DAT_008f32d0,DAT_008f32b8 + 0x10,param_3 + param_4 + 0x10,param_4 >> 3,0,1);
      DAT_008c3c3c = 0;
      DAT_008c3c40 = 0;
      DAT_008c3c39 = (char)param_7;
      DAT_008c3c38 = 1;
      return 0;
    }
    if ((((int)uVar1 < 0) && (uVar1 >> 0x1b != 0x19)) && (uVar1 != 0xf9610c02)) {
      fn_0015e590(uVar1,0x17c2ac);
    }
    fn_0015e228(&DAT_008f32b0);
    svc_0x23();
    if (DAT_008c3cfc < 0) {
      fn_0015e590(DAT_008c3cfc,0x17c2c8);
    }
    iVar2 = fn_00171598();
    if (iVar2 < 0) {
      fn_0015e590(iVar2,0x17c2e0);
    }
  }
  else {
    uVar1 = 0xd8210ff9;
  }
  return uVar1;
}



uint fn_0017c164(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = fn_0014dcf8();
  if ((int)uVar1 < 0) {
    uVar2 = uVar1 >> 0x1b;
    if ((uVar1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    bVar3 = uVar2 != 0xfffffff9;
    if (bVar3) {
      uVar2 = 0xf9610c02;
    }
    if (bVar3 && uVar1 != uVar2) {
      fn_0015e590(uVar1,0x17c198);
    }
  }
  return uVar1;
}



void fn_0017c06c(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0x17c;
  }
  else {
    uVar4 = 100;
  }
  iVar3 = 0;
  if (DAT_0089a660 != '\0') {
    if ((DAT_0089a661 != 0) && (svc_0x28(), (DAT_0089a661 & 0x10) != 0)) {
      iVar3 = fn_00169f1c(uVar4,(DAT_0089a661 & 0xf) + 1);
    }
    uVar1 = DAT_0089a678 + iVar3 & 0xffff;
    if (uVar1 != 0) {
      lVar2 = (ulonglong)uVar1 * 1000000;
      fn_0012d6a4((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
      return;
    }
  }
  return;
}



undefined4 * fn_0017bf8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_s0;
  undefined4 local_1c;
  undefined4 auStack_18 [2];
  
  *param_1 = param_2;
  param_1[5] = in_s0;
  *(char *)(param_1 + 6) = (char)param_4;
  uVar1 = fn_001924e0(param_2,2);
  param_1[1] = uVar1;
  uVar1 = fn_0018963c(*param_1,2,0,1,0);
  param_1[2] = uVar1;
  uVar1 = fn_00178f9c(*param_1,uVar1);
  param_1[3] = uVar1;
  piVar2 = (int *)fn_0017dd54(uVar1,(&PTR_s_ATTACK_ALLY_007baacc)[param_4],1);
  param_1[4] = piVar2;
  (**(code **)(*piVar2 + 0x54))();
  fn_001913c8(&local_1c);
  fn_001913c8(auStack_18);
  iVar3 = *(int *)(param_1[3] + 0x10);
  *(undefined4 *)(iVar3 + 0x1c) = local_1c;
  *(undefined4 *)(iVar3 + 0x20) = auStack_18[0];
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  return param_1;
}



void fn_0017bc14(int param_1,char *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *unaff_r4;
  int *piVar10;
  char *pcVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  undefined8 uVar19;
  char *local_c8 [4];
  undefined *puStack_b8;
  char *pcStack_b4;
  undefined *puStack_b0;
  char *pcStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  uint local_50 [11];
  
  local_54 = fn_00172c98(*(undefined4 *)(param_1 + 0xc),DAT_0089036c);
  bVar13 = param_2 != (char *)0x0;
  if (bVar13) {
    unaff_r4 = param_2;
  }
  piVar10 = *(int **)(*(int *)(local_54 + 0xac) + 0x10);
  while (bVar13) {
    unaff_r4 = (char *)((int)(short)unaff_r4 / 10);
    bVar13 = unaff_r4 != (char *)0x0;
  }
  local_50[0] = 0;
  uVar15 = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_c8[0] = param_2;
  fn_0017d96c(local_50,0x10,0xf,&DAT_0017bf58);
  uVar19 = 0x400000003f800000;
  uVar17 = CONCAT44(0x40a00000,uVar15);
  pcVar11 = (char *)0x0;
  do {
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_64 = 0;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    local_c8[0] = pcVar11;
    fn_0017d96c(&local_78,0x20,0x1f,(char *)&DAT_0017bf6c);
    piVar2 = (int *)(**(code **)(*piVar10 + 0x2c))(piVar10,&local_78,1);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar3 == &DAT_0089a92c) goto LAB_0017bd34;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_0017bd34:
    local_94 = 0;
    local_90 = 0;
    local_98 = 0;
    local_80 = 0;
    local_7c = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    local_a8 = 0;
    local_a4 = 0;
    bVar1 = *(byte *)((int)local_50 + ((uint)pcVar11 & 0xff));
    pcVar4 = (char *)(int)(char)bVar1;
    uVar12 = (uint)pcVar11 & 0xff;
    bVar13 = false;
    if (pcVar4 + -0x30 < &DAT_0000000a) {
      local_a8 = (uint)bVar1;
LAB_0017bdb8:
      if (uVar12 == 0) {
LAB_0017bdd0:
        bVar13 = true;
      }
      else {
        if (uVar12 == 1) {
          pcVar4 = (char *)(local_50[0] & 0xff);
        }
        if (uVar12 == 1 && pcVar4 == (char *)0x2d) goto LAB_0017bdd0;
      }
      local_c8[0] = "yellow";
      local_c8[1] = "yellow";
      local_c8[2] = "purple";
      local_c8[3] = "pink";
      puStack_b8 = &DAT_0085ca9c;
      pcStack_b4 = "green";
      puStack_b0 = &DAT_0085ca9c;
      pcStack_ac = "yellow";
      local_c8[1] = local_c8[*(byte *)(param_1 + 0x18)];
      if (bVar13) {
        local_c8[0] = "16";
      }
      else {
        local_c8[0] = "14";
      }
      local_c8[2] = (char *)&local_a8;
      fn_0017d96c(&local_98,0x20,0x1f,(char *)&DAT_00189780);
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x14))(*(int **)(param_1 + 4),&local_98);
      if (iVar6 == 0) goto LAB_0017beb8;
      fn_00190d10(piVar2,iVar6,0);
      fVar14 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(iVar6 + 4),(byte)(in_fpscr >> 0x16) & 3);
      iVar6 = VectorUnsignedToFloat((uint)*(ushort *)(iVar6 + 6),(byte)(in_fpscr >> 0x16) & 3);
      piVar2[0xf] = (int)fVar14;
      piVar2[0x10] = iVar6;
      fVar18 = (float)((ulonglong)uVar17 >> 0x20);
      fVar14 = (float)VectorSignedToFloat((int)(fVar14 + (float)uVar19) / 2,
                                          (byte)(in_fpscr >> 0x16) & 3);
      fVar16 = (float)uVar17;
      uVar17 = CONCAT44(fVar18,(fVar14 * (float)((ulonglong)uVar19 >> 0x20) - fVar18) + fVar16);
      piVar2[7] = (int)(fVar16 + fVar14);
      *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xee | 0x11;
    }
    else {
      if (pcVar4 == (char *)0x2d) {
        uVar9 = 0;
        pcVar5 = (char *)&DAT_0018976c;
        pcVar7 = (char *)&local_a8;
        do {
          pcVar4 = pcVar5 + 1;
          uVar9 = uVar9 + 1;
          pcVar8 = pcVar7 + 1;
          *pcVar7 = *pcVar5;
          pcVar5 = pcVar4;
          pcVar7 = pcVar8;
        } while ((*pcVar4 == '\0' || uVar9 < 8) && (*pcVar4 != '\0' && uVar9 != 7));
        *pcVar8 = '\0';
        goto LAB_0017bdb8;
      }
LAB_0017beb8:
      *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
    }
    pcVar11 = pcVar11 + 1;
    if (9 < (int)pcVar11) {
      piVar10[7] = (int)((float)piVar10[7] - (float)uVar17 * 0.5);
      *(byte *)(piVar10 + 0x11) = *(byte *)(piVar10 + 0x11) & 0xef | 0x10;
      piVar10 = (int *)fn_0017dd54(*(undefined4 *)(local_54 + 0xac),DAT_00890374,1);
      (**(code **)(*piVar10 + 0x54))();
      piVar10 = *(int **)(*(int *)(param_1 + 0xc) + 0x10);
      iVar6 = (**(code **)(*piVar10 + 0x2c))(piVar10,DAT_00890370,1);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      return;
    }
  } while( true );
}


