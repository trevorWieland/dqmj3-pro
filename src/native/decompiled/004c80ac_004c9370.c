#include "004c80ac_004c9370.h"



undefined4 fn_004c9370(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_38 [44];
  
  fn_0013d5c4(auStack_38);
  iVar1 = fn_004d03bc(*(undefined4 *)(param_1 + 0xa0),param_2,auStack_38);
  if (iVar1 == 0) {
    fn_0050d178(auStack_38);
    return 0;
  }
  (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
  fn_0050d1a0(param_2,auStack_38);
  (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x8000,0);
  fn_0050d178(auStack_38);
  return 1;
}



int fn_004c925c(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined2 local_14;
  
  if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
    if (DAT_008edb34 == -1) {
      DAT_008edb34 = 1;
    }
    else {
      DAT_008edb34 = DAT_008edb34 + 1;
    }
  }
  if (DAT_008ee152 == -1) {
    DAT_008ee152 = 1;
  }
  else {
    DAT_008ee152 = DAT_008ee152 + 1;
  }
  fn_0015f180(auStack_18);
  fn_00468fb0();
  local_14 = fn_004c5e5c();
  *(undefined2 *)(param_1 + 0xaa) = local_14;
  fn_004ed130(param_1 + 0x8a4,&DAT_004c9404,param_1);
  iVar1 = fn_004cbfa4(param_1 + 0x4c8,param_1 + 0x8a4,auStack_18);
  if (iVar1 < 0) {
    return iVar1;
  }
  *(undefined1 *)(param_1 + 0xa8) = 2;
  fn_004efce8(param_1 + 0x4c8);
  return 0;
}



undefined8 fn_004c8f28(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_008c0630;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if (DAT_008c0630 == 0) goto LAB_004c90b4;
    uVar2 = 2;
  }
  else {
    puVar1 = (undefined4 *)0x3ff00000;
    uVar3 = *(int *)(param_1 + 4) - 0x100000;
    if (uVar3 < 0x3ff00000) {
      if (param_2 != 0) {
        if (*(char *)(param_1 + 0x8b8) == '\x04') {
          if (DAT_008c0630 != 0) {
            param_2 = 4;
            uVar3 = 0;
          }
          uVar4 = fn_004ed13c(param_1 + 0x8b8,param_2,uVar3);
          return uVar4;
        }
        if (*(int *)(param_1 + 0x8bc) < 0) {
          if (DAT_008c0630 != 0) {
            param_4 = (uint)*(byte *)(param_1 + 0x8b8);
            uVar3 = 0;
          }
          if (*(int *)(param_1 + 0x8bc) == -0x26deb7dc) {
            fn_004ed068();
          }
          else {
            fn_004ed098(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x8bc),uVar3,param_4);
          }
          *(undefined4 *)(param_1 + 4) = 0;
          uVar4 = fn_004ed13c(param_1 + 0x8b8);
          return uVar4;
        }
      }
      uVar4 = fn_004c87f0(param_1);
      return uVar4;
    }
    if (DAT_008c0630 == 0) {
LAB_004c90b4:
      return CONCAT44(param_2,puVar1);
    }
    uVar2 = 8;
  }
  return CONCAT44(uVar2,DAT_008c0630);
}



void fn_004c8c60(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint local_78;
  int iStack_74;
  uint local_70;
  uint local_6c;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined2 local_3c;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 local_28;
  undefined1 auStack_2 [2];
  
  iStack_34 = param_1;
  piStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if (param_2[7] == 0) {
                    /* WARNING: Could not recover jumptable at 0x004c8cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),1,0);
    return;
  }
  iVar1 = fn_004d4ed0(param_2);
  if (((iVar1 == 0) || (iVar1 = fn_004d5ad0(param_2), iVar1 == 0)) && (local_28 == 0)) {
    iVar1 = fn_0013d5c4(&local_78);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    fn_0050d1a0(&local_78,param_2);
    fn_004f01f4(auStack_50);
    fn_004f01f4(auStack_48);
    local_40 = 0;
    local_3c = 0;
    fn_004cc15c(*(int *)(param_1 + 0xa0) + 0x120,&local_78);
    fn_0050d178(&local_78);
  }
  if (param_3 < 0) {
    if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
      if (DAT_008edd66 == -1) {
        DAT_008edd66 = 1;
      }
      else {
        DAT_008edd66 = DAT_008edd66 + 1;
      }
    }
  }
  else if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
    if (DAT_008edd64 == -1) {
      DAT_008edd64 = 1;
    }
    else {
      DAT_008edd64 = DAT_008edd64 + 1;
    }
  }
  uVar2 = fn_004c9170(param_1,param_2);
  if (uVar2 < 0x17) {
    uVar5 = 0;
    uVar6 = 0xffffffff;
    local_70 = 0;
    local_6c = 0;
    uVar8 = 0xffffffff;
    iVar1 = fn_004c6fac(*(undefined4 *)(param_1 + 0xa0),param_2);
    if (iVar1 != 0) {
      uVar5 = *(uint *)(iVar1 + 0x4c) & 0xff;
      local_70 = fn_004d4b94(iVar1);
      local_70 = local_70 & 0xff;
      local_6c = (uint)*(byte *)(iVar1 + 0x48);
    }
    iVar1 = fn_004cc270(*(int *)(param_1 + 0xa0) + 0x120,param_2);
    if (iVar1 != 0) {
      if (uVar5 != 0) {
        local_78 = 0;
        iStack_74 = 0;
        fn_004f01f4(&local_78);
        iVar9 = local_78 - *(uint *)(iVar1 + 0x28);
        iVar7 = iStack_74 - (*(int *)(iVar1 + 0x2c) + (uint)(local_78 < *(uint *)(iVar1 + 0x28)));
        puVar3 = (undefined4 *)fn_004f0ce8();
        uVar6 = fn_0011c134(iVar9,iVar7,*puVar3,puVar3[1]);
      }
      uVar8 = *(undefined4 *)(iVar1 + 0x38);
      fn_004cc2e0(*(int *)(param_1 + 0xa0) + 0x120,param_2);
    }
    (&DAT_008edb38)[uVar2] = param_2[7];
    uVar4 = fn_004ed478(param_2[5]);
    (&DAT_008edb94)[uVar2] = uVar4;
    (&DAT_008edbf0)[uVar2] = uVar6;
    (&DAT_008edc4c)[uVar2] = uVar8;
    (&DAT_008edca8)[uVar2] = param_3;
    (&DAT_008edd04)[uVar2] = (char)uVar5;
    (&DAT_008edd1b)[uVar2] = (char)local_70;
    (&DAT_008edd32)[uVar2] = (char)local_6c;
  }
  if (local_28 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if (*(int *)(iVar1 + 0x6c) != 0) {
    fn_004c6fb8(iVar1 + 0x84);
    (**(code **)(**(int **)(iVar1 + 0x6c) + 0x10))
              (*(int **)(iVar1 + 0x6c),auStack_2 + -0x1a,auStack_2 + -10,auStack_2 + -0x1e);
  }
  *(undefined4 *)(iVar1 + 0x4b0) = 0;
  *(undefined4 *)(iVar1 + 0x4b4) = 0;
  return;
}



undefined4 fn_004c8130(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_38 [4];
  undefined2 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int iStack_24;
  
  local_30 = 0;
  local_2c = 0;
  fn_004f01f4(&local_30);
  if (*(int *)(param_1 + 0x7c) == 4) {
LAB_004c832c:
    local_28 = 0;
    iStack_24 = 0;
    fn_004f01f4(&local_28);
    iVar1 = local_28 - local_30;
    iVar3 = iStack_24 - (local_2c + (uint)(local_28 < local_30));
    puVar2 = (undefined4 *)fn_004f0ce8();
    DAT_008ed90e = fn_0011c134(iVar1,iVar3,*puVar2,puVar2[1]);
    return 0;
  }
  fn_0015f180(auStack_38);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  fn_004c9e40(&DAT_008ee168,auStack_38);
  iVar1 = fn_006d6cd0(auStack_38);
  if ((iVar1 != 0) || (iVar1 = fn_004c9df4(&DAT_008ee168,DAT_008c06ac,0), iVar1 != 0)) {
    fn_004c9e40(&DAT_008ee18c,auStack_38);
    iVar1 = fn_006d6cd0(auStack_38);
    if ((iVar1 != 0) || (iVar1 = fn_004c9df4(&DAT_008ee18c,DAT_008c06b0,0), iVar1 != 0)) {
      fn_004c9e40(&DAT_008ee168,auStack_38);
      iVar4 = -0x279eb7d4;
      local_34 = 0x2729;
      iVar3 = *(int *)(param_1 + 0x7c);
      iVar1 = iVar4;
      if (iVar3 != 4) {
        *(int *)(param_1 + 0x7c) = iVar3 + 1;
        fn_004ed464(param_1 + iVar3 * 8 + 0x80,auStack_38);
        iVar1 = 0;
      }
      if (-1 < iVar1) {
        local_34 = 0x278d;
        iVar3 = *(int *)(param_1 + 0x7c);
        iVar1 = iVar4;
        if (iVar3 != 4) {
          *(int *)(param_1 + 0x7c) = iVar3 + 1;
          fn_004ed464(param_1 + iVar3 * 8 + 0x80,auStack_38);
          iVar1 = 0;
        }
        if (-1 < iVar1) {
          fn_004c9e40(&DAT_008ee18c,auStack_38);
          local_34 = 0x2729;
          iVar3 = *(int *)(param_1 + 0x7c);
          iVar1 = iVar4;
          if (iVar3 != 4) {
            *(int *)(param_1 + 0x7c) = iVar3 + 1;
            fn_004ed464(param_1 + iVar3 * 8 + 0x80,auStack_38);
            iVar1 = 0;
          }
          if (-1 < iVar1) {
            local_34 = 0x278d;
            iVar1 = *(int *)(param_1 + 0x7c);
            if (iVar1 != 4) {
              *(int *)(param_1 + 0x7c) = iVar1 + 1;
              fn_004ed464(param_1 + iVar1 * 8 + 0x80,auStack_38);
              iVar4 = 0;
            }
            if (-1 < iVar4) goto LAB_004c832c;
          }
        }
      }
    }
  }
  return 0xd8a148c3;
}



void fn_004c80ac(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_004c9170();
  if (uVar1 < 0x17) {
    if ((DAT_008bf4e0 == 0) ||
       ((iVar2 = fn_006d92b8(), iVar2 == 0 && (iVar2 = fn_006d9268(DAT_008bf4e0), iVar2 == 0)))) {
      (&DAT_008edb38)[uVar1] = 0xffffffff;
      (&DAT_008edb94)[uVar1] = 0xffffffff;
      (&DAT_008edbf0)[uVar1] = 0xffffffff;
      (&DAT_008edc4c)[uVar1] = 0xffffffff;
      (&DAT_008edca8)[uVar1] = 0xffffffff;
      (&DAT_008edd04)[uVar1] = 0xff;
      (&DAT_008edd1b)[uVar1] = 0xff;
      (&DAT_008edd32)[uVar1] = 0xff;
      (&DAT_008edd49)[uVar1] = 0xff;
    }
  }
  return;
}



uint fn_004c9170(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0xff;
  iVar3 = *(int *)(param_2 + 0x1c);
  if ((DAT_008bf4e0 == 0) || (iVar1 = fn_006d92b8(), iVar1 == 0)) {
    uVar2 = 0;
    do {
      if ((&DAT_008edb38)[uVar2] == iVar3) {
        uVar4 = uVar2;
        if (uVar2 != 0xff) {
          return uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x17);
    uVar2 = 0;
    do {
      if ((&DAT_008edb38)[uVar2] == -1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0x17);
  }
  return uVar4;
}


