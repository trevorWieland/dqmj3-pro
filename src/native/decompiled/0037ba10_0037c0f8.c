#include "0037ba10_0037c0f8.h"



undefined4 fn_0037c0f8(int param_1)

{
  return *(undefined4 *)(&DAT_007c4bcc + param_1 * 0xc);
}



undefined1 fn_0037c0e4(int param_1)

{
  return (&DAT_007c4d6c)[param_1 * 8];
}



undefined1 fn_0037c0d0(int param_1)

{
  return (&DAT_007c4c6c)[param_1 * 8];
}



undefined1 fn_0037c0b8(int param_1)

{
  return (&DAT_007c4bc8)[param_1 * 0xc];
}



undefined1 fn_0037c0a4(int param_1)

{
  return (&DAT_007c4d44)[param_1 * 8];
}



undefined1 fn_0037c074(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = fn_00154ac8(0x38);
  if (iVar1 == 0) {
    puVar2 = &DAT_007c4cf8;
  }
  else {
    puVar2 = &UNK_007c4d18;
  }
  return puVar2[param_1 * 8 + 4];
}



undefined4 fn_0037c060(int param_1)

{
  return *(undefined4 *)(&DAT_007c4bc4 + param_1 * 0xc);
}



undefined4 fn_0037bfe4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1) {
  case 0:
    return 10;
  case 1:
    return 3;
  case 2:
    iVar2 = fn_00154ac8(0x38);
    if (iVar2 == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = 8;
    }
    return uVar1;
  case 3:
    iVar2 = fn_00154ac8(0x38);
    if (iVar2 == 0) {
      return 4;
    }
switchD_0037bfec_caseD_4:
    return 5;
  case 4:
    goto switchD_0037bfec_caseD_4;
  case 5:
    return 4;
  default:
    return 0;
  }
}



undefined4 * fn_0037bed4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_00829028;
  param_1[1] = param_3;
  param_1[5] = param_2;
  param_1[6] = 0;
  return param_1;
}



undefined4 fn_0037bdbc(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  char local_28 [16];
  
  local_28[0] = '\0';
  piVar1 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar1 + 0x68))();
  if (iVar2 == 0) {
    uVar4 = fn_006c3fa0(param_1,param_2,param_3,local_28);
    goto LAB_0037be9c;
  }
  iVar2 = fn_006f7a5c(DAT_008977e0);
  iVar3 = fn_006c3ebc(param_1,iVar2 + 0x1c,param_2 + 0x20);
  if (iVar3 == 0) {
LAB_0037be44:
    uVar4 = 0;
  }
  else {
    fVar5 = *(float *)(iVar2 + 0x20);
    if (fVar5 <= *(float *)(param_2 + 0x24)) {
      fVar6 = 50.0;
      fn_006c3e34(param_1,param_2);
      local_28[0] = '\x01';
      if ((*(float *)(iVar2 + 0x20) + fVar6 < fVar5) && (iVar2 = fn_003415b0(), iVar2 == 0))
      goto LAB_0037be44;
    }
    uVar4 = 1;
  }
LAB_0037be9c:
  if (local_28[0] != '\0') {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return uVar4;
}



void fn_0037bda0(int param_1)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  fn_006c3e34(param_1,*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = in_s0;
  *(undefined4 *)(param_1 + 0xc) = in_s1;
  *(undefined4 *)(param_1 + 0x10) = in_s2;
  return;
}



undefined4 fn_0037bc70(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x44))
              (*(int **)(param_1 + 4),*(undefined4 *)(param_1 + 0x58),4,0);
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
  }
  else if (param_2 == 2) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
    if (((iVar1 != 0) && (iVar1 = fn_006a9938(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)) &&
       (iVar1 = fn_006a99b0(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0)) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(*(int **)(param_1 + 0x14),1);
    }
  }
  else if (((param_2 != 1) && (param_2 == 0x14)) &&
          (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x160))(), iVar1 != 0)) {
    *(undefined4 *)(param_3 + 4) = 0xe;
  }
  return 1;
}



undefined4 *
fn_0037ba10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = (undefined4 *)fn_001dbf48(param_1,8,param_3,param_4,param_4);
  *puVar2 = &DAT_00828ed4;
  puVar2[0x5a] = 0;
  uVar12 = 2;
  iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
  if (iVar3 < 3) {
    if ((puVar2[0x55] & 0x3fffffff) < 2) {
      piVar4 = (int *)puVar2[0x52];
      if (((piVar4 == (int *)0x0) || ((puVar2[0x55] & 0xc0000000) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,0x18),
         puVar5 == (undefined4 *)0x0)) {
        uVar12 = puVar2[0x55] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar8 = (undefined4 *)puVar2[0x53];
        puVar10 = (undefined4 *)puVar2[0x54];
        puVar6 = puVar5;
        if (puVar8 != puVar10) {
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar13 = puVar8[1];
              uVar14 = puVar8[2];
              *puVar6 = *puVar8;
              puVar6[1] = uVar13;
              puVar6[2] = uVar14;
            }
            puVar8 = puVar8 + 3;
            puVar6 = puVar6 + 3;
          } while (puVar8 != puVar10);
          iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc;
        }
        uVar7 = puVar2[0x53];
        if (uVar7 != 0) {
          uVar11 = puVar2[0x54];
          uVar1 = uVar7;
          if (uVar7 < uVar11) {
            iVar9 = 1;
            if (1 < (int)(uVar11 - uVar7) / 0xc + 1) {
              do {
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)(uVar11 - uVar7) / 0xc + 1);
            }
          }
          else {
            for (; uVar1 != uVar11; uVar1 = uVar1 + 0xc) {
            }
          }
          puVar2[0x54] = uVar7;
          piVar4 = (int *)puVar2[0x52];
          (**(code **)(*piVar4 + 0xc))(piVar4,puVar2[0x53]);
        }
        puVar2[0x53] = puVar5;
        puVar2[0x54] = puVar5 + iVar3 * 3;
        puVar2[0x55] = puVar2[0x55] & 0xc0000000 | 2;
      }
    }
    for (iVar3 = (int)(puVar2[0x54] - puVar2[0x53]) / 0xc; iVar3 < (int)uVar12; iVar3 = iVar3 + 1) {
      puVar5 = (undefined4 *)(puVar2[0x53] + iVar3 * 0xc);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xffffffff;
        puVar5[1] = 0xffffffff;
        puVar5[2] = 0xffffffff;
      }
    }
    iVar3 = puVar2[0x53] + uVar12 * 0xc;
  }
  else {
    do {
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar3);
    iVar3 = puVar2[0x53] + 0x18;
  }
  puVar2[0x54] = iVar3;
  fn_001da490(puVar2,0,0,0,0);
  fn_001da490(puVar2,1,1,1,1);
  return puVar2;
}


