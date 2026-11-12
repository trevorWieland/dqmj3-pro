#include "0061f72c_0061fc90.h"



void fn_0061fc90(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = fn_00691af0(param_1,1);
  uVar2 = fn_00691af0(param_1,2);
  fn_00691af0(param_1,3);
  fn_0063a510(uVar1,uVar2,in_stack_00000000);
  return;
}



undefined4 fn_0061fc60(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08();
  if ((iVar1 == 0) && (iVar1 = fn_00145adc(param_2 + 0xe8), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined1 **
fn_0061f72c(undefined1 **param_1,undefined1 **param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6,short *param_7)

{
  uint uVar1;
  int *piVar2;
  undefined1 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 **ppuVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 **ppuVar12;
  undefined1 ***pppuVar13;
  undefined1 **ppuVar14;
  undefined1 ***pppuVar15;
  undefined1 ***pppuVar16;
  undefined1 ***pppuVar17;
  undefined1 ***pppuVar18;
  undefined1 **ppuVar19;
  int iVar20;
  undefined1 **local_68;
  undefined1 **local_64;
  undefined1 **local_60 [2];
  undefined1 *local_58 [4];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 **local_38;
  int local_34;
  
  pppuVar16 = &local_68;
  pppuVar13 = &local_68;
  pppuVar17 = &local_68;
  pppuVar15 = &local_68;
  pppuVar18 = &local_68;
  iVar20 = (int)*param_7;
  uVar5 = fn_006f4888((int)param_7 + 0xb,0);
  local_34 = fn_006f4888((int)param_7 + 0xb,1);
  local_58[3] = (undefined1 *)fn_006f4888((int)param_7 + 0xb,2);
  local_58[2] = (undefined1 *)fn_006f4888((int)param_7 + 0xb,3);
  local_38 = (undefined1 **)fn_006f4888((int)param_7 + 0xb,5);
  local_60[0] = (undefined1 **)0x0;
  local_68 = param_1;
  local_64 = param_2;
  iVar6 = fn_006396dc(iVar20,uVar5,(int)param_7[1],0);
  iVar7 = fn_006f4888((int)param_7 + 0xb,4);
  if (iVar7 != 0) {
    iVar6 = (iVar6 * 0x73) / 100;
  }
  ppuVar14 = local_58 + 2;
  iVar6 = (param_7[2] * iVar6) / 100;
  if ((undefined1 **)0x7 < param_1 + -4) {
    ppuVar14 = param_1 + -6;
  }
  ppuVar8 = param_2 + (int)param_1 * 0x106 + -0x1020;
  if ((undefined1 **)0x7 < param_1 + -4 && &DAT_00000007 < ppuVar14) {
    ppuVar8 = (undefined1 **)0x0;
  }
  switch(*(undefined1 *)((int)ppuVar8 + 0x59)) {
  case 0:
    puVar3 = local_58[3];
    break;
  case 1:
    puVar3 = local_58[3];
    goto joined_r0x0061f870;
  case 2:
    puVar3 = local_58[2];
joined_r0x0061f870:
    if (puVar3 != (undefined1 *)0x0) {
      iVar7 = 0x73;
      goto LAB_0061f888;
    }
    goto switchD_0061f838_default;
  case 3:
    puVar3 = local_58[2];
    break;
  case 4:
    if (local_58[2] == (undefined1 *)0x0) goto switchD_0061f838_default;
    iVar7 = 0x7d;
    goto LAB_0061f888;
  default:
    goto switchD_0061f838_default;
  }
  if (puVar3 != (undefined1 *)0x0) {
    iVar7 = 0x78;
LAB_0061f888:
    iVar6 = (iVar6 * iVar7) / 100;
  }
switchD_0061f838_default:
  sVar4 = param_7[4];
  local_68 = (undefined1 **)&DAT_007f010c;
  local_64 = (undefined1 **)&DAT_007f0154;
  local_60[0] = (undefined1 **)&DAT_007f019c;
  fn_006398fc(local_58,uVar5,(int)*(char *)((int)param_7 + 9));
  iVar7 = 0;
  if ((0 < (int)local_58[0]) &&
     (iVar7 = (short)(char)sVar4 * 0x67,
     iVar7 = (((iVar7 >> 9) - (iVar7 >> 0x1f)) + 1) * (int)local_58[0], iVar6 < 0)) {
    iVar7 = -iVar7;
  }
  iVar6 = (int)local_58[1] * iVar6;
  iVar9 = fn_0061be08(param_1);
  local_58[0] = &LAB_006917d4;
  local_58[1] = &LAB_00691840;
  local_58[2] = &LAB_00691794;
  local_58[3] = &LAB_006917b4;
  puStack_48 = &LAB_006916c4;
  puStack_44 = &LAB_006916a4;
  puStack_40 = &LAB_00691820;
  puStack_3c = &LAB_00691774;
  iVar10 = fn_00145adc(param_2 + 0x3a);
  if (iVar10 == 0) {
    iVar9 = fn_006921d0(iVar20);
  }
  else if (iVar9 == 0) {
    iVar9 = fn_006923f4(iVar20);
  }
  else {
    iVar9 = fn_006922e8();
  }
  iVar10 = 0;
  uVar1 = (param_6 & 0xffff) >> 8;
  do {
    if (iVar10 == iVar9) {
      iVar9 = (*(code *)local_58[uVar1])((int)(short)iVar10);
      if (((*(char *)((int)param_2 + 1) == '\a') ||
          ((param_1 + -4 < (undefined1 **)0x8 &&
           ('\0' < *(char *)((int)param_2 + (int)param_1 * 0x418 + -0x3fd3))))) && (iVar9 < 0)) {
        iVar9 = (int)(short)-(short)iVar9;
      }
      goto LAB_0061fa08;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x10);
  iVar9 = 100;
LAB_0061fa08:
  iVar10 = local_34;
  iVar6 = (iVar9 * (iVar6 / 100 + iVar7)) / 100;
  iVar7 = fn_00692218(iVar20);
  if (iVar7 != 0 && iVar10 != 0) {
    iVar6 = (iVar6 * 0x96) / 100;
  }
  if (param_5 >> 0x10 != 0) {
    uVar11 = 0;
    do {
      if ((uint)(ushort)(&DAT_007f08fc)[uVar11 * 6] <= param_5 >> 0x10) {
        iVar7 = fn_006f4850(param_2 + 0x3a);
        piVar2 = &DAT_007f0900 + uVar11 * 3;
        if (iVar7 != 0) {
          piVar2 = &DAT_007f0904 + uVar11 * 3;
        }
        iVar7 = *piVar2;
        goto LAB_0061faa0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 4);
  }
  iVar7 = 100;
LAB_0061faa0:
  local_68 = local_38;
  uVar5 = fn_00637eb0((iVar7 * iVar6) / 100,iVar20,param_1,param_2);
  local_68 = param_2;
  ppuVar8 = (undefined1 **)fn_00639ac0(uVar5,iVar20,(int)(char)param_7[3],param_1);
  sVar4 = param_7[3];
  ppuVar19 = param_2 + (char)sVar4 * 0x106 + -0x1020;
  ppuVar12 = (undefined1 **)fn_0069259c(iVar20);
  ppuVar14 = ppuVar12;
  if (ppuVar19 != (undefined1 **)0x0) {
    iVar6 = fn_006f44fc(ppuVar19,0x1a5);
    ppuVar14 = (undefined1 **)0x0;
    if (iVar6 != 0) {
      local_68 = (undefined1 **)((int)ppuVar12 << 1);
      local_58[1] = (undefined1 *)0xffffd8f1;
      local_58[2] = (undefined1 *)0x270f;
      if ((int)local_68 < -9999) {
        pppuVar16 = (undefined1 ***)(local_58 + 1);
      }
      if ((int)*pppuVar16 < 10000) {
        if ((int)local_68 < -9999) {
          pppuVar13 = (undefined1 ***)(local_58 + 1);
        }
      }
      else {
        pppuVar13 = (undefined1 ***)(local_58 + 2);
      }
      ppuVar12 = *pppuVar13;
      ppuVar14 = (undefined1 **)pppuVar13;
    }
  }
  if (uVar1 != 6) {
    ppuVar14 = (undefined1 **)(uint)*(byte *)((int)param_2 + 1);
  }
  if ((uVar1 == 6 || ppuVar14 == (undefined1 **)0x8) ||
     (((ppuVar19 != (undefined1 **)0x0 &&
       (*(char *)((int)param_2 + (char)sVar4 * 0x418 + -0x4027) == '\x04')) ||
      (ppuVar12 == (undefined1 **)0x0)))) {
    local_64 = (undefined1 **)0xffffd8f1;
    local_60[0] = (undefined1 **)0x270f;
    local_68 = ppuVar8;
    if ((int)ppuVar8 < -9999) {
      pppuVar17 = &local_64;
    }
    if ((int)*pppuVar17 < 10000) {
      if (-10000 < (int)ppuVar8) goto LAB_0061fc04;
      goto LAB_0061fc40;
    }
  }
  else {
    local_68 = (undefined1 **)-(int)ppuVar12;
    local_60[0] = ppuVar12;
    local_64 = ppuVar8;
    if ((int)ppuVar12 * -2 != 0 && (int)ppuVar12 * -2 < 0 == SBORROW4((int)local_68,(int)ppuVar12))
    {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if ((undefined1 **)-(int)ppuVar8 == ppuVar12 || (int)local_68 < (int)ppuVar8) {
      pppuVar18 = &local_64;
    }
    if ((int)*pppuVar18 <= (int)ppuVar12) {
      if (!((undefined1 **)-(int)ppuVar8 == ppuVar12 || (int)local_68 < (int)ppuVar8))
      goto LAB_0061fc04;
LAB_0061fc40:
      pppuVar15 = &local_64;
      goto LAB_0061fc04;
    }
  }
  pppuVar15 = local_60;
LAB_0061fc04:
  return *pppuVar15;
}


