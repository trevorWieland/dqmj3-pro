#include "002fb70c_002fbfe4.h"



void fn_002fbfe4(int *param_1)

{
  param_1 = (int *)*param_1;
  if ((char)param_1[1] == '\0') {
    *param_1 = *param_1 + 1;
  }
  return;
}



void fn_002fbfc8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



int fn_002fbf68(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x54) + 8);
  return (*(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c)) / 0x2c;
}



void fn_002fbf50(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[10] = 0;
  return;
}



int fn_002fbefc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x54) + 8);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x28) == '\0')) {
    return 0;
  }
  return *(int *)(iVar1 + 0x44) + param_1 * 0x2c;
}



int fn_002fbea8(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  pcVar2 = *(char **)(*(int *)(iVar1 + 0x54) + 8);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    return 0;
  }
  return *(int *)(pcVar2 + 0x1c) + param_1 * 0x2c;
}



bool fn_002fbe6c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),param_1);
  iVar2 = fn_00147e6c(uVar1,&DAT_002fbea4,3);
  return iVar2 == 0;
}



undefined4 fn_002fbd30(float *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *unaff_r9;
  float fVar8;
  float fVar10;
  longlong lVar9;
  
  lVar9 = 0x47c3500000000000;
  uVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002fbe60);
  iVar7 = 0;
  iVar3 = fn_006f7a0c(DAT_008977e0);
  iVar3 = *(int *)(*(int *)(iVar3 + 0x54) + 8);
  iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x2c + iVar1;
  iVar4 = iVar3 - iVar1;
  if (iVar3 != iVar1 && -1 < iVar4) {
    unaff_r9 = (undefined4 *)0x0;
  }
  if (0 < iVar4) {
    do {
      fVar10 = (float)((ulonglong)lVar9 >> 0x20);
      iVar3 = fn_006f7a0c(DAT_008977e0);
      pcVar5 = *(char **)(*(int *)(iVar3 + 0x54) + 8);
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
        puVar6 = unaff_r9;
      }
      else {
        puVar6 = (undefined4 *)(*(int *)(pcVar5 + 0x1c) + iVar7 * 0x2c);
      }
      iVar7 = iVar7 + 1;
      fVar8 = SQRT(((float)puVar6[1] - *param_1) * ((float)puVar6[1] - *param_1) +
                   ((float)puVar6[2] - param_1[1]) * ((float)puVar6[2] - param_1[1]) +
                   ((float)puVar6[3] - param_1[2]) * ((float)puVar6[3] - param_1[2]));
      lVar9 = CONCAT44(fVar10,fVar8);
      if (fVar8 < fVar10) {
        lVar9 = (ulonglong)(uint)fVar8 << 0x20;
        uVar2 = *puVar6;
      }
      iVar3 = fn_006f7a0c(DAT_008977e0);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x54) + 8);
    } while (iVar7 < (*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c)) / 0x2c);
  }
  return uVar2;
}



int fn_002fbb94(float *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *unaff_r9;
  int *unaff_r11;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  iVar8 = 0;
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x54) + 8);
  iVar1 = *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c);
  iVar6 = iVar1 >> 0x1f;
  iVar1 = iVar1 / 0x2c + iVar6;
  iVar2 = iVar1 - iVar6;
  if (iVar1 != iVar6 && -1 < iVar2) {
    unaff_r9 = &DAT_00891960;
    unaff_r11 = (int *)0x0;
  }
  if (0 < iVar2) {
    do {
      iVar1 = fn_006f7a0c(DAT_008977e0);
      pcVar3 = *(char **)(*(int *)(iVar1 + 0x54) + 8);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        piVar7 = unaff_r11;
      }
      else {
        piVar7 = (int *)(*(int *)(pcVar3 + 0x1c) + iVar8 * 0x2c);
      }
      uVar11 = CONCAT44((float)piVar7[1] - *param_1,(float)piVar7[3] - param_1[2]);
      iVar6 = *piVar7;
      uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),iVar6);
      iVar1 = fn_00147e6c(uVar4,&DAT_002fbea4,3);
      if (iVar1 == 0) {
        uVar4 = 0x2da;
      }
      else {
        uVar5 = 0;
        do {
          iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),unaff_r9[uVar5 * 2]);
          if (iVar1 == iVar6) {
            uVar4 = unaff_r9[uVar5 * 2 + 1];
            goto LAB_002fbca8;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
        uVar4 = 0xf3c;
      }
LAB_002fbca8:
      fVar10 = (float)((ulonglong)uVar11 >> 0x20);
      fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = fVar10 * fVar10 + (float)uVar11 * (float)uVar11;
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar9 * fVar9) << 0x1f;
      in_fpscr = uVar5 | (uint)(NAN(fVar10) || NAN(fVar9 * fVar9)) << 0x1c;
      if ((byte)(uVar5 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
        return *piVar7;
      }
      iVar8 = iVar8 + 1;
      iVar1 = fn_006f7a0c(DAT_008977e0);
      iVar1 = *(int *)(*(int *)(iVar1 + 0x54) + 8);
    } while (iVar8 < (*(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c)) / 0x2c);
  }
  return -1;
}



void fn_002fbb18(undefined4 *param_1)

{
  *param_1 = &DAT_0082169c;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = &DAT_00859070;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



void fn_002fba48(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(int *)(param_1 + 0x14) = iVar4;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x18) = uVar3;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  if ((iVar4 == *(int *)(param_1 + 0x1c)) &&
     (((iVar4 == 0 && (((*(byte *)(param_1 + 0x18) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
    iVar4 = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  if ((*(int *)(param_1 + 0xc) == 0) &&
     ((*(uint *)(param_1 + 0x10) & 1) == 0 || *(uint *)(param_1 + 0x10) == 0)) {
    return;
  }
  pcVar2 = *(code **)(param_1 + 0xc);
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x10) >> 1)));
  }
  (*pcVar2)();
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}



void fn_002fb87c(int param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 in_s0;
  undefined1 auStack_94 [128];
  undefined1 auStack_2 [2];
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(code **)(param_1 + 0x1c) = fn_002fb70c;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(code **)(param_1 + 0x14) = fn_002fb70c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(code **)(param_1 + 0xc) = fn_002fb70c;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_006ebdc0(DAT_008977d0);
  *(undefined4 *)(param_1 + 0x2c) = in_s0;
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    fn_00163988(DAT_00897808,auStack_94 + 0x88);
    fn_00163988(DAT_0089780c,auStack_94 + 0x84,1);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x002fb78c) */

void fn_002fb70c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_20;
  
  uVar2 = 1;
  local_20 = param_4;
  if (*(char *)(param_1 + 4) == '\x01' || *(char *)(param_1 + 4) == '\x02') {
    fn_006f7a5c(DAT_008977e0);
    uVar2 = fn_006a93fc();
  }
  if (((*(char *)(param_1 + 0x38) == '\0') &&
      (*(char *)(param_1 + 4) == '\x01' || *(char *)(param_1 + 4) == '\x02')) &&
     (*(int *)(param_1 + 0x34) == 0x14)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    local_20 = 0xff000000;
    fn_00163988(DAT_00897808,&local_20,10);
  }
  uVar3 = fn_006f73a0(DAT_008977e0,1);
  uVar1 = DAT_008977d0;
  if ((uVar3 & uVar2) != 0) {
    iVar4 = fn_006ebdd4(DAT_008977d0);
    if (iVar4 != 0) {
      fn_005e9db0(uVar1);
      fn_00173b98(uVar1,0);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}


