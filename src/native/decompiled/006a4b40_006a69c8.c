#include "006a4b40_006a69c8.h"



void fn_006a69c8(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  param_1[0x6b] = *(int *)(iVar1 + 8);
  iVar1 = (**(code **)(*param_1 + 0x44))(param_1,0x9c4b,1);
  param_1[0x66] = iVar1;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00263814();
  fn_00660790(7,iVar1 + 8,param_1 + 2);
  param_1[0x68] = 0xf;
  if (param_1[0x65] != -1) {
    piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar2 + 0xc))(piVar2,param_1[0x65]);
    param_1[0x65] = -1;
  }
  *(undefined1 *)(param_1 + 0x67) = 0;
  return;
}



void fn_006a6980(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x194) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



void fn_006a6888(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_00144810(DAT_008977e8);
  fn_0030fd30();
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x78))(param_1);
    break;
  case 1:
    (**(code **)(*param_1 + 0x7c))(param_1);
    break;
  case 2:
    (**(code **)(*param_1 + 0x80))(param_1);
    break;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x006a6918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x84))(param_1);
    return;
  case 4:
    (**(code **)(*param_1 + 0x88))(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x8c))(param_1);
    uVar1 = 0x9c5f;
    goto LAB_006a695c;
  case 6:
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  uVar1 = 0x9c54;
LAB_006a695c:
                    /* WARNING: Could not recover jumptable at 0x006a6970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,uVar1,1);
  return;
}



void fn_006a6840(int param_1)

{
  undefined4 uVar1;
  
  fn_0014481c(DAT_008977e8);
  uVar1 = fn_006b6c30();
  fn_00261b38(uVar1,(int)*(char *)(param_1 + 0x219));
  fn_0068c700(DAT_008977e8);
  uVar1 = fn_001fe714();
  fn_002328e0(uVar1,0xc,param_1);
  return;
}



void fn_006a6834(int param_1)

{
  fn_001003e0(param_1 + 0x13e);
  return;
}



void fn_006a67f8(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}



void fn_006a6734(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0x40))(param_1,0x9c5b,1);
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00263814();
  fn_00660790(8,iVar1 + 8,param_1 + 2);
  uVar2 = 0;
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)((int)param_1 + 0x129);
  param_1[99] = 0;
  iVar1 = param_1[0x21] - param_1[0x20] >> 0x1f;
  if ((param_1[0x21] - param_1[0x20]) / 0xc + iVar1 != iVar1) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = param_1[0x20] + uVar2 * 0xc;
      if (1 < *(int *)(iVar1 + 8)) {
        *(undefined4 *)(iVar1 + 8) = 1;
      }
      uVar2 = uVar3;
    } while (uVar3 < (uint)((param_1[0x21] - param_1[0x20]) / 0xc));
  }
  return;
}



void fn_006a6630(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6bc4();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      piVar3 = (int *)fn_006b71a8(uVar2,uVar5 & 0xff);
      if (*(char *)((int)piVar3 + 0x219) != *(char *)(param_1 + 0x219)) {
        if (piVar3[0x89] != -1) {
          piVar4 = (int *)fn_0068c7e8(DAT_008977e8);
          (**(code **)(*piVar4 + 0xc))(piVar4,piVar3[0x89]);
          piVar3[0x89] = -1;
        }
        iVar1 = (**(code **)(*piVar3 + 0x44))(piVar3,0x9c68,0);
        piVar3[0x88] = 0x78;
        piVar3[0x89] = iVar1;
      }
      uVar5 = uVar5 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_006b6bc4();
    } while ((int)uVar5 < iVar1);
  }
  return;
}



void fn_006a4b40(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar6 = param_1[0x20] + param_2 * 0xc;
  cVar1 = *(char *)(iVar6 + 4);
  if (cVar1 == '\b') {
    bVar7 = (char)param_1[0x5b] != '\0';
    cVar2 = '\0';
    if (bVar7) {
      cVar2 = (char)param_1[0x5d];
    }
    bVar8 = cVar2 != '\0';
    if (bVar7 && bVar8) {
      cVar2 = (char)param_1[0x5f];
    }
    if ((bVar7 && bVar8) && cVar2 != '\0') {
      return;
    }
  }
  fn_00144810(DAT_008977e8);
  iVar3 = fn_006a8730();
  if (iVar3 == 1) {
    uVar4 = param_1[0x6b];
    if ((int)uVar4 < 1) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x156);
    }
    if (uVar4 == 0) goto LAB_006a4bcc;
  }
  if (*(char *)((int)param_1 + 0x1e5) == '\0') {
    return;
  }
LAB_006a4bcc:
  if (*(int *)(iVar6 + 8) < 1) {
    if (cVar1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x006a4c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x6c))(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)(&DAT_007c98b8 + param_2 * 4),1);
    switch(cVar1) {
    case '\x01':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],9,4);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0xd,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x18),0x25);
      break;
    case '\x03':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],0xb,4);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_002626cc(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x13,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x25c),0);
      break;
    case '\x04':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],9,4);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x1c,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x78),0x25);
      break;
    case '\x05':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],9,4);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x13,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x270),0x18);
      break;
    case '\x06':
      iVar6 = fn_0068cafc(DAT_008977e8);
      iVar3 = fn_006f8084(param_1);
      param_1[0x59] = iVar3;
      fn_0018d060(param_1[0x17],8,4);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x14,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x194),0x16);
      break;
    case '\a':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x16,iVar3 + 8,param_1 + 2);
      *(undefined1 *)(param_1 + 0x5a) = 0;
      (**(code **)(*param_1 + 0x40))(param_1,0xa036,0);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x1e4),*(undefined4 *)(iVar6 + 0x1ec));
      break;
    case '\b':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x18,iVar3 + 8,param_1 + 2);
      fn_0018d060(param_1[0x17],0xb,4);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x1f8),0x25);
      break;
    case '\t':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0018d060(param_1[0x17],8,4);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x1f,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x1c4),0x16);
      break;
    case '\n':
      iVar6 = fn_0068cafc(DAT_008977e8);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x16,iVar3 + 8,param_1 + 2);
      iVar3 = 0x41f00000;
      fn_0017fe34();
      param_1[0x76] = iVar3;
      (**(code **)(*param_1 + 0x40))(param_1,0xa039,0);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x22c),*(undefined4 *)(iVar6 + 0x234));
      break;
    case '\v':
      iVar6 = fn_0068cafc(DAT_008977e8);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_00261f68(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x1a,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x164),0);
      break;
    case '\f':
      iVar6 = fn_0068cafc(DAT_008977e8);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_0026248c(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x25,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x244),0);
      break;
    case '\r':
      iVar6 = fn_0068cafc(DAT_008977e8);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_00262564(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x18,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x28c),0);
      break;
    case '\x0e':
      iVar6 = fn_0068cafc(DAT_008977e8);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_00262794(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x23,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x2b4),0);
      break;
    case '\x0f':
      iVar6 = fn_0068cafc(DAT_008977e8);
      uVar5 = fn_0014481c(DAT_008977e8);
      fn_002624f8(uVar5,param_1);
      fn_0014481c(DAT_008977e8);
      iVar3 = fn_00263814();
      fn_00660790(0x21,iVar3 + 8,param_1 + 2);
      fn_006a24ec(param_1,param_2,*(undefined4 *)(iVar6 + 0x210),0);
    }
    fn_00144810(DAT_008977e8);
    iVar6 = fn_006a8714();
    if ((iVar6 != 0) && (iVar6 = (**(code **)(*param_1 + 0x98))(param_1), iVar6 != 0)) {
      fn_0034fd78(DAT_008977e8,param_2);
      return;
    }
  }
  return;
}


