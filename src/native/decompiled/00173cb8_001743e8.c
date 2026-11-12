#include "00173cb8_001743e8.h"



undefined4 fn_001743e8(undefined4 param_1)

{
  fn_001802bc(param_1,0);
  fn_001801a4(param_1,0);
  return 1;
}



void fn_00174398(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  if (param_2 != 0) {
    cVar1 = fn_00182904(0x4f);
    uVar2 = fn_00182924(0x4f);
    fn_00180350(param_1 + 0x5b,0x4f,uVar2,(int)cVar1,0);
  }
  return;
}



void fn_0017434c(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 local_10;
  
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0x38) + param_2;
  local_10 = param_4;
  sVar1 = fn_00176dc0(param_1);
  local_10 = CONCAT22(((unsigned int)(local_10) >> 16) & 0xffff,sVar1);
  psVar2 = (short *)(param_1 + 0x1c);
  if (sVar1 < *(short *)(param_1 + 0x1c)) {
    psVar2 = (short *)&local_10;
  }
  *(short *)(param_1 + 0x1c) = *psVar2;
  fn_00176dc0(param_1);
  return;
}



void fn_001741ec(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_1c0;
  int local_1bc;
  int local_1b8 [103];
  
  piVar6 = &local_1c0;
  fn_0017821c(&local_1c0,param_2,0x1a0);
  iVar8 = 0;
  iVar2 = param_3 + ((unsigned int)(local_1c0) >> 8) & 0xff * 0x418;
  iVar9 = iVar2 + -0x4080;
  iVar3 = fn_00176dc0(iVar9);
  iVar5 = 0;
  if (0 < *(short *)(param_2 + 0x18)) {
    do {
      piVar7 = (int *)(param_2 + iVar5 * 8 + 0x1c);
      local_1c0 = *piVar7;
      if (0 < local_1c0) {
        local_1bc = iVar3 + -1;
        if (local_1bc < 0) goto code_r0x001742b4;
        piVar10 = &local_1c0;
        if (local_1bc < local_1c0) {
          piVar10 = &local_1bc;
        }
        local_1c0 = *piVar10;
        *piVar7 = local_1c0;
      }
      iVar8 = iVar8 + local_1c0;
      iVar3 = iVar3 - local_1c0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(short *)(param_2 + 0x18));
  }
  local_1b8[0] = iVar3 + -1;
  local_1c0 = *(int *)(param_2 + 0x54);
  local_1bc = 0;
  if (-1 < local_1b8[0]) {
    if (*(int *)(param_2 + 0x54) < 0) {
      piVar6 = &local_1bc;
    }
    if (local_1b8[0] < *piVar6) {
      piVar6 = local_1b8;
    }
    iVar8 = iVar8 + *piVar6;
    *(int *)(param_2 + 0x54) = *piVar6;
    if ((0 < iVar8) && (*(char *)(param_2 + 0x17) != '\0')) {
      uVar4 = fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628b98(param_1,param_3,param_2,uVar4);
      fn_0061fc60((int)*(char *)(param_2 + 1),param_3);
      fn_00628970(param_1,param_3,param_2);
    }
    *(short *)(iVar2 + -0x4048) = *(short *)(iVar2 + -0x4048) - (short)iVar8;
    sVar1 = fn_00176dc0(iVar9);
    piVar6 = (int *)(iVar2 + -0x4064);
    if (sVar1 < *(short *)(iVar2 + -0x4064)) {
      piVar6 = local_1b8 + 0x6a;
    }
    *(short *)(iVar2 + -0x4064) = *(short *)piVar6;
    fn_00176dc0(iVar9);
    return;
  }
code_r0x001742b4:
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_0017419c(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  if (param_2 != 0) {
    cVar1 = fn_00182904(0x4e);
    uVar2 = fn_00182924(0x4e);
    fn_00180350(param_1 + 0x5b,0x4e,uVar2,(int)cVar1,0);
  }
  return;
}



undefined4 fn_00173d60(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint local_20;
  int *local_1c;
  
  if (*param_3 == 0x1000001) {
    fn_0019813c(param_1,(char *)&DAT_001740c0);
    return 0;
  }
  iVar4 = *param_2;
  if (iVar4 == 0x8004000) {
    iVar4 = fn_001804b4(param_2[1],*(undefined4 *)(param_1 + 0x8c),param_3,param_4,param_5);
    if (iVar4 == 0) {
      if (*(char *)(param_2[1] + 0x54) != '\0') {
        fn_0019813c(param_1,"trying to modify a class that has already been instantiated");
        return 0;
      }
      piVar3 = (int *)fn_00197fe0(param_1,param_3);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      piVar3[1] = piVar3[1] + 1;
      fn_0019813c(param_1,"the property \'%s\' already exists",piVar3 + 7);
      iVar4 = piVar3[1];
      piVar3[1] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        return 0;
      }
      return 0;
    }
  }
  else {
    if (iVar4 != 0xa000020) {
      if (iVar4 == 0xa008000) {
        local_20 = 0x1000001;
        local_1c = (int *)0x0;
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_2);
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_3);
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_4);
        iVar4 = fn_0018d4fc(param_1,param_2[1],0xd,3,&local_20);
        if (iVar4 != 0) {
          if ((local_20 & 0x8000000) == 0) {
            return 1;
          }
          iVar4 = local_1c[1];
          local_1c[1] = iVar4 + -1;
          if (iVar4 + -1 == 0) {
            (**(code **)(*local_1c + 8))();
            return 1;
          }
          return 1;
        }
        fn_0019813c(param_1,"class instances do not support the new slot operator");
        if (((local_20 & 0x8000000) != 0) &&
           (iVar4 = local_1c[1], local_1c[1] = iVar4 + -1, iVar4 + -1 == 0)) {
          (**(code **)(*local_1c + 8))();
        }
      }
      else {
        uVar1 = fn_00191f20(param_3);
        uVar2 = fn_00191f20(param_2);
        fn_0019813c(param_1,(char *)&DAT_001740e4,uVar2,uVar1);
      }
      return 0;
    }
    uVar5 = 1;
    if (*(int *)(param_2[1] + 0x18) != 0) {
      local_20 = 0x1000001;
      local_1c = (int *)0x0;
      iVar4 = fn_001a1dc8(param_2[1],param_3,&local_20);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_2);
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_3);
        iVar4 = *(int *)(param_1 + 0x30);
        *(int *)(param_1 + 0x30) = iVar4 + 1;
        fn_0019e864(*(int *)(param_1 + 0x18) + iVar4 * 8,param_4);
        uVar5 = fn_0018d4fc(param_1,param_2[1],0xd,3,&local_20);
        uVar5 = uVar5 ^ 1;
      }
      if (((local_20 & 0x8000000) != 0) &&
         (iVar4 = local_1c[1], local_1c[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      if (uVar5 == 0) {
        return 1;
      }
    }
    fn_0019b728(param_2[1],param_3,param_4);
  }
  return 1;
}



int fn_00173d4c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) + (param_2 + *(int *)(param_1 + 0x30)) * 8;
}



void fn_00173d14(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_1 + 0x38);
  return;
}



void fn_00173cd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&DAT_008c06e8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}



void fn_00173cb8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) < param_2) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar1;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,&DAT_008c06e8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}


