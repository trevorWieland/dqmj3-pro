#include "00655c40_00656104.h"



void fn_00656104(int param_1)

{
  fn_0012a2d8(param_1 + 0x78);
  fn_0012a2d8(param_1 + 0x80);
  fn_0012a2d8(param_1 + 0x90);
  return;
}



void fn_00655ee8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint unaff_r8;
  
  iVar1 = fn_0069217c(param_2);
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x48);
    uVar2 = 0;
    uVar4 = (int)puVar8 - *(int *)(param_1 + 0x44) >> 2;
    if (uVar4 != 0) {
      do {
        if ((int)*(short *)(*(int *)(param_1 + 0x44) + uVar2 * 4) == param_2) {
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
    uVar2 = param_2 & 0xffff | unaff_r8 & 0xff000000 | (param_3 & 0xff) << 0x10;
    puVar9 = (uint *)(param_1 + 0x44);
    if (puVar8 == *(uint **)(param_1 + 0x4c)) {
      if ((uint)((int)*(uint **)(param_1 + 0x4c) - *(int *)(param_1 + 0x44) >> 2) <= uVar4) {
        uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar10 < uVar4 + 0x20) {
          uVar10 = uVar4 + 0x20;
        }
        puVar3 = (uint *)fn_00100fc6(uVar10 << 2,0);
        puVar6 = puVar3;
        for (puVar5 = (uint *)*puVar9; puVar5 != puVar8; puVar5 = puVar5 + 1) {
          if (puVar6 != (uint *)0x0) {
            *puVar6 = *puVar5;
          }
          puVar6 = puVar6 + 1;
        }
        puVar5 = (uint *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar3);
        if (puVar5 != (uint *)0x0) {
          *puVar5 = uVar2;
        }
        puVar6 = *(uint **)(param_1 + 0x48);
        puVar5 = (uint *)(((int)puVar8 - *puVar9 & 0xfffffffc) + (int)puVar3);
        for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
          puVar5 = puVar5 + 1;
          if (puVar5 != (uint *)0x0) {
            *puVar5 = *puVar8;
          }
        }
        uVar2 = *puVar9;
        uVar7 = *(uint *)(param_1 + 0x48);
        uVar4 = uVar2;
        if (uVar7 < uVar2) {
          do {
            uVar4 = uVar4 + 4;
          } while (uVar4 != uVar7);
        }
        fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x4c) - uVar2) >> 2,0);
        *(uint **)(param_1 + 0x4c) = puVar3 + uVar10;
        *(uint **)(param_1 + 0x48) = puVar3 + ((int)(uVar7 - uVar2) >> 2) + 1;
        *puVar9 = (uint)puVar3;
        return;
      }
      *(uint **)(param_1 + 0x48) = puVar8 + 1;
      if (puVar8 != (uint *)0x0) {
        *puVar8 = puVar8[-1];
      }
      puVar9 = puVar8 + -1;
      puVar5 = puVar8;
      if (puVar8 < puVar9) {
        iVar1 = (int)puVar9 - (int)puVar8;
        if (0 < iVar1) {
          if (iVar1 * 0x20000000 < 0) {
            puVar9 = puVar8 + -2;
            puVar5 = puVar8 + -1;
            *puVar5 = *puVar9;
          }
          for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
            puVar5[-1] = puVar9[-1];
            puVar9 = puVar9 + -2;
            puVar5 = puVar5 + -2;
            *puVar5 = *puVar9;
          }
        }
      }
      else {
        while (puVar8 != puVar9) {
          puVar9 = puVar9 + -1;
          puVar5[-1] = *puVar9;
          puVar5 = puVar5 + -1;
        }
      }
      *puVar8 = uVar2;
      return;
    }
    *(uint **)(param_1 + 0x48) = puVar8 + 1;
    if (puVar8 != (uint *)0x0) {
      *puVar8 = uVar2;
    }
  }
  return;
}



void fn_00655ec0(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = param_1 + 0x78 + (param_2 + -0x10) * 2;
  *(undefined1 *)(param_1 + 0x78 + param_2 + -0x10) = 1;
  *(undefined2 *)(iVar1 + 8) = param_3;
  *(undefined2 *)(iVar1 + 0x18) = param_4;
  return;
}



void fn_00655e24(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x6c);
  do {
    iVar3 = iVar3 + 1;
    iVar5 = -1;
    if (*(int *)(param_1 + 0x68) <= iVar3) goto LAB_00655e68;
  } while (*(char *)(param_1 + 0x50 + iVar3 * 3) != param_2);
  iVar5 = iVar3;
LAB_00655e68:
  if (*(int *)(param_1 + 0x6c) + 1 < iVar5) {
    do {
      puVar4 = (undefined2 *)(iVar5 * 3 + param_1 + 0x50);
      iVar5 = iVar5 + -1;
      uVar2 = *puVar4;
      uVar1 = *(undefined1 *)(puVar4 + 1);
      *puVar4 = *(undefined2 *)((int)puVar4 + -3);
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)((int)puVar4 + -1);
      *(undefined2 *)((int)puVar4 + -3) = uVar2;
      *(undefined1 *)((int)puVar4 + -1) = uVar1;
    } while (*(int *)(param_1 + 0x6c) + 1 < iVar5);
  }
  return;
}



void fn_00655e10(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + param_2 + 0x60) = 1;
  return;
}



void fn_00655dd4(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x2a) = 2;
      goto LAB_00655e08;
    }
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  else if (param_2 == 0) {
LAB_00655e08:
    *(undefined1 *)(param_1 + 0x11) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



void fn_00655da8(int param_1,char param_2,undefined2 param_3)

{
  param_1 = param_1 + (char)(param_2 + -0x10) * 0x22;
  *(undefined2 *)(param_1 + *(char *)(param_1 + 0xe0) * 2 + 0xc0) = param_3;
  *(char *)(param_1 + 0xe0) = *(char *)(param_1 + 0xe0) + '\x01';
  return;
}



void fn_00655d8c(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x68) + -1) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  return;
}



void fn_00655d5c(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(*(int *)(param_1 + 0x68) * 3 + param_1 + 0x50);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}



void fn_00655d48(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



void fn_00655c40(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  iVar5 = 0x10;
  *param_1 = 1;
  iVar8 = 0;
  do {
    uVar9 = (uint)(char)iVar5;
    uVar2 = uVar9 - 0x10;
    bVar11 = 3 < uVar2;
    if (bVar11) {
      uVar2 = uVar9 - 0x18;
    }
    uVar4 = 0x10;
    uVar6 = 0x14;
    if ((bVar11 && 3 < uVar2) && (uVar9 != 0x20 && uVar9 != 0x22)) {
      uVar4 = 0x14;
      uVar6 = 0x18;
    }
    cVar7 = '\0';
    cVar1 = '\0';
    if (uVar4 < uVar6) {
      do {
        cVar7 = cVar1;
        iVar3 = param_2 + (char)uVar4 * 0x418;
        if (uVar4 == uVar9) {
          if (0 < *(short *)(iVar3 + -0x4080)) {
            cVar1 = *(char *)(iVar3 + -0x4019);
            bVar11 = cVar1 == '\0';
            if (bVar11) {
              cVar1 = *(char *)(iVar3 + -0x400a);
            }
            bVar10 = bVar11 && cVar1 == '\0';
            if (bVar11 && cVar1 == '\0') {
              bVar10 = *(char *)(iVar3 + -0x4018) == '\0';
            }
            if (bVar10) break;
          }
          cVar7 = '\0';
          break;
        }
        if (0 < *(short *)(iVar3 + -0x4080)) {
          cVar1 = *(char *)(iVar3 + -0x4019);
          bVar11 = cVar1 == '\0';
          if (bVar11) {
            cVar1 = *(char *)(iVar3 + -0x400a);
          }
          if ((bVar11 && cVar1 == '\0') && (*(char *)(iVar3 + -0x4018) == '\0')) {
            cVar7 = cVar7 + '\x01';
          }
        }
        uVar4 = uVar4 + 1;
        cVar1 = cVar7;
      } while ((int)uVar4 < (int)uVar6);
    }
    iVar5 = iVar5 + 1;
    param_1[iVar8 + 1] = cVar7;
    iVar8 = iVar8 + 1;
    if (0x17 < iVar5) {
      return;
    }
  } while( true );
}


