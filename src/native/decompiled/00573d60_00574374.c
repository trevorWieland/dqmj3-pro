#include "00573d60_00574374.h"



void fn_00574374(int param_1)

{
  undefined1 auStack_30 [36];
  
  fn_00101a50(param_1 + 0x420,0xc,&LAB_0057435c,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  fn_00301a9c(auStack_30,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_30);
  fn_00301a9c(param_1 + 0x438,auStack_30,0x1e);
  return;
}



void fn_0057433c(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x4c) = param_3;
  return;
}



void fn_005742e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_007d47b4)[param_2 * 2];
  if (iVar1 <= (int)(&DAT_007d47b8)[param_2 * 2]) {
    do {
      iVar2 = param_1 + iVar1 * 0x10;
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= (int)(&DAT_007d47b8)[param_2 * 2]);
  }
  return;
}



undefined4 fn_00574084(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_005740c4(param_1,0,param_2);
  if ((iVar1 != 0) || (iVar1 = fn_005740c4(param_1,1,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_005740c4(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *unaff_r5;
  int iVar9;
  undefined1 *unaff_r7;
  int iVar10;
  int local_64;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  int *local_38;
  int local_30;
  int *piStack_2c;
  int local_28;
  
  local_38 = &DAT_007d47b4 + (int)param_2 * 2;
  piVar7 = param_2;
  if (param_3 != 0) {
    piVar7 = local_38;
  }
  iVar1 = *local_38;
  if (param_3 != 0) {
    iVar8 = piVar7[1];
  }
  else {
    iVar8 = iVar1;
  }
  local_28 = param_3;
  piStack_2c = param_2;
  local_30 = param_1;
  if (iVar1 <= iVar8) {
    unaff_r5 = &DAT_00897804;
    unaff_r7 = auStack_50;
  }
  do {
    if (iVar8 < iVar1) {
      return 0;
    }
    local_64 = 0;
    iVar10 = local_30 + iVar1 * 0x10;
    do {
      if (*(int *)(iVar10 + local_64 * 4 + 4) != 0) {
        uVar2 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc));
        fn_0020bbc4(auStack_50,uVar2);
        iVar9 = local_64;
        while (iVar9 = iVar9 + 1, iVar9 < 4) {
          if (*(int *)(iVar10 + iVar9 * 4 + 4) != 0) {
            uVar2 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc));
            fn_0020bbc4(auStack_48,uVar2);
            iVar3 = fn_00661088(auStack_44);
            iVar4 = fn_00661088(unaff_r7 + 4);
            if (iVar3 == iVar4) {
              return 1;
            }
          }
        }
        if ((local_28 != 0) && (iVar9 = iVar1 + 1, iVar9 <= local_38[1])) {
          do {
            iVar3 = 0;
            iVar4 = local_30 + iVar9 * 0x10;
            do {
              if (*(int *)(iVar4 + iVar3 * 4 + 4) != 0) {
                uVar2 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc));
                fn_0020bbc4(auStack_40,uVar2);
                iVar5 = fn_00661088(auStack_3c);
                iVar6 = fn_00661088(unaff_r7 + 4);
                if (iVar5 == iVar6) {
                  return 1;
                }
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 4);
            iVar9 = iVar9 + 1;
          } while (iVar9 <= local_38[1]);
        }
      }
      local_64 = local_64 + 1;
    } while (local_64 < 4);
    iVar1 = iVar1 + 1;
  } while( true );
}



undefined1 * fn_00573fd4(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  iVar5 = 0;
  do {
    iVar4 = 0;
    do {
      puVar1 = (undefined1 *)(param_1 + iVar5 * 0x10 + iVar4 * 4);
      if (*(int *)(puVar1 + 4) != 0) {
        uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_0020bbc4(auStack_28,uVar2);
        piVar3 = (int *)fn_006c001c(auStack_24);
        if (*piVar3 == 0) {
          puVar1 = auStack_28;
        }
        else {
          fn_0028abc4(*(undefined4 *)(DAT_00897804 + 0xc));
          puVar1 = auStack_28;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  return puVar1;
}



void fn_00573fc8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x44) = param_3;
  return;
}



void fn_00573f84(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_1 = param_1 + param_2 * 0x10;
  uVar1 = (uint)(*(int *)(param_1 + 4) != 0);
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = uVar1 + 1;
  }
  *(undefined4 *)(param_1 + uVar1 * 4 + 4) = param_3;
  return;
}



undefined4 fn_00573de4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00573e24(param_1,0,param_2);
  if ((iVar1 != 0) || (iVar1 = fn_00573e24(param_1,1,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00573e24(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_r5;
  int iVar7;
  int local_38;
  
  iVar2 = (&DAT_007d47b4)[param_2 * 2];
  if (param_3 == 0) {
    iVar6 = iVar2;
  }
  else {
    iVar6 = (&DAT_007d47b8)[param_2 * 2];
  }
  if (iVar2 <= iVar6) {
    unaff_r5 = &DAT_00897804;
  }
  do {
    if (iVar6 < iVar2) {
      return 0;
    }
    iVar7 = param_1 + iVar2 * 0x10;
    local_38 = 0;
    do {
      if (*(int *)(iVar7 + local_38 * 4 + 4) != 0) {
        iVar3 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc));
        sVar1 = *(short *)(iVar3 + 0x1c);
        iVar3 = local_38;
        while (iVar3 = iVar3 + 1, iVar3 < 4) {
          if ((*(int *)(iVar7 + iVar3 * 4 + 4) != 0) &&
             (iVar4 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc)),
             *(short *)(iVar4 + 0x1c) == sVar1)) {
            return 1;
          }
        }
        if ((param_3 != 0) && (iVar3 = iVar2 + 1, iVar3 <= (int)(&DAT_007d47b8)[param_2 * 2])) {
          do {
            iVar4 = 0;
            do {
              if ((*(int *)(param_1 + iVar3 * 0x10 + iVar4 * 4 + 4) != 0) &&
                 (iVar5 = fn_0028aad0(*(undefined4 *)(*unaff_r5 + 0xc)),
                 *(short *)(iVar5 + 0x1c) == sVar1)) {
                return 1;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 <= (int)(&DAT_007d47b8)[param_2 * 2]);
        }
      }
      local_38 = local_38 + 1;
    } while (local_38 < 4);
    iVar2 = iVar2 + 1;
  } while( true );
}



void fn_00573d60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_002283d0();
  uVar2 = fn_002ea524((int)*(short *)(iVar1 + 2));
  iVar3 = fn_00250388();
  if (iVar3 == 0) {
    fn_002508f4(uVar2,*(undefined4 *)(iVar1 + 4));
  }
  fn_00237c74(param_2,(int)*(short *)(iVar1 + 2),0xff,0);
  fn_0024fa24(param_2);
  return;
}


