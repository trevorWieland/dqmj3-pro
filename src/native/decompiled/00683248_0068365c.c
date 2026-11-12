#include "00683248_0068365c.h"



void fn_0068365c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  if (uVar3 != 0xffffffff || uVar1 != 0xffffffff) {
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      uVar1 = (uint)*(byte *)((int)param_1 + 6);
    }
    if (!bVar5 || uVar1 != 0) {
      if (*(char *)((int)param_1 + 5) != '\0') {
        (**(code **)(*param_1 + 0xc))(param_1,1,0);
        *(undefined1 *)((int)param_1 + 5) = 0;
      }
      if (*(char *)((int)param_1 + 6) == '\0') {
        param_1[4] = param_1[2];
        param_1[2] = param_1[3];
      }
      (**(code **)(*param_1 + 0xc))(param_1,0);
      *(undefined1 *)((int)param_1 + 5) = 1;
      *(undefined1 *)((int)param_1 + 6) = 0;
    }
    (**(code **)(*param_1 + 0xc))(param_1,2,0);
    if (param_1[3] == param_1[2]) {
      puVar4 = (undefined4 *)param_1[5];
      if ((undefined4 *)param_1[6] != puVar4) {
        do {
          (**(code **)(*param_1 + 0xc))(param_1,*puVar4,puVar4[1]);
          puVar4 = puVar4 + 2;
        } while ((undefined4 *)param_1[6] != puVar4);
      }
      uVar1 = param_1[5];
      uVar3 = param_1[6];
      if (uVar1 != uVar3) {
        uVar2 = uVar1;
        if (uVar3 <= uVar1) {
          do {
            uVar2 = uVar2 + 8;
          } while (uVar2 != uVar3);
        }
        param_1[6] = uVar3 - (uVar3 - uVar1 & 0xfffffff8);
      }
    }
  }
  return;
}



void fn_00683548(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar5;
  undefined4 unaff_r6;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x5b) != '\0') {
    iVar6 = 0;
    do {
      if (param_1[iVar6 * 4 + 0x18] != param_1[iVar6 * 4 + 0x17]) {
        if (param_1[2] == iVar6) {
          (**(code **)(*param_1 + 0xc))(param_1,1,0);
          *(undefined1 *)((int)param_1 + 5) = 0;
        }
        if ((int *)param_1[iVar6 * 4 + 0x1a] != (int *)0x0) {
          (**(code **)(*(int *)param_1[iVar6 * 4 + 0x1a] + 4))();
        }
        param_1[iVar6 * 4 + 0x1a] = 0;
        if (param_1[iVar6 * 4 + 0x18] != 0) {
          iVar1 = (**(code **)(*param_1 + 0x9c))(param_1,iVar6);
          param_1[iVar6 * 4 + 0x1a] = iVar1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    iVar6 = 0;
    do {
      iVar1 = param_1[iVar6 * 4 + 0x17];
      if (param_1[iVar6 * 4 + 0x18] != iVar1) {
        param_1[iVar6 * 4 + 0x17] = param_1[iVar6 * 4 + 0x18];
        param_1[iVar6 * 4 + 0x19] = iVar1;
        iVar1 = param_1[2];
        bVar7 = iVar1 == iVar6;
        if (bVar7) {
          iVar1 = param_1[3];
        }
        if (bVar7 && iVar1 == iVar6) {
          (**(code **)(*param_1 + 0xc))(param_1,0);
          *(undefined1 *)((int)param_1 + 5) = 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
  }
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  if (uVar4 != 0xffffffff || uVar2 != 0xffffffff) {
    bVar7 = uVar4 == uVar2;
    if (bVar7) {
      uVar2 = (uint)*(byte *)((int)param_1 + 6);
    }
    if (!bVar7 || uVar2 != 0) {
      if (*(char *)((int)param_1 + 5) != '\0') {
        (**(code **)(*param_1 + 0xc))
                  (param_1,1,0,*(code **)(*param_1 + 0xc),unaff_r4,unaff_r5,unaff_r6,in_lr);
        *(undefined1 *)((int)param_1 + 5) = 0;
      }
      if (*(char *)((int)param_1 + 6) == '\0') {
        param_1[4] = param_1[2];
        param_1[2] = param_1[3];
      }
      (**(code **)(*param_1 + 0xc))(param_1,0);
      *(undefined1 *)((int)param_1 + 5) = 1;
      *(undefined1 *)((int)param_1 + 6) = 0;
    }
    (**(code **)(*param_1 + 0xc))(param_1,2,0);
    if (param_1[3] == param_1[2]) {
      puVar5 = (undefined4 *)param_1[5];
      if ((undefined4 *)param_1[6] != puVar5) {
        do {
          (**(code **)(*param_1 + 0xc))(param_1,*puVar5,puVar5[1]);
          puVar5 = puVar5 + 2;
        } while ((undefined4 *)param_1[6] != puVar5);
      }
      uVar2 = param_1[5];
      uVar4 = param_1[6];
      if (uVar2 != uVar4) {
        uVar3 = uVar2;
        if (uVar4 <= uVar2) {
          do {
            uVar3 = uVar3 + 8;
          } while (uVar3 != uVar4);
        }
        param_1[6] = uVar4 - (uVar4 - uVar2 & 0xfffffff8);
      }
    }
  }
  return;
}



undefined4 fn_00683320(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  if (param_1 != 0) {
    puVar11 = (uint *)(param_1 + 0x18);
    puVar2 = (undefined4 *)*puVar11;
    puVar12 = (uint *)(param_1 + 0x14);
    if (puVar2 == *(undefined4 **)(param_1 + 0x1c)) {
      uVar1 = (int)((int)puVar2 - *puVar12) >> 3;
      if (uVar1 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x1c) - *puVar12) >> 3)) {
        *puVar11 = (uint)(puVar2 + 2);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = puVar2[-2];
          puVar2[1] = puVar2[-1];
        }
        puVar6 = puVar2 + -2;
        puVar7 = puVar2;
        if (puVar2 < puVar6) {
          iVar5 = (int)puVar6 - (int)puVar2;
          if (0 < iVar5) {
            if (iVar5 * 0x10000000 < 0) {
              puVar6 = puVar2 + -4;
              puVar7 = puVar2 + -2;
              *puVar7 = *puVar6;
              puVar2[-1] = puVar2[-3];
            }
            for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
              uVar9 = puVar6[-1];
              puVar7[-2] = puVar6[-2];
              puVar7[-1] = uVar9;
              uVar9 = puVar6[-3];
              puVar7[-4] = puVar6[-4];
              puVar7[-3] = uVar9;
              puVar7 = puVar7 + -4;
              puVar6 = puVar6 + -4;
            }
          }
        }
        else {
          while (puVar2 != puVar6) {
            uVar9 = puVar6[-1];
            puVar7[-2] = puVar6[-2];
            puVar7[-1] = uVar9;
            puVar7 = puVar7 + -2;
            puVar6 = puVar6 + -2;
          }
        }
        *puVar2 = param_2;
        puVar2[1] = param_3;
      }
      else {
        uVar13 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar13 < uVar1 + 0x20) {
          uVar13 = uVar1 + 0x20;
        }
        puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
        puVar7 = puVar3;
        for (puVar6 = (undefined4 *)*puVar12; puVar6 != puVar2; puVar6 = puVar6 + 2) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar6;
            puVar7[1] = puVar6[1];
          }
          puVar7 = puVar7 + 2;
        }
        puVar6 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffff8) + (int)puVar3);
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = param_2;
          puVar6[1] = param_3;
        }
        puVar7 = (undefined4 *)*puVar11;
        puVar6 = (undefined4 *)(((int)puVar2 - *puVar12 & 0xfffffff8) + (int)puVar3);
        for (; puVar2 != puVar7; puVar2 = puVar2 + 2) {
          puVar4 = puVar6 + 2;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar2;
            puVar6[3] = puVar2[1];
          }
          puVar6 = puVar4;
        }
        uVar8 = *puVar11;
        uVar10 = *puVar12;
        uVar1 = uVar10;
        if (uVar8 <= uVar10) {
          for (; uVar1 != uVar8; uVar1 = uVar1 + 8) {
          }
        }
        fn_001008c4(uVar10,(int)(*(int *)(param_1 + 0x1c) - uVar10) >> 3,0);
        *(undefined4 **)(param_1 + 0x1c) = puVar3 + uVar13 * 2;
        *puVar11 = (uint)(puVar3 + ((int)(uVar8 - uVar10) >> 3) * 2 + 2);
        *puVar12 = (uint)puVar3;
      }
    }
    else {
      *puVar11 = (uint)(puVar2 + 2);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_2;
        puVar2[1] = param_3;
      }
    }
  }
  return 0;
}



undefined4 * fn_00683308(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_00683294(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x24,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
    *(undefined1 *)((int)puVar1 + 0x16) = 1;
    *(undefined1 *)((int)puVar1 + 0x17) = 1;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffff;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_0068326c(int *param_1)

{
  float in_s0;
  
  param_1 = (int *)*param_1;
  param_1[3] = param_1[2];
  param_1[4] = 0;
  *param_1 = (int)in_s0;
  param_1[1] = (int)in_s0;
  param_1[2] = 0;
  return;
}



void fn_00683248(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 0x15) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  return;
}


