#include "00210c94_0022afdc.h"



void fn_0022afdc(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_28;
  
  iVar7 = 0;
  local_28 = 0;
  iVar1 = fn_00230acc((&PTR_s_keyboard_hiragana_0089489c)[param_2]);
  uVar2 = fn_00100b58();
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  do {
    iVar6 = 0;
    iVar9 = param_1 + iVar8 * 0x28;
    do {
      if (iVar7 < *(int *)(param_1 + 0xa0)) {
        local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,*(undefined2 *)(iVar1 + iVar7 * 2));
        uVar2 = *(undefined4 *)(iVar9 + iVar6 * 4 + 0x158);
        puVar5 = &local_28;
      }
      else {
        puVar5 = &DAT_0022b100;
        uVar2 = *(undefined4 *)(iVar9 + iVar6 * 4 + 0x158);
      }
      uVar3 = fn_00190d50(uVar2,puVar5);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar6 < 10);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 5);
  if (param_2 != 0) {
    uVar3 = param_2;
  }
  if (param_2 < 2) {
    uVar2 = fn_00230acc((char *)&DAT_0022b104);
    fn_00190d50(*(undefined4 *)(param_1 + 0x23c),uVar2);
    if (param_2 == 0) {
      pcVar4 = (char *)&DAT_0022b118;
    }
    else {
      pcVar4 = (char *)&DAT_0022b134;
    }
    puVar5 = (undefined4 *)fn_00230acc(pcVar4);
  }
  else {
    if (uVar3 != 5) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x23c),&DAT_0022b100);
      uVar2 = *(undefined4 *)(param_1 + 0x240);
      puVar5 = &DAT_0022b100;
      goto LAB_0022b09c;
    }
    fn_00190d50(*(undefined4 *)(param_1 + 0x23c),&DAT_0022b100);
    puVar5 = (undefined4 *)fn_00230acc((char *)&DAT_0022b150);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x240);
LAB_0022b09c:
  fn_00190d50(uVar2,puVar5);
  return;
}



void fn_0021d848(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    return;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 4));
  piVar3 = *(int **)(iVar1 + 0x10);
  uVar4 = 0;
  switch(param_2) {
  case 0:
    uVar4 = fn_0022f750((char *)&DAT_0021d94c);
    break;
  case 1:
    uVar4 = fn_0022f750((char *)&DAT_0021d964);
    break;
  case 2:
    uVar4 = fn_0022f750((char *)&DAT_0021d97c);
    break;
  case 3:
    uVar4 = fn_0022f750((char *)&DAT_0021d99c);
    break;
  case 4:
    uVar4 = fn_0022f750((char *)&DAT_0021d9b4);
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_0021d9d0,1);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0021d938;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0021d938:
  fn_00190d50(piVar3,uVar4);
  return;
}



void fn_0021d834(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4);
  if (*(int *)(iVar1 + 0x10) == -1) {
    return;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 4));
  piVar3 = *(int **)(iVar1 + 0x10);
  uVar4 = 0;
  switch(param_2) {
  case 0:
    uVar4 = fn_0022f750("Partner_Situation_None");
    break;
  case 1:
    uVar4 = fn_0022f750("Partner_Situation_Scout");
    break;
  case 2:
    uVar4 = fn_0022f750("Partner_Situation_Scout_Success");
    break;
  case 3:
    uVar4 = fn_0022f750("Partner_Situation_Item");
    break;
  case 4:
    uVar4 = fn_0022f750("Partner_Situation_Item_Get");
  }
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,"tb_partner_request",1);
  if (piVar3 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0021d938;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0021d938:
  fn_00190d50(piVar3,uVar4);
  return;
}



void fn_0021c868(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x1b4) == *(int *)(param_1 + 0x1b8)) {
    return;
  }
  if (param_2 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  uVar3 = iVar2 + *(int *)(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x1a8) = uVar3;
  if (((int)uVar3 < 0) ||
     (uVar1 = *(int *)(param_1 + 0x1b8) - *(int *)(param_1 + 0x1b4),
     iVar2 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20),
     (uint)((iVar2 >> 6) - (iVar2 >> 0x1f)) < uVar3)) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00210c94(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  int iVar5;
  undefined4 uVar6;
  char local_44 [4];
  undefined *local_40;
  uint local_3c [6];
  undefined1 auStack_24 [8];
  
  bVar1 = false;
  local_3c[5] = 0xe7e3ffff;
  do {
    uVar6 = param_1[1];
    fn_001930b8();
    local_3c[5] = fn_0019303c(param_3,extraout_r1,uVar6,0);
    iVar3 = fn_005be760(local_3c + 5,local_44);
    cVar2 = '\0';
    if (iVar3 != 0) {
      cVar2 = local_44[0];
    }
    if (iVar3 == 0 || cVar2 == -9) {
      local_3c[0] = 0;
      local_40 = &DAT_008523fc;
      local_3c[3] = 0;
      local_3c[4] = 0;
      local_3c[1] = 0;
      local_3c[2] = 0;
      local_3c[5] = fn_0014d6cc(local_3c,param_3,2);
      iVar3 = fn_005be760(local_3c + 5,local_44);
      if (iVar3 == 0) {
        local_3c[5] = fn_001560d8(local_3c,param_1 + 2);
        iVar3 = fn_005be760(local_3c + 5,local_44);
        if (iVar3 == 0) {
          uVar4 = param_1[2];
          iVar3 = param_1[3];
          if (((int)-(iVar3 + (uint)(uVar4 != 0)) < 0 !=
               (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(uVar4 != 0)))) &&
             (iVar5 = param_1[5],
             (int)(iVar5 - (iVar3 + (uint)((uint)param_1[4] < uVar4))) < 0 ==
             (SBORROW4(iVar5,iVar3) != SBORROW4(iVar5 - iVar3,(uint)((uint)param_1[4] < uVar4))))) {
            *(undefined1 *)(*(int *)(param_2 + 4) + 1) = 0x9c;
            goto LAB_00210ed0;
          }
          local_3c[5] = fn_0015cfa4(local_3c,iVar3,param_1[4],param_1[5]);
          iVar3 = fn_005be760(local_3c + 5,local_44);
          if (iVar3 == 0) {
            local_3c[5] = fn_00193178(local_3c,auStack_24,*param_1,param_1[1],1);
            iVar3 = fn_005be760(local_3c + 5,local_44);
            if (iVar3 == 0) {
              local_3c[5] = fn_001560d8(local_3c,param_1 + 2);
              iVar3 = fn_005be760(local_3c + 5,local_44);
              if (iVar3 == 0) goto LAB_00210ed0;
            }
          }
        }
      }
      *(char *)(*(int *)(param_2 + 4) + 1) = local_44[0];
LAB_00210ed0:
      *param_1 = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      param_1[5] = 0;
      **(undefined1 **)(param_2 + 4) = 2;
      if ((local_3c[0] & 0xfffffffe) == 0) {
        return;
      }
      if ((local_3c[0] & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(local_3c[0] & 0xfffffffe);
      return;
    }
    if (cVar2 != -0xb) {
      if (cVar2 == -6) {
        fn_001930b8();
        fn_0044d6e4(param_3);
      }
LAB_00210d3c:
      *(char *)(*(int *)(param_2 + 4) + 1) = local_44[0];
      **(undefined1 **)(param_2 + 4) = 2;
      *param_1 = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      param_1[5] = 0;
      return;
    }
    fn_001930b8();
    fn_0044d6e4(param_3);
    if (bVar1) goto LAB_00210d3c;
    bVar1 = true;
  } while( true );
}


