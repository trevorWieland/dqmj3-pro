#include "006779cc_00678280.h"



int * fn_00678280(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0xc;
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  piVar4 = (int *)param_1[4];
  piVar1 = (int *)*piVar4;
  while (piVar3 = piVar1, piVar3 != piVar4) {
    piVar1 = (int *)param_1[4];
    if (piVar3 != (int *)param_1[4]) {
      piVar1 = (int *)*piVar3;
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      param_1[5] = param_1[5] + -1;
      *piVar3 = param_1[1];
      param_1[1] = (int)piVar3;
    }
  }
  param_1[6] = 0;
  return param_1;
}



void fn_006780d4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0066e458(DAT_00898840,2,0);
  fn_004a2190(param_1 + 0x28,param_2);
  param_1[0x44] = (int)(param_1 + 0x27);
  fn_00170fa4(param_1 + 0x45,param_3);
  *(int **)(param_1[0x26] + 100) = param_1 + 0x28;
                    /* WARNING: Could not recover jumptable at 0x00678138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_0067802c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringCreate_008c6fc1);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_00859ab8;
    *puVar1 = &DAT_0085a38c;
    fn_00679ac8(puVar1);
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



undefined4 * fn_00677e8c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_005f62c0();
  puVar1[8] = &DAT_00859420;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &DAT_00859b38;
  iVar2 = fn_00119b40(puVar1 + 0x10);
  fn_0066ddbc();
  fn_002fec40(iVar2 + 0x18,(char *)&DAT_00677f20);
  *(undefined4 *)(iVar2 + -0x40) = &DAT_0085a110;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  iVar3 = fn_00145b00(0x74,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00679850();
  }
  *(undefined4 *)(iVar2 + 0x68) = uVar4;
  return (undefined4 *)(iVar2 + -0x40);
}



void fn_00677b30(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint local_28;
  uint local_24 [2];
  
  fn_0066e458(DAT_00898840,2,0);
  uVar4 = param_1[0x27];
  uVar9 = param_1[0x26];
  puVar11 = (uint *)(param_1 + 0x26);
  if (uVar9 != uVar4) {
    uVar1 = uVar9;
    if (uVar4 <= uVar9) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar4);
    }
    param_1[0x27] = uVar4 - (uVar4 - uVar9 & 0xfffffffc);
  }
  param_1[0x29] = 0;
  if (param_2 != puVar11) {
    puVar2 = (undefined4 *)param_2[1];
    puVar10 = (undefined4 *)*param_2;
    puVar7 = (undefined4 *)*puVar11;
    uVar9 = (int)puVar2 - (int)puVar10;
    uVar4 = (int)uVar9 >> 2;
    if ((uint)(param_1[0x28] - (int)puVar7 >> 2) < uVar4) {
      local_28 = uVar4;
      uVar9 = (int)(param_1[0x27] - *puVar11) >> 2;
      local_24[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_24[0] < uVar9 + 0x20) {
        local_24[0] = uVar9 + 0x20;
      }
      puVar5 = local_24;
      if (local_24[0] <= uVar4) {
        puVar5 = &local_28;
      }
      uVar4 = *puVar5;
      puVar2 = (undefined4 *)fn_00100fc6(uVar4 << 2,0);
      puVar8 = (undefined4 *)param_2[1];
      puVar7 = puVar2;
      for (puVar10 = (undefined4 *)*param_2; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar10;
        }
        puVar7 = puVar7 + 1;
      }
      uVar1 = *puVar11;
      uVar9 = uVar1;
      if ((uint)param_1[0x27] < uVar1) {
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 != param_1[0x27]);
      }
      fn_001008c4(uVar1,(int)(param_1[0x28] - uVar1) >> 2,0);
      *puVar11 = (uint)puVar2;
      param_1[0x27] = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar2;
      param_1[0x28] = (int)(puVar2 + uVar4);
    }
    else {
      uVar1 = param_1[0x27] - (int)puVar7 >> 2;
      if (uVar1 < uVar4) {
        puVar2 = puVar10 + uVar1;
        if (puVar10 < puVar2) {
          if (0 < (int)puVar2 - (int)puVar10) {
            puVar8 = puVar10 + -1;
            puVar6 = puVar7 + -1;
            if (((int)puVar2 - (int)puVar10) * 0x20000000 < 0) {
              *puVar7 = *puVar10;
              puVar8 = puVar10;
              puVar6 = puVar7;
            }
            for (iVar3 = (int)puVar2 - (int)puVar10 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar6[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar6 = puVar6 + 2;
              *puVar6 = *puVar8;
            }
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        param_1[0x27] = (param_2[1] - *param_2 & 0xfffffffc) + *puVar11;
        puVar2 = (undefined4 *)param_2[1];
        puVar7 = (undefined4 *)(*puVar11 + uVar1 * 4);
        for (puVar10 = (undefined4 *)(*param_2 + uVar1 * 4); puVar10 != puVar2;
            puVar10 = puVar10 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar10;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        if (puVar10 < puVar2) {
          if (0 < (int)uVar9) {
            puVar2 = puVar7 + -1;
            puVar8 = puVar10 + -1;
            if ((int)(uVar9 * 0x20000000) < 0) {
              *puVar7 = *puVar10;
              puVar2 = puVar7;
              puVar8 = puVar10;
            }
            for (iVar3 = (int)uVar9 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar2[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar2 = puVar2 + 2;
              *puVar2 = *puVar8;
            }
            puVar7 = (undefined4 *)((int)puVar7 + (uVar9 & 0xfffffffc));
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        if ((undefined4 *)param_1[0x27] < puVar7) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != (undefined4 *)param_1[0x27]);
        }
        iVar3 = (param_2[1] - *param_2 & 0xfffffffc) + *puVar11;
        param_1[0x27] = iVar3;
        param_1[0x28] = iVar3;
      }
    }
  }
  if (param_1[0x29] == 0) {
    puVar7 = (undefined4 *)fn_0015ecdc(0x1c);
    puVar10 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = &DAT_008550d4;
      *(undefined1 *)(puVar7 + 1) = 0;
      iVar3 = fn_00754a90(puVar7 + 3,0);
      puVar10 = (undefined4 *)(iVar3 + -0xc);
      *puVar10 = &DAT_008540f0;
    }
    param_1[0x29] = (int)puVar10;
  }
  fn_00679590(param_1[0x2a],param_1 + 0x26);
                    /* WARNING: Could not recover jumptable at 0x00677e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,2);
  return;
}



void fn_00677a78(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066eb80(DAT_00898840,3);
  fn_00669d8c(uVar1,param_1 + 100);
  return;
}



void fn_00677a68(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 100) = *param_2;
  fn_00170fa4(param_1 + 0x68,param_2 + 1);
  return;
}



void fn_00677a50(int param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  fn_0013d438(param_1 + 0x68,&DAT_008c6e36);
  return;
}



void fn_006779f4(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_006779cc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x74);
  iVar6 = *(int *)(param_1 + 0x78);
  piVar1[0x198] = *(int *)(param_1 + 0x68);
  piVar1[0x199] = iVar3;
  piVar1[0x19a] = iVar4;
  piVar1[0x19b] = iVar5;
  piVar1[0x19c] = iVar6;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x13,iVar3,iVar4,unaff_r4);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}


