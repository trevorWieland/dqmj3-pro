#include "0045e744_0045f058.h"



int fn_0045f058(int param_1)

{
  int iVar1;
  
  fn_0045f188(param_1,0x20);
  if ((*(char *)(param_1 + 0x210) != '\0') && (*(char *)(param_1 + 0x211) != '\0')) {
    fn_0010313a(*(undefined4 *)(param_1 + 0xc),&DAT_007dbc50);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = fn_00101a50(*(undefined4 *)(param_1 + 0xc),0x20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



int fn_0045efb8(int param_1)

{
  int iVar1;
  
  fn_0045f188(param_1,0x20);
  if ((*(char *)(param_1 + 0x210) != '\0') && (*(char *)(param_1 + 0x211) != '\0')) {
    fn_0010313a(*(undefined4 *)(param_1 + 0xc),&DAT_007dbc50);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  iVar1 = fn_00101a50(*(undefined4 *)(param_1 + 0xc),0x20);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar1 * 2;
  return param_1;
}



void fn_0045ee10(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  
  iVar2 = fn_004b7748();
  iVar2 = *(int *)(iVar2 + 0x100);
  bVar1 = true;
  piVar8 = (int *)**(int **)(param_1 + 0x1c);
  do {
    if (piVar8 == (int *)*(int *)(param_1 + 0x1c)) {
      if (bVar1) {
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      return;
    }
    iVar3 = fn_001249d0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    piVar4 = (int *)(iVar3 + 0x50);
    (**(code **)(*piVar4 + 8))();
    iVar3 = fn_0045f4ec(iVar2 + 0x50,piVar8 + 2);
    if (iVar3 == 0) {
LAB_0045ef54:
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    else {
      uVar9 = *(uint *)(iVar3 + 0x78);
      uVar5 = (**(code **)(*piVar4 + 0xc))(piVar4);
      bVar10 = 0xfffffffe < uVar9;
      if (uVar9 != 0xffffffff) {
        uVar5 = *(uint *)(param_1 + 0x8c);
        bVar10 = uVar9 <= uVar5;
      }
      if (bVar10 && (uVar9 != 0xffffffff && uVar5 != uVar9)) {
        *(uint *)(param_1 + 0x8c) = uVar9;
        iVar3 = fn_001249d0();
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0xc);
        }
        piVar4 = (int *)(iVar3 + 0x50);
        (**(code **)(*piVar4 + 8))();
        iVar3 = fn_0045f4ec(iVar2 + 0x50,piVar8 + 2);
        if (iVar3 != 0) {
          if (*(char *)((int)piVar8 + 0x6d) == '\0') {
            fn_00455590();
          }
          uVar6 = piVar8[0x1a];
          if (*(char *)(iVar3 + 0x69) == '\0') {
            fn_00455590();
          }
          iVar7 = fn_00101d80(*(undefined4 *)(iVar3 + 100),uVar6);
          if (iVar7 != 0) {
            fn_0014e7cc(param_1 + 0x24,iVar3 + 4);
            goto LAB_0045ef54;
          }
        }
        (**(code **)(*piVar4 + 0xc))(piVar4);
        fn_0014e7cc(param_1 + 0x24,piVar8 + 2);
      }
    }
    iVar3 = fn_00487620(iVar2,piVar8 + 2);
    piVar8 = (int *)*piVar8;
    if (iVar3 == 0) {
      bVar1 = false;
    }
  } while( true );
}



void fn_0045ed5c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  *param_1 = &DAT_00852c38;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  fn_0049e66c(param_1);
  fn_00455018();
  return;
}



undefined4 * fn_0045eb90(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)fn_0049e54c(param_1,10,0);
  *puVar1 = &DAT_00852c38;
  iVar2 = fn_0015ecdc(0x28);
  if (iVar2 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)fn_0046b318(iVar2,1);
    *puVar5 = &DAT_00853ba8;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[8] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    iVar2 = fn_0015ecdc(0x2fc);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_004872e4();
    }
    puVar5[5] = uVar3;
    iVar2 = fn_0015ecdc(0x24);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = fn_0046cf1c(iVar2,puVar5);
    }
    puVar5[6] = uVar3;
    iVar4 = fn_0015ecdc(0x44);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = fn_004a899c(iVar4,0);
    }
    puVar5[4] = iVar2;
    *(undefined2 *)(iVar2 + 0x20) = 10;
    puVar5[7] = 0;
    fn_004b41a8(&local_28,30000);
    puVar5[8] = local_28;
    puVar5[9] = uStack_24;
    fn_0046df88();
    iVar2 = fn_0045c8f4();
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = fn_0015ecdc(0x44);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_004a899c(iVar2,0);
    }
    *(undefined2 *)(iVar2 + 0x20) = 10;
    fn_0047ef88(uVar3,iVar2);
  }
  puVar1[6] = puVar5;
  iVar2 = fn_0015ecdc(0x54);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    puVar5 = (undefined4 *)fn_0046b318(iVar2,2);
    *puVar5 = &DAT_008544cc;
    iVar4 = fn_004ac794(puVar5 + 4,0);
    iVar2 = iVar4 + -0x10;
    fn_0046df88();
    *(undefined2 *)(iVar4 + 0x20) = 0xb;
    iVar4 = fn_0045c8f4();
    uVar3 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = fn_0015ecdc(0x44);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_004ac794(iVar4,0);
    }
    *(undefined2 *)(iVar4 + 0x20) = 0xb;
    fn_0047ef88(uVar3,iVar4);
  }
  puVar1[5] = 0;
  puVar1[7] = iVar2;
  puVar1[8] = 0;
  return puVar1;
}



void fn_0045e9d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_0015ecdc(0x9c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_004b9d88(iVar1,param_1,param_2);
    *puVar2 = &DAT_00853204;
    puVar2[0x26] = 0;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
  }
  return;
}



void fn_0045e954(undefined4 param_1,int *param_2)

{
  if (param_2[0x24] != 0) {
    fn_004b9c58(param_2[0x24],0);
    fn_004b9cb4(param_2[0x24],0);
    fn_004b9c58(param_2,0);
    fn_004b9cb4(param_2,0);
    *(undefined4 *)(param_2[0x24] + 0x74) = 0;
    fn_004b9d74(param_2[0x24]);
    param_2[0x24] = 0;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045e9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 4))(param_2);
  return;
}



int fn_0045e880(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xa80);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  iVar2 = piVar1[2];
  *(int *)(param_1 + 0xc) = iVar2;
  *(int *)(param_1 + 0x10) = iVar2 + 0xa80;
  puVar3 = *(undefined1 **)(param_1 + 0xc);
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x54;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  fn_0013d0fc(param_1 + 0x28);
  return param_1;
}



bool fn_0045e744(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  local_1c = *(int *)(param_1 + 0x14);
  if (*(int *)(local_1c + 4) != 0) {
    iVar2 = *(int *)(param_2 + 8);
    iVar1 = *(int *)(local_1c + 4);
    do {
      iVar3 = *(int *)(iVar1 + 0x18);
      bVar4 = *(ushort *)(iVar1 + 0x16) < *(ushort *)(param_2 + 6);
      if ((int)(iVar3 - (iVar2 + (uint)bVar4)) < 0 ==
          (SBORROW4(iVar3,iVar2) != SBORROW4(iVar3 - iVar2,(uint)bVar4))) {
        iVar3 = *(int *)(iVar1 + 8);
        local_1c = iVar1;
      }
      else {
        iVar3 = *(int *)(iVar1 + 0xc);
      }
      iVar1 = iVar3;
    } while (iVar3 != 0);
  }
  local_20 = *(int *)(param_1 + 0x14);
  if (*(int *)(local_20 + 4) != 0) {
    iVar2 = *(int *)(param_2 + 8);
    iVar1 = *(int *)(local_20 + 4);
    do {
      iVar3 = *(int *)(iVar1 + 0x18);
      bVar4 = *(ushort *)(param_2 + 6) < *(ushort *)(iVar1 + 0x16);
      if ((int)(iVar2 - (iVar3 + (uint)bVar4)) < 0 ==
          (SBORROW4(iVar2,iVar3) != SBORROW4(iVar2 - iVar3,(uint)bVar4))) {
        iVar3 = *(int *)(iVar1 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar1 + 8);
        local_20 = iVar1;
      }
      iVar1 = iVar3;
    } while (iVar3 != 0);
  }
  iVar1 = 0;
  iVar2 = local_1c;
  while (iVar2 != local_20) {
    iVar1 = iVar1 + 1;
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar2 == *(int *)(iVar3 + 0xc)) {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 4);
        } while (iVar2 == *(int *)(iVar3 + 0xc));
      }
      if (*(int *)(iVar2 + 0xc) != iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      do {
        iVar2 = iVar3;
        iVar3 = *(int *)(iVar2 + 8);
      } while (*(int *)(iVar2 + 8) != 0);
    }
  }
  fn_007654a4(auStack_18,param_1 + 4,&local_1c,&local_20);
  return iVar1 == 1;
}


