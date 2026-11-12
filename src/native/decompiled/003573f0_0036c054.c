#include "003573f0_0036c054.h"



/* WARNING: Removing unreachable block (ram,0x0036c0b8) */

void fn_0036c054(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 local_14 [2];
  
  if (*(int *)(param_1 + 0x20) == 0) {
    local_14[0] = 0;
    fn_00177c88(param_2,0,*(undefined4 *)(*param_2 + -4),local_14,0,0,0);
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  else {
    fn_007854f8(param_2,**(int **)(param_1 + 0x1c) + 8);
    if (*(char *)(param_1 + 0x61) == '\x01') {
      iVar1 = fn_0022eb34(*param_2);
      iVar1 = iVar1 + 1;
      if (iVar1 < 3) {
        iVar1 = 3;
      }
      *(int *)(param_1 + 0x2c) = iVar1;
    }
    piVar2 = (int *)**(int **)(param_1 + 0x1c);
    if (piVar2 != *(int **)(param_1 + 0x1c)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      fn_001588d4(piVar2 + 2);
      *piVar2 = *(int *)(param_1 + 0x10);
      *(int **)(param_1 + 0x10) = piVar2;
      return;
    }
  }
  return;
}



void fn_0036bae4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_00231cb8((&DAT_007c6a61)[param_1 * 2]);
  fn_00243550(param_2,uVar1);
  fn_0022e7e8(param_3,(&DAT_007c6a60)[param_1 * 2]);
  return;
}



void fn_0036baa0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar5 = fn_00231cb8((&DAT_007c6a5d)[param_1 * 2]);
  fn_00243550(param_2,uVar5);
  pcVar7 = *(code **)(&DAT_007c7da8 + (uint)(byte)(&DAT_007c6a5c)[param_1 * 2] * 4);
  if (param_3 != param_4) {
    fn_007a6308(param_3,param_4,(int)param_4 - (int)param_3 >> 4,pcVar7);
    if ((int)param_4 - (int)param_3 < 0x101) {
      fn_007a20dc(param_3,param_4,pcVar7);
      return;
    }
    fn_007a20dc(param_3,param_3 + 0x40,pcVar7);
    for (param_3 = param_3 + 0x40; param_3 != param_4; param_3 = param_3 + 4) {
      local_28 = *param_3;
      uStack_24 = param_3[1];
      uStack_20 = param_3[2];
      uStack_1c = param_3[3];
      iVar4 = (*pcVar7)(&local_28,param_3 + -4);
      puVar3 = param_3 + -4;
      puVar2 = param_3;
      while (puVar1 = puVar3, iVar4 != 0) {
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar8 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar8;
        iVar4 = (*pcVar7)(&local_28);
        puVar3 = puVar1 + -4;
        puVar2 = puVar1;
      }
      *puVar2 = local_28;
      puVar2[1] = uStack_24;
      puVar2[2] = uStack_20;
      puVar2[3] = uStack_1c;
    }
  }
  return;
}



void fn_0036b18c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar5 = iVar1 * iVar2 + param_2;
  if (((int)uVar5 < 0) || ((uint)(*(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4) <= uVar5)
     ) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc4) + uVar5 * 0x10;
  }
  uVar3 = fn_0016a82c((int)*(short *)(iVar1 + 4));
  uVar4 = fn_0022ee7c((int)*(short *)(iVar1 + 4));
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_00363130(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



void fn_00361e1c(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x1a0) = param_2;
  return;
}



void fn_0035ab10(undefined4 *param_1)

{
  param_1[2] = 0xffffffff;
  *param_1 = &DAT_00826af0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  DAT_00891214 = param_1;
  param_1[1] = 4;
  return;
}



void fn_0035775c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = false;
  if (*(char *)(param_1 + 0xc) == '\x03') {
    switch(*(undefined1 *)(param_1 + 0xc0)) {
    case 0:
      uVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x6c))();
      if (uVar1 < 8) {
        uVar2 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),uVar1);
        iVar3 = fn_00354b70(param_1,uVar2);
        *(undefined1 *)(iVar3 + 0x2f) = 0;
      }
      else if (7 < (int)uVar1) {
        iVar3 = *(int *)(param_1 + (uVar1 - 8 & 0xff) * 0x14 + 0xec);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      fn_003565ac(param_1);
      break;
    case 1:
      uVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x6c))();
      if (uVar1 < 8) {
        uVar2 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),uVar1);
        iVar3 = fn_00354b70(param_1,uVar2);
        *(undefined1 *)(iVar3 + 0x2f) = 0;
      }
      else if (7 < (int)uVar1) {
        iVar3 = *(int *)(param_1 + (uVar1 - 8 & 0xff) * 0x14 + 0xec);
        *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x78))();
      if (-1 < iVar3) {
        uVar2 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),iVar3);
        fn_00356428(param_1,uVar2);
      }
      bVar5 = true;
      break;
    case 2:
      fn_003567b8(param_1);
      bVar5 = true;
      break;
    case 3:
      fn_003562b4(param_1);
    }
  }
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x14))();
  if (bVar5) {
    fn_00689030(param_1,0);
    fn_00689030(param_1,1,0);
  }
  else {
    iVar3 = fn_00307600(*(undefined4 *)(param_1 + 0xa8));
    if (iVar3 == 0) {
      iVar3 = 0;
      do {
        if ((*(int *)(param_1 + iVar3 * 8 + 0x118) != 0) &&
           (iVar4 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))
                              (*(int **)(param_1 + 0xa8),0,iVar3), *(char *)(iVar4 + 0x33) != '\0'))
        {
          fn_00689030(param_1,0,1);
          fn_00689030(param_1,1);
          goto LAB_003579b4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    fn_00689030(param_1,0);
    fn_00689030(param_1,1);
  }
LAB_003579b4:
  (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xb4) + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x003579f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x10))();
  return;
}



void fn_003573f0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 0xd8) + -1;
  *(int *)(param_1 + 0xd8) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  }
  if (*(byte *)(param_1 + 0xc0) < 3) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x1c))();
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x20))();
  }
  switch(*(undefined1 *)(param_1 + 0xc0)) {
  case 0:
    fn_00354764(param_1);
    return;
  case 1:
    uVar3 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x88))();
    if (uVar3 < 8) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x4c))();
      if (-1 < iVar2) {
        iVar4 = *(int *)(param_1 + 0xd0);
        bVar7 = SBORROW4(iVar4,iVar2);
        iVar1 = iVar4 - iVar2;
        if (iVar4 != iVar2) {
          bVar7 = SBORROW4(iVar2,8);
          iVar1 = iVar2 + -8;
        }
        if (iVar1 < 0 != bVar7) {
          fn_00355914(param_1,iVar4,iVar2);
          fn_003579f8(param_1,iVar2);
          goto LAB_003574f8;
        }
      }
      uVar6 = 0x1000959;
      if (iVar2 < 0) {
        uVar6 = 0x100094c;
      }
      fn_0068ab44(param_1,uVar6);
      fn_003579f8(param_1,*(undefined4 *)(param_1 + 0xd0));
    }
LAB_003574f8:
    iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xc0))();
    if (iVar2 < 0) {
      return;
    }
    goto LAB_003575c8;
  case 2:
    break;
  default:
    goto switchD_00357454_default;
  }
  fn_00356b94(param_1);
  uVar3 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xa0))();
  if (uVar3 < 8) {
    if ((int)uVar3 < 0) {
LAB_00357568:
      fn_0068ab44(param_1,0x1000959);
    }
    else {
      uVar5 = *(uint *)(param_1 + 0xd0);
      bVar7 = SBORROW4(uVar5,uVar3);
      iVar2 = uVar5 - uVar3;
      if (uVar5 != uVar3) {
        bVar7 = SBORROW4(uVar3,8);
        iVar2 = uVar3 - 8;
      }
      if (iVar2 < 0 == bVar7) goto LAB_00357568;
      fn_00355914(param_1,uVar5,uVar3);
    }
    fn_003579f8(param_1,uVar3);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xa8))();
  if (-1 < iVar2) {
    fn_0068ab44(param_1,0x100094c);
    fn_003579f8(param_1,*(undefined4 *)(param_1 + 0xd0));
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 0xc0))();
  if (iVar2 < 0) {
switchD_00357454_default:
    return;
  }
LAB_003575c8:
  fn_0068ab44(param_1,0x100094d);
  return;
}


