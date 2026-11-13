#include "001621d0_00162814.h"



undefined4 *
fn_00162814(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_00845474;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_4;
  puVar1[4] = param_5;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(undefined1 *)((int)puVar1 + 0x15) = 8;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[2] = param_3;
  puVar1[0xb] = 0;
  fn_0016c358(param_3,puVar1 + 9,puVar1 + 10,puVar1 + 0xb);
  return puVar1;
}



int fn_00162750(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00172d60();
  *puVar1 = &DAT_008584a8;
  puVar1[0x47] = param_2;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined1 *)((int)puVar1 + 0x121) = 0;
  iVar2 = fn_00173340(puVar1 + 0x49);
  return iVar2 + -0x124;
}



uint fn_001626ec(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_2 + 3U & 0xfffffffc);
  uVar1 = fn_00169f1c(param_3 - ((int)puVar3 - param_2),0x138);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = puVar3;
      puVar3 = puVar3 + 0x4e;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}



int fn_00162694(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0017eca4();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = &DAT_0085839c;
  puVar1[0x11] = &DAT_008583cc;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1[0x43] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  iVar2 = fn_00101a1c(puVar1 + 0x8a,&LAB_0017301c,0x3c8,8);
  return iVar2 + -0x228;
}



int fn_00162618(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[5] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar1 = (undefined4 *)fn_0017e758(param_1 + 0x19);
  *puVar1 = &DAT_00858388;
  puVar1[9] = puVar1 + 9;
  puVar1[8] = 0;
  puVar1[10] = puVar1 + 9;
  puVar1[0xb] = 0;
  iVar2 = fn_00101a1c(puVar1 + 0xc,fn_00173460,0x58,0x20);
  fn_001626f8(iVar2 + -4,iVar2,0xb00,0x58);
  return iVar2 + -0x94;
}



uint fn_001626f8(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)(param_2 + 3U & 0xfffffffc);
  uVar4 = param_4 + 3U & 0xfffffffc;
  uVar1 = fn_00169f1c(param_3 - ((int)puVar3 - param_2),uVar4);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = *param_1;
      *param_1 = puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + uVar4);
    } while (uVar2 < uVar1);
  }
  return uVar1;
}



void fn_001625e4(int param_1,int param_2)

{
  fn_00170704(param_1 + 0x1c4);
  fn_0017d948(param_1 + 0x1d0,param_1 + 0x1d4,param_2 + 4);
  fn_001707b4(param_1 + 0x1c4);
  return;
}



void fn_0016224c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  fn_00170704(param_1 + 0x1c4);
  piVar2 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar1 = (int *)*piVar2;
      (**(code **)(piVar2[-1] + 8))(piVar2 + -1);
      piVar2 = piVar1;
    } while (piVar1 != (int *)(param_1 + 0x1d4));
  }
  piVar2 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar1 = (int *)*piVar2;
      (**(code **)(piVar2[-1] + 0xc))(piVar2 + -1);
      piVar2 = piVar1;
    } while (piVar1 != (int *)(param_1 + 0x1e0));
  }
  fn_0017313c(&DAT_008ece50);
  fn_00141104();
  fn_00172f4c();
  fn_001524d0();
  fn_00172f4c();
  piVar2 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar1 = (int *)*piVar2;
      (**(code **)(piVar2[-1] + 8))(piVar2 + -1);
      piVar2 = piVar1;
    } while (piVar1 != (int *)(param_1 + 0x1e0));
  }
  fn_00152724();
  fn_00173040();
  fn_00172f98();
  fn_0018b794();
  fn_001733d4();
  piVar2 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar1 = (int *)*piVar2;
      (**(code **)(piVar2[-1] + 0xc))(piVar2 + -1);
      piVar2 = piVar1;
    } while (piVar1 != (int *)(param_1 + 0x1d4));
  }
  fn_001707b4(param_1 + 0x1c4);
  return;
}



void fn_001621d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 in_stack_fffffff4;
  
  if (*(char *)(param_1 + 0x1f6) == '\x01') {
    local_18 = 0;
    uStack_14 = 0;
    fn_00171380(&local_10);
    local_18 = local_10;
    if (*(int *)(param_1 + 0x1c0) < *(int *)(param_1 + 0x1bc)) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x1b8) + *(int *)(param_1 + 0x1c0) * 8);
      *puVar1 = local_10;
      puVar1[1] = in_stack_fffffff4;
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    }
    fn_001623b0(param_1,&local_18);
  }
  fn_00170704(param_1 + 0x1c4);
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  fn_0017313c(&DAT_008ece50);
  fn_00141104();
  fn_00172f4c();
  fn_001524d0();
  fn_00172f4c();
  piVar3 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(code **)(piVar3[-1] + 8))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  fn_00152724();
  fn_00173040();
  fn_00172f98();
  fn_0018b794();
  fn_001733d4();
  piVar3 = *(int **)(param_1 + 0x1d4);
  if (*(int **)(param_1 + 0x1d4) != (int *)(param_1 + 0x1d4)) {
    do {
      piVar2 = (int *)*piVar3;
      (**(code **)(piVar3[-1] + 0xc))(piVar3 + -1);
      piVar3 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1d4));
  }
  fn_001707b4(param_1 + 0x1c4);
  return;
}



void fn_001623b0(uint *param_1,uint *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  
  if (*(char *)((int)param_1 + 0x1f6) == '\x01') {
    uVar5 = *param_2;
    uVar8 = param_2[1];
    uVar9 = *param_1;
    *param_1 = uVar5 + uVar9;
    param_1[1] = uVar8 + param_1[1] + (uint)CARRY4(uVar5,uVar9);
    param_1[2] = param_1[2] + 1;
    iVar6 = fn_001711a4();
    param_1[3] = iVar6 + param_1[3];
    if ((char)param_1[0x6d] == '\x01') {
      uVar5 = param_2[1];
      uVar2 = (ulonglong)*param_2 * 3 +
              ((ulonglong)
               (uint)(((int)uVar5 >> 0x1f) * -0x452cb512 +
                     (int)((ulonglong)uVar5 * 0xbad34aee >> 0x20)) << 0x20 |
              (ulonglong)uVar5 * 0xbad34aee & 0xffffffff) +
              CONCAT44(uVar5 * 3,(int)((ulonglong)*param_2 * 0xbad34aee >> 0x20));
      uVar9 = (uint)(uVar2 >> 0x20);
      iVar6 = (int)uVar9 >> 0x1f;
      lVar3 = (ulonglong)uVar9 * 0xe353f7cf +
              CONCAT44(iVar6 * -0x1cac0831,(int)((uVar2 & 0xffffffff) * 0xe353f7cf >> 0x20));
      lVar1 = (uVar2 & 0xffffffff) * 0x20c49ba5;
      uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar11 = (uint)((ulonglong)uVar9 * 0x20c49ba5);
      uVar5 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar1);
      uVar8 = uVar5 + uVar13;
      iVar10 = ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar5,uVar13) +
               iVar6 * 0x20c49ba5 + (int)((ulonglong)uVar9 * 0x20c49ba5 >> 0x20) +
               (uint)CARRY4(uVar8,uVar11);
      uVar5 = uVar8 + uVar11 >> 7 | iVar10 * 0x2000000;
      fVar7 = (float)fn_00191dd4(uVar5 + -iVar6,(iVar10 >> 7) + (uint)CARRY4(uVar5,-iVar6));
      pfVar12 = (float *)(param_1 + 4);
      fVar7 = fVar7 * 0.02045408;
      if ((fVar7 < 0.0) || (0x42c80000 < (int)fVar7)) {
        param_1[0x6c] = param_1[0x6c] + 1;
      }
      fVar14 = *pfVar12;
      if (*pfVar12 < fVar7) {
        fVar14 = fVar7;
      }
      iVar6 = (int)fVar7;
      *pfVar12 = fVar14;
      if (iVar6 < 0x65) {
        pfVar12[iVar6 + 2] = (float)((int)pfVar12[iVar6 + 2] + 1);
      }
      param_1[0x6b] = param_1[0x6b] + 1;
      param_1[5] = (uint)((float)param_1[5] + fVar7);
      if (param_1[0x7e] != 0) {
        if ((int)param_1[0x81] < (int)param_1[0x80]) {
          pfVar12 = (float *)(param_1[0x7e] + param_1[0x81] * 8);
          fn_0018b794();
          uVar4 = fn_00176ca0();
          *(undefined1 *)(pfVar12 + 1) = uVar4;
          *(char *)((int)pfVar12 + 5) = (char)param_1[0x7f];
          *pfVar12 = fVar7;
          param_1[0x81] = param_1[0x81] + 1;
        }
      }
      param_1[0x7f] = 0;
    }
  }
  return;
}


