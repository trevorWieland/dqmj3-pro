#include "004dc794_004de188.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


undefined1 * fn_004de188(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if ((DAT_008bf500 == '\0') || (iVar1 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar1 == 0))
  {
    return &DAT_e0a14827;
  }
  puVar2 = (undefined1 *)(**(code **)(**(int **)(param_1 + 0x14) + 0x70))();
  if (-1 < (int)puVar2) {
    *(undefined1 *)(param_1 + 0x80) = 1;
    fn_004e17b8(*(undefined4 *)(param_1 + 0x14));
  }
  return puVar2;
}



undefined8 fn_004dd960(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    fn_004ed13c(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  uVar1 = fn_004dc3d0(param_1,param_1 + 0x60,param_2,param_3);
  uVar2 = uVar1 & 0x80000000;
  if (-1 < (int)uVar2) {
    uVar2 = 3;
    *(undefined1 *)(param_1 + 0x74) = 3;
  }
  return CONCAT44(uVar2,uVar1);
}



void fn_004dd8ec(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x82) != '\0') {
    iVar2 = *(int *)(param_1 + 0x94);
    bVar7 = *(int *)(param_1 + 0x90) != 0;
    uVar1 = -(iVar2 + (uint)bVar7);
    if ((int)uVar1 < 0 != (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)bVar7))) {
      svc_0x28();
      uVar4 = *(uint *)(param_1 + 0x90);
      iVar5 = *(int *)(param_1 + 0x94);
      uVar6 = uVar1 - *(uint *)(param_1 + 0x88);
      iVar2 = -(*(int *)(param_1 + 0x8c) + (uint)(uVar1 < *(uint *)(param_1 + 0x88)));
      iVar3 = iVar2 - (iVar5 + (uint)(uVar6 < uVar4));
      uVar8 = CONCAT44(iVar3,iVar2);
      if (iVar3 < 0 != (SBORROW4(iVar2,iVar5) != SBORROW4(iVar2 - iVar5,(uint)(uVar6 < uVar4)))) {
        uVar8 = fn_006577a8(uVar4 - uVar6,iVar5 - (iVar2 + (uint)(uVar4 < uVar6)));
      }
      svc_0x28();
      *(undefined8 *)(param_1 + 0x88) = uVar8;
    }
  }
  return;
}



longlong fn_004dd27c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar9 = &DAT_008c0630;
  uVar12 = 0xe0e14826;
  if ((*(uint *)(param_2 + 8) < 0x4000) || ((*(uint *)(param_2 + 8) & 0xfff) != 0)) {
    if (DAT_008c0630 != 0) {
      puVar9 = (undefined4 *)0x8;
    }
  }
  else if ((*(uint *)(param_2 + 0xc) == 0) || ((*(uint *)(param_2 + 0xc) & 0xfff) == 0)) {
    if (*(uint *)(param_2 + 0x10) < 0x400) {
      if (DAT_008c0630 != 0) {
        puVar9 = (undefined4 *)0x8;
      }
    }
    else if ((*(byte *)(param_2 + 0x15) & 1) == 0) {
      if (DAT_008c0630 != 0) {
        puVar9 = (undefined4 *)0x8;
      }
    }
    else {
      if (*(int *)(param_1 + 8) == 0) {
        uVar1 = *(undefined1 *)(param_2 + 4);
        uVar2 = *(undefined1 *)(param_2 + 5);
        uVar3 = *(undefined1 *)(param_2 + 6);
        uVar4 = *(undefined1 *)(param_2 + 0x15);
        uVar5 = *(undefined1 *)(param_2 + 0x14);
        uVar13 = *(undefined4 *)(param_2 + 8);
        uVar14 = *(undefined4 *)(param_2 + 0xc);
        uVar15 = *(undefined4 *)(param_2 + 0x10);
        uVar16 = *(undefined4 *)(param_2 + 0x18);
        uVar6 = fn_004ed2e8();
        puVar9 = (undefined4 *)fn_00656e14(0x1c,uVar6);
        if (puVar9 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar9 + 1) = uVar1;
          *(undefined1 *)((int)puVar9 + 5) = uVar2;
          *(undefined1 *)((int)puVar9 + 6) = uVar3;
          *puVar9 = &DAT_00856608;
          puVar9[2] = uVar13;
          puVar9[3] = uVar14;
          puVar9[4] = uVar15;
          *(undefined1 *)(puVar9 + 5) = uVar5;
          *(undefined1 *)((int)puVar9 + 0x15) = uVar4;
          puVar9[6] = uVar16;
        }
        *(undefined4 **)(param_1 + 8) = puVar9;
      }
      if (*(int *)(param_1 + 0xc) == 0) {
        uVar6 = fn_004ed2e8();
        iVar7 = fn_00656e14(0x10c0,uVar6);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar12 = 0;
          do {
            uVar10 = uVar12 + 1;
            puVar9 = (undefined4 *)(iVar7 + uVar12 * 0x10c);
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = &DAT_00856874;
            }
            uVar12 = uVar10;
          } while (uVar10 < 0x10);
        }
        *(int *)(param_1 + 0xc) = iVar7;
      }
      uVar12 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x40) = uVar12;
      if (*(int *)(param_1 + 0x3c) == 0) {
        if (*(int *)(param_2 + 0xc) == 0) {
          uVar6 = fn_004ed2e8();
          iVar7 = fn_00656e58(uVar12,uVar6,0x1000);
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            uVar10 = 0;
            if (uVar12 != 0) {
              do {
                puVar11 = (undefined1 *)(iVar7 + uVar10);
                uVar10 = uVar10 + 1;
                if (puVar11 != (undefined1 *)0x0) {
                  *puVar11 = 0;
                }
              } while (uVar10 < uVar12);
            }
          }
          *(int *)(param_1 + 0x3c) = iVar7;
          *(undefined1 *)(param_1 + 0x44) = 0;
        }
        else {
          *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0xc);
          *(undefined1 *)(param_1 + 0x44) = 1;
        }
      }
      uVar12 = *(uint *)(param_2 + 0x10);
      *(uint *)(param_1 + 0x4c) = uVar12;
      if (*(int *)(param_1 + 0x48) == 0) {
        uVar6 = fn_004ed2e8();
        iVar7 = fn_00656e14(uVar12,uVar6);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          uVar10 = 0;
          if (uVar12 != 0) {
            do {
              puVar11 = (undefined1 *)(iVar7 + uVar10);
              uVar10 = uVar10 + 1;
              if (puVar11 != (undefined1 *)0x0) {
                *puVar11 = 0;
              }
            } while (uVar10 < uVar12);
          }
        }
        *(int *)(param_1 + 0x48) = iVar7;
      }
      piVar8 = *(int **)(param_1 + 0x14);
      if (piVar8 == (int *)0x0) {
        uVar6 = fn_004ed2e8();
        iVar7 = fn_00656e14(0x21b8,uVar6);
        piVar8 = (int *)0x0;
        if (iVar7 != 0) {
          piVar8 = (int *)fn_004e0c40();
        }
        *(int **)(param_1 + 0x14) = piVar8;
      }
      uVar12 = (**(code **)(*piVar8 + 8))(piVar8,*(undefined4 *)(param_1 + 8));
      puVar9 = (undefined4 *)(uVar12 & 0x80000000);
      if (-1 < (int)puVar9) {
        if (*(char *)(param_2 + 4) != '\0') {
          if (*(int *)(param_1 + 0x18) == 0) {
            uVar6 = fn_004ed2e8();
            iVar7 = fn_00656e14(0x4c,uVar6);
            uVar6 = 0;
            if (iVar7 != 0) {
              uVar6 = fn_004e6320();
            }
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
          uVar12 = fn_004e47b0();
          puVar9 = (undefined4 *)(uVar12 & 0x80000000);
          if ((int)puVar9 < 0) goto LAB_004dd488;
        }
        if (*(char *)(param_2 + 5) != '\0') {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            uVar6 = fn_004ed2e8();
            iVar7 = fn_00656e14(0x7628,uVar6);
            piVar8 = (int *)0x0;
            if (iVar7 != 0) {
              piVar8 = (int *)fn_004e9bf0();
            }
            *(int **)(param_1 + 0x1c) = piVar8;
          }
          uVar12 = (**(code **)(*piVar8 + 8))();
          puVar9 = (undefined4 *)(uVar12 & 0x80000000);
          if ((int)puVar9 < 0) goto LAB_004dd488;
        }
        DAT_008ed8f4 = *(undefined4 *)(param_2 + 8);
        DAT_008ed8f8 = *(undefined4 *)(param_2 + 0x10);
        DAT_008ed8fc = *(undefined1 *)(param_2 + 0x14);
        DAT_008ed8fd = *(byte *)(param_2 + 0x15);
        return (ulonglong)*(byte *)(param_2 + 0x15) << 0x20;
      }
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar9 = (undefined4 *)0x8;
  }
LAB_004dd488:
  return CONCAT44(puVar9,uVar12);
}



undefined1 * fn_004dd0ac(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = fn_004df23c();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_004df22c(iVar1);
    if (iVar1 == 0) {
      return &DAT_e0a14827;
    }
    if (DAT_008bf504 == 0) {
      iVar1 = fn_004ecfe0(0xa0);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar3 = fn_004df0fc();
      }
      DAT_008bf504 = uVar3;
      return (undefined1 *)0x0;
    }
    puVar2 = &DAT_d8a1482e;
  }
  return puVar2;
}



undefined1 * fn_004dcbf8(int param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008bf500 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
    if (((((param_2 - 0x100000U < 0x3ff00000) && (param_3 + -0x40000 < (int *)0x3ff00000)) &&
         (*param_3 - 0x100000U < 0x3ff00000)) &&
        ((puVar1 = &DAT_e0a14827, *(char *)(param_1 + 0x60) != '\x01' &&
         (iVar2 = fn_006d897c(*(undefined4 *)(param_1 + 0x2c)), iVar2 == 0)))) &&
       ((DAT_008bf500 == '\0' ||
        ((iVar2 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0 &&
         ((DAT_008bf500 == '\0' ||
          (iVar2 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0)))))))) {
      iVar2 = fn_006d88c8(*(undefined4 *)(param_1 + 0x2c));
      if (iVar2 != 0) {
        (**(code **)(**(int **)(param_1 + 0x2c) + 8))(*(int **)(param_1 + 0x2c),1);
      }
      puVar1 = (undefined1 *)fn_004e5398(*(undefined4 *)(param_1 + 0x2c),param_2,param_3);
      if (-1 < (int)puVar1) {
        fn_004e1338(*(undefined4 *)(param_1 + 0x14));
        fn_004efcf4(*(undefined4 *)(param_1 + 0x2c),0);
      }
      return puVar1;
    }
  }
  return puVar1;
}



undefined1 * fn_004dc794(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008bf500 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    puVar1 = (undefined1 *)0xe0e14826;
    if (((((param_2 - 0x100000U < 0x3ff00000) && (param_3 - 0x100000U < 0x3ff00000)) &&
         (puVar1 = &DAT_e0a14827, *(char *)(param_1 + 0x60) != '\x01')) &&
        (iVar2 = fn_006d897c(*(undefined4 *)(param_1 + 0x20)), iVar2 == 0)) &&
       ((DAT_008bf500 == '\0' ||
        ((iVar2 = fn_006d685c(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0 &&
         ((DAT_008bf500 == '\0' ||
          (iVar2 = fn_006d6880(*(undefined4 *)(param_1 + 0x14)), iVar2 == 0)))))))) {
      iVar2 = fn_006d88c8(*(undefined4 *)(param_1 + 0x20));
      if (iVar2 != 0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20),1);
      }
      fn_004e134c(*(undefined4 *)(param_1 + 0x14));
      iVar2 = fn_006d589c(param_1);
      if ((iVar2 != 0) || (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x7c))(), -1 < iVar2))
      {
        iVar2 = fn_006d589c(param_1);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0x80) = 1;
        }
        puVar1 = (undefined1 *)fn_004e32fc(*(undefined4 *)(param_1 + 0x20),param_2,param_3);
        if (-1 < (int)puVar1) {
          fn_004e1338(*(undefined4 *)(param_1 + 0x14));
          fn_004efcf4(*(undefined4 *)(param_1 + 0x20),0);
        }
        return puVar1;
      }
      puVar1 = (undefined1 *)0xd8a1486b;
    }
  }
  return puVar1;
}


