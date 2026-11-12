#include "004313cc_0043243c.h"



void fn_004323d8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_2 != 0) {
    piVar1 = (int *)param_1[0x47];
  }
  if (param_2 != 0 && piVar1 != (int *)0x0) {
    fn_002b20a4(piVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00432410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x47] + 0x1c));
    return;
  }
  fn_002b20a4(param_1[0x46],param_3);
                    /* WARNING: Could not recover jumptable at 0x00432438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x46] + 0x1c));
  return;
}



void fn_00432364(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  fn_004309c4();
  fn_0042ff80(param_1,*(int *)(param_1 + 0xb0) + 4,param_2,0);
  (**(code **)**(undefined4 **)(param_1 + 0xb0))(*(undefined4 **)(param_1 + 0xb0),0);
  fn_00430b80(param_1);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x114) + 0xc);
  if ((uVar1 & 8) != 0) {
    fn_0043243c();
    return;
  }
  if ((uVar1 & 4) == 0) {
    return;
  }
  fn_00433620(param_1);
  return;
}



void fn_0043243c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_3c;
  uint uStack_38;
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  piVar1 = *(int **)(param_1 + 0xb0);
  iVar8 = piVar1[10];
  iVar9 = piVar1[8];
  iVar2 = (**(code **)(*piVar1 + 0x14))();
  fn_0079e0cc(&local_3c,*(int *)(param_1 + 0xb0) + 4);
  iVar10 = 0;
  if (0 < iVar9 * iVar2) {
    do {
      iVar3 = fn_003467f8(*(undefined4 *)(param_1 + 0xb0),iVar10);
      *(undefined1 *)(iVar3 + 0x3b) = 0;
      iVar4 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb0),iVar8,iVar10);
      if (iVar4 != 0) {
        uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
        fn_0020bbc4(auStack_30,uVar5);
        iVar6 = fn_006bf34c(auStack_2c);
        if (((iVar6 != 0) && (iVar6 = fn_00154ac8(0x19), iVar6 == 0)) ||
           ((iVar6 = fn_006bf184(auStack_2c), iVar6 != 0 &&
            (iVar6 = fn_00154ac8(0x463), iVar6 == 0)))) {
          *(undefined1 *)(iVar3 + 0x3b) = 1;
        }
        uVar5 = 0xffffffff;
        iVar6 = fn_006bfffc(auStack_2c);
        if (iVar6 == 0) {
          iVar6 = fn_0028b860(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
          if (iVar6 == 0) {
            uVar5 = 0;
          }
          else if (iVar6 == 1) {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 7;
        }
        fn_002b325c(iVar3,uVar5);
        iVar6 = fn_006b846c(*(undefined4 *)(DAT_00897804 + 0xc));
        *(bool *)(iVar3 + 0x27) = iVar6 == iVar4;
        iVar6 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
        fn_002b3d78(iVar3,iVar6 == iVar4,0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9 * iVar2);
  }
  uVar7 = local_3c;
  if (uStack_38 < local_3c) {
    do {
      uVar7 = uVar7 + 4;
    } while (uVar7 != uStack_38);
  }
  fn_001008c4(local_3c,(int)(local_34 - local_3c) >> 2,0);
  return;
}



void fn_004322c0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fn_002bf8f4();
  uVar2 = 1;
  if ((*(byte *)(*(int *)(param_1 + 0x114) + 0xc) & 4) != 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar3 = *(undefined4 *)(DAT_00897804 + 0xc);
    uVar1 = fn_00433514(param_1,&local_28);
    uVar3 = fn_006b8390(uVar3,*(undefined4 *)(param_2 + 0xc));
    uVar2 = fn_002f7e9c(&local_28,uVar1,uVar3);
    *(char *)(*(int *)(param_1 + 0x94) + 0x35) = (char)uVar2;
  }
  fn_0068b14c(*(undefined4 *)(param_1 + 0x118),uVar2 ^ 1);
  fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),uVar2 ^ 1);
  return;
}



void fn_0043213c(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  puVar1 = (uint *)fn_002b0948(*(undefined4 *)(DAT_00897804 + 0x10),
                                *(undefined4 *)(param_1 + 0x124));
  iVar14 = 0;
  *puVar1 = *puVar1 | 1;
  iVar13 = 0;
  puVar1[0xb] = *(uint *)(param_1 + 0xf4);
  puVar1[0xc] = *(uint *)(param_1 + 0xf8);
  do {
    iVar2 = fn_002c11d0(param_1,1,0);
    piVar12 = (int *)(iVar2 + 4);
    uVar9 = *(int *)(iVar2 + 8) - *piVar12 >> 2;
    uVar11 = 0x20;
    if (0x1f < uVar9) {
      uVar11 = uVar9;
    }
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
    puVar8 = *(undefined4 **)(iVar2 + 8);
    puVar4 = puVar3;
    for (puVar6 = (undefined4 *)*piVar12; puVar6 != puVar8; puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    iVar2 = *(int *)(iVar2 + 8);
    iVar10 = *piVar12;
    puVar6 = puVar3;
    if (puVar3[iVar13] != 0) {
      puVar1[iVar14 + 7] = puVar3[iVar13];
      iVar14 = iVar14 + 1;
    }
    for (; puVar6 != (undefined4 *)((iVar2 - iVar10 & 0xfffffffcU) + (int)puVar3);
        puVar6 = puVar6 + 1) {
    }
    fn_001008c4(puVar3,(int)(uVar11 * 4) >> 2,0);
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
  if (0 < 4 - iVar14) {
    iVar2 = 4 - iVar14;
    iVar13 = 0;
    do {
      iVar10 = iVar14 + iVar13;
      iVar2 = iVar2 + -1;
      iVar13 = iVar13 + 1;
      puVar1[iVar10 + 7] = 0;
    } while (iVar2 != 0);
  }
  uVar9 = 0;
  puVar1 = puVar1 + 1;
  psVar7 = (short *)(param_1 + 0x128);
  do {
    uVar9 = uVar9 + 1;
    puVar5 = (uint *)((int)puVar1 + 2);
    *(short *)puVar1 = *psVar7;
    bVar15 = psVar7[1] == 0;
    puVar1 = puVar5;
    psVar7 = psVar7 + 1;
  } while ((bVar15 || uVar9 < 0xc) && (!bVar15 && uVar9 != 0xb));
  *(short *)puVar5 = 0;
  return;
}



undefined4 fn_004319a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_003801dc();
  fn_004318ac(param_1);
  return uVar1;
}



void fn_0043196c(int *param_1,undefined4 param_2)

{
  fn_003807a8();
  fn_003808f4(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0043199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1bc))(param_1,param_2);
  return;
}



void fn_004318ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *local_18;
  int *piStack_14;
  int local_10;
  
  uVar3 = 0;
  iVar1 = fn_002c11d0(param_1,1,0);
  fn_0079e0cc(&local_18,iVar1 + 4);
  if ((((*local_18 != 0) || (local_18[1] != 0)) || (local_18[2] != 0)) || (local_18[3] != 0)) {
    uVar3 = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x114) + 0xc) & 8) != 0) {
    uVar3 = 1;
  }
  fn_0068b14c(*(undefined4 *)(param_1 + 0x118),uVar3);
  piVar2 = local_18;
  if (piStack_14 < local_18) {
    do {
      piVar2 = piVar2 + 1;
    } while (piVar2 != piStack_14);
  }
  fn_001008c4(local_18,local_10 - (int)local_18 >> 2,0);
  return;
}



void fn_00431574(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0083bec0;
  if ((int *)param_1[0x38] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x38] + 4))();
  }
  if ((int *)param_1[0x37] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x37] + 4))();
  }
  if ((int *)param_1[0x36] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x36] + 4))();
  }
  if ((int *)param_1[0x35] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x35] + 4))();
  }
  if ((int *)param_1[0x34] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x34] + 4))();
  }
  fn_002c286c(param_1);
  return;
}



void fn_0043148c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c27a8();
  *puVar1 = &PTR_FUN_0083bec0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  *(undefined1 *)(puVar1 + 0x39) = 1;
  *(undefined1 *)((int)puVar1 + 0xe5) = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



void fn_004313cc(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint in_fpscr;
  
  iVar1 = fn_00172c98(param_2,&DAT_00431480);
  if (iVar1 != 0) {
    iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      VectorSignedToFloat(*(undefined4 *)(param_3 + 0x58),(byte)(in_fpscr >> 0x16) & 3);
      piVar3 = (int *)fn_00243834(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                   (int)*(char *)(param_3 + 0x5e));
    }
    piVar4 = *(int **)(param_1 + 0xdc);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0xdc) = piVar3;
    }
    (**(code **)(**(int **)(param_1 + 0xdc) + 0x10))();
    if (*(char *)(param_3 + 0x5e) != '\0') {
      fn_00243550(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_3 + 0x54));
      return;
    }
  }
  return;
}


