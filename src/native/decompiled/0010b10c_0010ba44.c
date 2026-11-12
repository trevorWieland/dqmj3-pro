#include "0010b10c_0010ba44.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


bool fn_0010ba44(void)

{
  return (DAT_0089a580 & 7) == 6;
}



void fn_0010ba30(void)

{
  DAT_008bfbdd = 1;
  return;
}



int fn_0010b944(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20000;
  svc_0x32();
  iVar1 = DAT_008c0378;
  if (-1 < DAT_008c0378) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong fn_0010b58c(void)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int local_58;
  int local_54;
  int local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  puVar3 = (uint *)fn_001142a8(auStack_38,2000,1,1,0,0,0,0);
  lVar2 = (ulonglong)(*puVar3 - DAT_0089a638) * 1000000;
  local_40 = (undefined4)lVar2;
  local_3c = (puVar3[1] - (DAT_0089a63c + (uint)(*puVar3 < DAT_0089a638))) * 1000000 +
             (int)((ulonglong)lVar2 >> 0x20);
  local_48 = fn_00129f6c(&local_40,local_3c,0xd7b634db,0x431bde82,0x12);
  puVar3 = (uint *)fn_001142a8(auStack_38,0x834,1,1,0,0,0,0);
  puVar4 = (uint *)fn_001142a8(auStack_30,2000,1,1,0,0,0,0);
  lVar2 = (ulonglong)(*puVar3 - *puVar4) * 1000000;
  local_40 = (undefined4)lVar2;
  local_3c = (puVar3[1] - (puVar4[1] + (uint)(*puVar3 < *puVar4))) * 1000000 +
             (int)((ulonglong)lVar2 >> 0x20);
  lVar20 = fn_00129f6c(&local_40,local_40,0xd7b634db,0x431bde82,0x12);
  svc_0x28();
  iVar1 = (_DAT_1ff81000 & 1) * 0x20;
  uVar13 = *(uint *)(iVar1 + 0x1ff81020);
  iVar14 = *(int *)(iVar1 + 0x1ff81024);
  uVar11 = *(uint *)(iVar1 + 0x1ff8103c);
  uVar12 = *(uint *)(iVar1 + 0x1ff81038);
  coproc_moveto_Data_Memory_Barrier(0);
  uVar15 = (uint)lVar20 - *(uint *)(iVar1 + 0x1ff81028);
  uVar17 = (int)((ulonglong)lVar20 >> 0x20) -
           (*(int *)(iVar1 + 0x1ff8102c) + (uint)((uint)lVar20 < *(uint *)(iVar1 + 0x1ff81028)));
  uVar21 = fn_0011c134(0,1000,*(int *)(iVar1 + 0x1ff81030),*(int *)(iVar1 + 0x1ff81030) >> 0x1f);
  uVar6 = (uint)(uVar21 >> 0x20);
  uVar9 = (uint)((uVar21 & 0xffffffff) * (ulonglong)uVar15 >> 0x20);
  lVar2 = (uVar21 & 0xffffffff) * (ulonglong)uVar17;
  uVar19 = (uint)lVar2;
  uVar18 = (uint)((ulonglong)uVar15 * (ulonglong)uVar6);
  uVar7 = uVar19 + uVar18;
  uVar8 = uVar7 + uVar9;
  uVar10 = uVar8 + uVar13;
  iVar16 = ((int)uVar17 >> 0x1f) * (int)uVar21 + (int)((ulonglong)lVar2 >> 0x20) +
           ((int)uVar6 >> 0x1f) * uVar15 + (int)((ulonglong)uVar15 * (ulonglong)uVar6 >> 0x20) +
           (uint)CARRY4(uVar19,uVar18) + uVar17 * uVar6 + (uint)CARRY4(uVar7,uVar9) + iVar14 +
           (uint)CARRY4(uVar8,uVar13);
  local_58 = 3600000 - (uVar10 - uVar13);
  iVar1 = (iVar16 - (iVar14 + (uint)(uVar10 < uVar13))) + (uint)(3600000 < uVar10 - uVar13);
  local_54 = -iVar1;
  local_50[0] = 0;
  local_50[1] = 0;
  piVar5 = local_50;
  if ((int)-(local_54 + (uint)(local_58 != 0)) < 0 !=
      (SBORROW4(0,local_54) != SBORROW4(iVar1,(uint)(local_58 != 0)))) {
    piVar5 = &local_58;
  }
  uVar21 = fn_0011c134(0,*piVar5,3600000,0);
  uVar6 = (uint)(uVar21 >> 0x20);
  uVar9 = (uint)((uVar21 & 0xffffffff) * (ulonglong)uVar12 >> 0x20);
  lVar2 = (uVar21 & 0xffffffff) * (ulonglong)uVar11;
  uVar17 = (uint)lVar2;
  uVar15 = (uint)((ulonglong)uVar12 * (ulonglong)uVar6);
  uVar7 = uVar17 + uVar15;
  uVar8 = uVar7 + uVar9;
  uVar13 = uVar8 + uVar10;
  fn_0011c134(uVar13 - (uint)local_48,
               (((int)uVar11 >> 0x1f) * (int)uVar21 + (int)((ulonglong)lVar2 >> 0x20) +
                ((int)uVar6 >> 0x1f) * uVar12 + (int)((ulonglong)uVar12 * (ulonglong)uVar6 >> 0x20)
                + (uint)CARRY4(uVar17,uVar15) + uVar11 * uVar6 + (uint)CARRY4(uVar7,uVar9) + iVar16
               + (uint)CARRY4(uVar8,uVar10)) - (((unsigned long long)(local_48) >> 32) & 0xffffffff + (uint)(uVar13 < (uint)local_48)),
               (int)lVar20,(int)((ulonglong)lVar20 >> 0x20));
  return lVar20 + local_48;
}



int fn_0010b500(void)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_00170704(&DAT_008ebe50);
  if (DAT_008bfc00 == 0) {
    fn_0013db70();
    uVar1 = fn_002febd8((char *)&DAT_007e3ff4);
    iVar2 = fn_0014fe94(&DAT_008c07ec,(char *)&DAT_007e3ff4,uVar1,0);
    if (iVar2 < 0) {
      fn_001707b4(&DAT_008ebe50);
      return iVar2;
    }
  }
  DAT_008bfc00 = DAT_008bfc00 + 1;
  fn_001707b4(&DAT_008ebe50);
  return 0;
}



void fn_0010b444(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_2[1];
  uVar3 = param_2[1];
  lVar2 = (ulonglong)uVar8 * 0xd7b634db +
          CONCAT44(((int)uVar8 >> 0x1f) * -0x2849cb25,
                   (int)((ulonglong)*param_2 * 0xd7b634db >> 0x20));
  lVar1 = (ulonglong)*param_2 * 0x431bde82;
  uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar6 = (uint)((ulonglong)uVar8 * 0x431bde82);
  uVar4 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar2);
  iVar5 = ((int)uVar4 >> 0x1f) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7) +
          ((int)uVar8 >> 0x1f) * 0x431bde82 + (int)((ulonglong)uVar8 * 0x431bde82 >> 0x20) +
          (uint)CARRY4(uVar4 + uVar7,uVar6);
  uVar4 = uVar4 + uVar7 + uVar6 >> 0x12 | iVar5 * 0x4000;
  uVar6 = uVar4 + -((int)uVar3 >> 0x1f);
  uVar7 = *param_1;
  *param_1 = uVar6 + uVar7;
  param_1[1] = (iVar5 >> 0x12) + (uint)CARRY4(uVar4,-((int)uVar3 >> 0x1f)) + param_1[1] +
               (uint)CARRY4(uVar6,uVar7);
  return;
}



void fn_0010b2b4(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = (param_4 + -0x3c) / 0x23ab1;
  uVar6 = (param_4 + -0x3c) % 0x23ab1;
  if ((int)uVar6 < 0) {
    iVar1 = iVar1 + -1;
    uVar6 = uVar6 + 0x23ab1;
  }
  iVar2 = (int)((longlong)(int)uVar6 * -0x1a537e05 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar3 = (iVar2 >> 0xf) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar6 * -0x1a537e05 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar7 = uVar6 + ((iVar2 >> 0xf) - (iVar2 >> 0x1f)) * -0x8eac;
  uVar6 = iVar7 % 0x5b5;
  iVar2 = (int)((longlong)(int)uVar6 * -0x4c73064f + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar4 = (iVar2 >> 8) - (iVar2 >> 0x1f);
  iVar2 = (int)((longlong)(int)uVar6 * -0x4c73064f + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar5 = ((iVar2 >> 8) - (iVar2 >> 0x1f)) * -0x16d + uVar6;
  uVar6 = iVar5 * 5 + 2;
  iVar2 = (int)((longlong)(int)uVar6 * -0x29d47f29 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 7) - (iVar2 >> 0x1f);
  iVar7 = iVar1 * 400 + iVar3 * 100 + (iVar7 / 0x5b5) * 4 + iVar4;
  iVar8 = iVar7 + 2000;
  iVar1 = (iVar5 - (iVar2 * 0x99 + 2) / 5) + 1;
  if (iVar4 == 4 || iVar3 == 4) {
    iVar2 = 0xb;
    iVar1 = 0x1d;
    iVar8 = iVar7 + 1999;
  }
  else if (iVar2 < 10) {
    iVar2 = iVar2 + 3;
    goto LAB_0010b400;
  }
  iVar2 = iVar2 + -9;
  iVar8 = iVar8 + 1;
LAB_0010b400:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return;
}



void fn_0010b2a4(undefined4 param_1)

{
  DAT_0089a7a0 = param_1;
  return;
}



void fn_0010b25c(void)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = fn_0010fec4(local_10,0xffff8001,0x14);
  if (iVar1 < 0) {
    fn_0015e294();
  }
  DAT_008c33a4 = local_10[0];
  return;
}



undefined4 fn_0010b1fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 4)) {
    iVar1 = fn_00113e58(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}



int * fn_0010b134(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [52];
  
  if (*param_1 < 2) {
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 4))();
      param_1[1] = 0;
    }
    fn_001433d8(param_1 + 3);
    piVar1 = (int *)fn_001283fc(auStack_48);
    iVar2 = piVar1[1];
    iVar3 = piVar1[2];
    iVar4 = piVar1[3];
    iVar5 = piVar1[4];
    iVar6 = piVar1[5];
    iVar7 = piVar1[6];
    iVar8 = piVar1[7];
    param_1[3] = *piVar1;
    param_1[4] = iVar2;
    param_1[5] = iVar3;
    param_1[6] = iVar4;
    param_1[7] = iVar5;
    param_1[8] = iVar6;
    param_1[9] = iVar7;
    param_1[10] = iVar8;
    iVar2 = piVar1[9];
    iVar3 = piVar1[10];
    iVar4 = piVar1[0xb];
    iVar5 = piVar1[0xc];
    param_1[0xb] = piVar1[8];
    param_1[0xc] = iVar2;
    param_1[0xd] = iVar3;
    param_1[0xe] = iVar4;
    param_1[0xf] = iVar5;
    if (param_1[2] != 0) {
      fn_0012d73c();
      param_1[2] = 0;
    }
    *param_1 = 0;
  }
  else {
    *param_1 = *param_1 + -1;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



int fn_0010b10c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = fn_001283fc(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x35) = 0xffffffff;
  return iVar1 + -0xc;
}


