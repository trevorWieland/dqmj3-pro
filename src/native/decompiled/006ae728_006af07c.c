#include "006ae728_006af07c.h"



undefined4 fn_006af07c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = fn_006aee80(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((((in_stack_00000004 == in_stack_00000008) ||
         (*(int *)(*param_1 + in_stack_00000004 * 0x1c + 0x14) == 0)) ||
        (*(int *)(*param_1 + in_stack_00000008 * 0x1c + 0x14) == 0)) &&
       ((in_stack_00000004 != in_stack_00000008 ||
        (*(uint *)(*param_1 + in_stack_00000004 * 0x1c + 0x14) < 2)))) {
      if ((*(char *)(*param_1 + in_stack_00000004 * 0x1c + 0x18) == '\0') ||
         (*(char *)(*param_1 + in_stack_00000008 * 0x1c + 0x18) == '\0')) {
        return 0;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}



undefined4
fn_006aee80(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_4 < param_5) {
    uVar6 = param_4;
  }
  else {
    uVar6 = param_5;
  }
  if (uVar6 == param_4) {
    param_4 = param_5;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if ((int)param_6 < (int)param_7) {
    uVar4 = param_6;
  }
  else {
    uVar4 = param_7;
  }
  if (uVar4 == param_6) {
    param_6 = param_7;
  }
  iVar3 = iVar2;
  iVar8 = *(int *)(iVar2 + 4);
  while (iVar8 != 0) {
    bVar9 = uVar6 <= *(uint *)(iVar8 + 0x10);
    if (*(uint *)(iVar8 + 0x10) == uVar6) {
      bVar9 = param_4 <= *(uint *)(iVar8 + 0x14);
    }
    if (bVar9) {
      iVar3 = iVar8;
      iVar8 = *(int *)(iVar8 + 8);
    }
    else {
      iVar8 = *(int *)(iVar8 + 0xc);
    }
  }
  if (iVar3 == iVar2) {
LAB_006aef18:
    iVar3 = iVar2;
  }
  else {
    bVar9 = *(uint *)(iVar3 + 0x10) <= uVar6;
    if (uVar6 == *(uint *)(iVar3 + 0x10)) {
      bVar9 = *(uint *)(iVar3 + 0x14) <= param_4;
    }
    if (!bVar9) goto LAB_006aef18;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar8 = iVar7;
  iVar1 = *(int *)(iVar7 + 4);
  while (iVar1 != 0) {
    bVar9 = uVar4 <= *(uint *)(iVar1 + 0x10);
    if (*(uint *)(iVar1 + 0x10) == uVar4) {
      bVar9 = param_6 <= *(uint *)(iVar1 + 0x14);
    }
    if (bVar9) {
      iVar8 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
  }
  if (((iVar8 != iVar7) && (*(uint *)(iVar8 + 0x10) <= uVar4)) &&
     ((*(uint *)(iVar8 + 0x10) < uVar4 || (*(uint *)(iVar8 + 0x14) <= param_6)))) {
    iVar7 = iVar8;
  }
  bVar5 = (iVar7 != *(int *)(param_1 + 0x1c)) + (iVar3 != iVar2);
  if ((param_2 == 4) && (1 < bVar5)) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x38);
  iVar2 = iVar8;
  iVar3 = *(int *)(iVar8 + 4);
  while (iVar3 != 0) {
    bVar9 = uVar4 <= *(uint *)(iVar3 + 0x10);
    if (*(uint *)(iVar3 + 0x10) == uVar4) {
      bVar9 = param_6 <= *(uint *)(iVar3 + 0x14);
    }
    if (bVar9) {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    else {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
  }
  if (iVar2 != iVar8) {
    bVar9 = *(uint *)(iVar2 + 0x10) <= uVar4;
    if (uVar4 == *(uint *)(iVar2 + 0x10)) {
      bVar9 = *(uint *)(iVar2 + 0x14) <= param_6;
    }
    if (bVar9) goto LAB_006af024;
  }
  iVar2 = iVar8;
LAB_006af024:
  bVar5 = (iVar2 != iVar8) + bVar5;
  if (param_2 == 1) {
    if (param_3 == 1) {
      if (1 < bVar5) {
        return 0;
      }
    }
    else if ((param_3 == 2) && (bVar5 != 0)) {
      return 0;
    }
  }
  return 2;
}



bool fn_006aedec(undefined4 *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = param_1[2];
  if (param_3 < uVar2) {
    local_18 = *param_1;
    local_14 = param_1[1];
    uVar3 = fn_006bf5e0(&local_18);
    *(undefined4 *)(param_2 + 2) = uVar3;
    uVar1 = fn_006bfda8(&local_18);
    param_2[6] = uVar1;
    uVar3 = fn_006bf5e0(&local_14);
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar1 = fn_006bfda8(&local_14);
    param_2[7] = uVar1;
    *param_2 = (ushort)*(byte *)(param_1 + param_3 + 3);
    param_2[1] = (ushort)*(byte *)((int)param_1 + param_3 * 4 + 0xd);
    param_2[8] = *(ushort *)((int)param_1 + param_3 * 4 + 0xe);
  }
  return param_3 < uVar2;
}



undefined4 fn_006aed48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  short local_40 [14];
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    psVar4 = (short *)(*(int *)(param_1 + 4) + uVar3 * 4 + 0x56);
    iVar1 = fn_0068f818((int)*psVar4);
    if (iVar1 != 0) {
      if (6 < iVar2) break;
      iVar1 = iVar2 * 2;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(local_40 + iVar1) = *(undefined4 *)psVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      if (local_40[iVar1 * 2] == param_2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return 0;
}



uint fn_006aed20(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 4) * 4 + 0xd0) >> ((param_2 & 0xf) << 1) & 3;
}



undefined4 fn_006ae728(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char local_2698 [24];
  char local_2680;
  short local_267a;
  undefined1 auStack_2644 [33];
  char acStack_2623 [9739];
  
  fn_0017821c(local_2698,param_2 + param_3 * 0x266c + 4,0x266c);
  if (local_2698[0] == '\x05') {
    return 1;
  }
  if (local_2698[0] == '\x01') {
    if (local_267a == 7) {
      return 1;
    }
    return 0;
  }
  if (local_2698[0] != '\x03') {
    return 0;
  }
  if (local_267a != 0x1c6) {
    if (local_267a < 0x1c6) {
      if (local_267a != 0xdb) {
        if (local_267a == 0xdc) goto LAB_006ae82c;
        if (local_267a != 0xdd) {
          return 0;
        }
      }
    }
    else {
      if (local_267a == 0x1c7) {
LAB_006ae82c:
        bVar1 = false;
        iVar4 = 0;
        if (local_2680 < '\x01') {
          return 1;
        }
        do {
          iVar2 = 1;
          do {
            iVar3 = fn_001667c8(auStack_2644 + iVar4 * 0xc4,iVar2);
            if (iVar3 != 0) {
              bVar1 = true;
              break;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x61);
          iVar4 = iVar4 + 1;
          if (local_2680 <= iVar4) {
            if (bVar1) {
              return 0;
            }
            return 1;
          }
        } while( true );
      }
      if (local_267a != 0x1c8) {
        return 0;
      }
    }
  }
  bVar1 = false;
  iVar4 = 0;
  if ('\0' < local_2680) {
    do {
      iVar2 = 1;
      do {
        if (acStack_2623[iVar2 + iVar4 * 0xc4] != '\0') {
          bVar1 = true;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x61);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_2680);
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}


