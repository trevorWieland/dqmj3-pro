#include "00244f98_002459d0.h"



void fn_002459d0(int param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *unaff_r10;
  undefined1 auStack_68 [68];
  
  if (param_2 < 6) {
    uVar2 = 2;
  }
  else if (param_2 - 6 < 0xb) {
    uVar2 = 3;
    param_2 = param_2 - 6;
  }
  else if (param_2 - 0x11 < 0xb) {
    uVar2 = 4;
    param_2 = param_2 - 0x11;
  }
  else {
    uVar9 = 0;
    if (9 < param_2 - 0x1c) goto LAB_00245a30;
    uVar2 = 5;
    param_2 = param_2 - 0x1c;
  }
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar9 = param_2;
LAB_00245a30:
  bVar1 = *(byte *)(param_1 + 0x8e);
  if ((bVar1 == 0) || (*(int *)(param_1 + 0xc4) < (int)(uint)bVar1)) {
    bVar1 = 1;
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  if (*(char *)(param_1 + 0x8e) == '\0') {
    *(byte *)(param_1 + 0x8e) = bVar1;
  }
  *(byte *)(*(int *)(param_1 + 0x94) + 0x44) = *(byte *)(*(int *)(param_1 + 0x94) + 0x44) & 0xfe | 1
  ;
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar5 = *(int *)(param_1 + 0xc4);
  iVar6 = 0;
  if (0 < iVar5) {
    unaff_r10 = &DAT_0088fea0;
  }
  iVar7 = 5 - iVar5;
  if (0 < iVar5) {
    do {
      uVar3 = fn_001828f0(uVar2,unaff_r10[iVar7]);
      iVar5 = param_1 + iVar6 * 4;
      *(undefined4 *)(iVar5 + 0x9c) = uVar3;
      uVar3 = fn_001827b0(uVar2,unaff_r10[iVar7 + 5]);
      *(undefined4 *)(iVar5 + 0xb0) = uVar3;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xc4));
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    do {
      fn_001028d4(auStack_68,DAT_0088fe78,*(undefined4 *)(param_1 + 0xc4),uVar9,iVar5);
      uVar2 = fn_001c80ac(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),auStack_68
                          );
      fn_00190d50(*(undefined4 *)(param_1 + iVar5 * 4 + 0xb0),uVar2);
      uVar4 = fn_00100b58(uVar2);
      if (uVar8 < uVar4) {
        uVar8 = fn_00100b58(uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc4));
  }
  fn_00245bb8(param_1,uVar8);
  fn_0017a11c(param_1,param_1 + 0x20,DAT_0088fe8c,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00245790(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



undefined4 * fn_00245590(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_006896e0();
  *puVar1 = &DAT_0081d590;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0x5c,0);
  piVar2[2] = iVar3;
  *piVar2 = puVar1[3];
  piVar2[1] = 1;
  puVar1[3] = piVar2;
  iVar3 = piVar2[2];
  puVar1[5] = iVar3;
  puVar1[6] = iVar3 + 0x5c;
  puVar1[7] = iVar3;
  puVar1[5] = iVar3 + 0x5c;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[7] + 4) = puVar1[7];
  puVar1[9] = 0;
  return puVar1;
}



void fn_00245554(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(*(int *)piVar1[2] + 0x14))();
  }
  return;
}



void fn_00245510(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x44) + 0x1c);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    *(bool *)(piVar1[2] + 0x46) = piVar1[2] == param_2;
  }
  return;
}



void fn_002454a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  piVar3 = *(int **)(iVar1 + 0x1c);
  piVar2 = (int *)*piVar3;
  if (piVar2 != piVar3) {
    while (piVar2[2] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar3) {
        return;
      }
    }
    if (piVar2 != piVar3) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + -1;
      *piVar2 = *(int *)(iVar1 + 0x10);
      *(int **)(iVar1 + 0x10) = piVar2;
    }
  }
  return;
}



void fn_00245330(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_70 [22];
  
  iVar1 = *(int *)(param_1 + 0x44);
  piVar4 = (int *)**(int **)(iVar1 + 0x1c);
  while( true ) {
    if (piVar4 == *(int **)(iVar1 + 0x1c)) {
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      local_70[8] = 0;
      local_70[9] = 0;
      local_70[10] = 0;
      piVar5 = (int *)(iVar1 + 0xc);
      local_70[0xb] = 0;
      local_70[0xc] = 0;
      local_70[0xd] = 0;
      local_70[0xe] = 0;
      local_70[0xf] = 0;
      local_70[0x10] = 0;
      local_70[0x11] = 0;
      local_70[0x12] = 0;
      local_70[0x13] = 0;
      local_70[0x14] = 0;
      piVar4 = *(int **)(iVar1 + 0x10);
      iVar7 = *(int *)(iVar1 + 0x1c);
      local_70[0] = param_2;
      if (piVar4 == (int *)0x0) {
        piVar4 = *(int **)(iVar1 + 0x14);
        if (piVar4 == *(int **)(iVar1 + 0x18)) {
          if (*piVar5 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar2 = *(uint *)(*piVar5 + 4);
            uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar6 < uVar2 + 0x20) {
              uVar6 = uVar2 + 0x20;
            }
          }
          piVar4 = (int *)fn_00100fc6(0xc,0);
          iVar3 = fn_00100fc6(uVar6 * 0x5c,0);
          piVar4[2] = iVar3;
          *piVar4 = *piVar5;
          piVar4[1] = uVar6;
          *piVar5 = (int)piVar4;
          piVar4 = (int *)piVar4[2];
          *(int **)(iVar1 + 0x14) = piVar4;
          *(int **)(iVar1 + 0x18) = piVar4 + uVar6 * 0x17;
        }
        *(int **)(iVar1 + 0x14) = piVar4 + 0x17;
      }
      else {
        *(int *)(iVar1 + 0x10) = *piVar4;
      }
      if (piVar4 + 2 != (int *)0x0) {
        fn_0017821c(piVar4 + 2,local_70);
      }
      *piVar4 = iVar7;
      piVar4[1] = *(int *)(iVar7 + 4);
      **(undefined4 **)(iVar7 + 4) = piVar4;
      *(int **)(iVar7 + 4) = piVar4;
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
      return;
    }
    if (piVar4[2] == param_2) break;
    piVar4 = (int *)*piVar4;
  }
  return;
}



void fn_00244f98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  
  piVar4 = *(int **)(param_1 + 0x1c);
  for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x8c))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0xf], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0x90))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x94))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x10], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0x98))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x50))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x11], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0x54))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x9c))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x12], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0xa0))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0xa4))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x13], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0xa8))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0xac))((int *)piVar3[2]);
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x14], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0xb0))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0xb4))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x15], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0xb8))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0xbc))((int *)piVar3[2]);
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0x16], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0xc0))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x68))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0xd], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 0x6c))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
    iVar1 = (**(code **)(*(int *)piVar3[2] + 0x60))();
    if ((iVar1 != 0) && (pcVar5 = (code *)piVar3[0xe], pcVar5 != (code *)0x0)) {
      uVar2 = (**(code **)(*(int *)piVar3[2] + 100))();
      (*pcVar5)(param_1,*(undefined4 *)(param_1 + 0x24),piVar3[2],iVar1,uVar2);
    }
  }
  piVar4 = *(int **)(param_1 + 0x1c);
  for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    (**(code **)(*(int *)piVar3[2] + 0x10))();
  }
  return;
}


