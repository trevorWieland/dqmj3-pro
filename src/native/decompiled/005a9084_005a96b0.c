#include "005a9084_005a96b0.h"



int fn_005a96b0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_20;
  uint local_1c;
  
  *param_1 = &DAT_00847230;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = param_2;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  iVar1 = fn_00101a1c(param_1 + 0xb,&LAB_005a8e64,8,4);
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  local_20 = 8;
  puVar9 = (uint *)(iVar1 + -0x28);
  if ((uint)(*(int *)(iVar1 + -0x20) - *(int *)(iVar1 + -0x28) >> 2) < 8) {
    uVar10 = *(int *)(iVar1 + -0x24) - *(int *)(iVar1 + -0x28) >> 2;
    local_1c = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_1c < uVar10 + 0x20) {
      local_1c = uVar10 + 0x20;
    }
    puVar6 = &local_1c;
    if (local_1c < 9) {
      puVar6 = &local_20;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar8 = *(undefined4 **)(iVar1 + -0x24);
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if (*(uint *)(iVar1 + -0x24) < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != *(uint *)(iVar1 + -0x24));
    }
    fn_001008c4(uVar4,(int)(*(int *)(iVar1 + -0x20) - uVar4) >> 2,0);
    uVar5 = *puVar9;
    *(undefined4 **)(iVar1 + -0x28) = puVar2;
    *(int *)(iVar1 + -0x24) = (*(int *)(iVar1 + -0x24) - uVar5 & 0xfffffffc) + (int)puVar2;
    *(undefined4 **)(iVar1 + -0x20) = puVar2 + uVar10;
  }
  *(undefined1 *)(iVar1 + -2) = 0;
  return iVar1 + -0x2c;
}



void fn_005a9654(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar2 = *(int *)(param_1 + uVar5 * 4 + 0x10);
    if (iVar2 != 0) {
      iVar1 = iVar2 + (uint)*(byte *)(iVar2 + 0x3d) * 8;
      piVar4 = (int *)(iVar2 + ((int)*(uint *)(iVar1 + 0x10) >> 1));
      if ((*(uint *)(iVar1 + 0x10) & 1) == 0) {
        pcVar3 = *(code **)(iVar1 + 0xc);
      }
      else {
        pcVar3 = *(code **)(*piVar4 + *(int *)(iVar1 + 0xc));
      }
      (*pcVar3)(piVar4);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}



void fn_005a9518(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x74);
  pcVar3 = (char *)(param_1 + 0x7d);
  fn_0018cb08(iVar5,(int)(char)(*pcVar3 + -0x10),3,iVar5,iVar5);
  puVar2 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = *(undefined4 *)(iVar5 + 0x20);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x18] = uVar4;
    puVar2[0x19] = iVar5;
    fn_005a8448(puVar2);
  }
  *(undefined4 **)(iVar5 + *pcVar3 * 4 + -0x30) = puVar2;
  uVar6 = (uint)(char)(*pcVar3 + -0x10);
  uVar1 = *(int *)(iVar5 + 8) - *(int *)(iVar5 + 4) >> 2;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar6,uVar1);
  }
  *(undefined4 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x40) =
       *(undefined4 *)(*(int *)(iVar5 + 4) + uVar6 * 4);
  fn_005a928c(iVar5,*(undefined4 *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10),3);
  *(undefined1 *)(*(int *)(iVar5 + (char)(*pcVar3 + -0x10) * 4 + 0x10) + 0x58) = 0;
  *(undefined1 *)(iVar5 + 0x28) = 0;
  *(undefined1 *)(iVar5 + 0x29) = 0;
  return;
}



void fn_005a928c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  char local_24 [4];
  
  if (param_3 == 3) {
    fn_007997c0(param_2,4);
    cVar3 = '\x10';
    do {
      iVar2 = fn_00174828(DAT_008977e4);
      iVar2 = iVar2 + cVar3 * 0x418;
      if (0 < *(short *)(iVar2 + -0x4080)) {
        cVar1 = *(char *)(iVar2 + -0x4019);
        bVar6 = cVar1 == '\0';
        if (bVar6) {
          cVar1 = *(char *)(iVar2 + -0x400a);
        }
        bVar7 = bVar6 && cVar1 == '\0';
        if (bVar6 && cVar1 == '\0') {
          bVar7 = *(char *)(iVar2 + -0x4018) == '\0';
        }
        if (bVar7) {
          uVar5 = (uint)(char)(cVar3 + -0x10);
          uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
          if (uVar4 <= uVar5) {
            fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar5,uVar4);
          }
          local_24[0] = cVar3;
          fn_005a77fc(param_2,*(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4),local_24);
        }
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\x14');
  }
  else if (param_3 == 4) {
    fn_007997c0(param_2,4);
    cVar3 = '\x14';
    do {
      iVar2 = fn_00174828(DAT_008977e4);
      iVar2 = iVar2 + cVar3 * 0x418;
      if (0 < *(short *)(iVar2 + -0x4080)) {
        cVar1 = *(char *)(iVar2 + -0x4019);
        bVar6 = cVar1 == '\0';
        if (bVar6) {
          cVar1 = *(char *)(iVar2 + -0x400a);
        }
        bVar7 = bVar6 && cVar1 == '\0';
        if (bVar6 && cVar1 == '\0') {
          bVar7 = *(char *)(iVar2 + -0x4018) == '\0';
        }
        if (bVar7) {
          uVar5 = (*(int *)(param_1 + 0x24) + (int)cVar3) - 0x14;
          uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
          if (uVar4 <= uVar5) {
            fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar5,uVar4);
          }
          local_24[0] = cVar3;
          fn_005a77fc(param_2,*(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4),local_24);
        }
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\x18');
  }
  else if (param_3 == 5) {
    fn_007997c0(param_2,8);
    cVar3 = '\x10';
    uVar4 = 0;
    do {
      iVar2 = fn_00174828(DAT_008977e4);
      iVar2 = iVar2 + cVar3 * 0x418;
      if (0 < *(short *)(iVar2 + -0x4080)) {
        cVar1 = *(char *)(iVar2 + -0x4019);
        bVar6 = cVar1 == '\0';
        if (bVar6) {
          cVar1 = *(char *)(iVar2 + -0x400a);
        }
        bVar7 = bVar6 && cVar1 == '\0';
        if (bVar6 && cVar1 == '\0') {
          bVar7 = *(char *)(iVar2 + -0x4018) == '\0';
        }
        if (bVar7) {
          uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
          if (uVar5 <= uVar4) {
            fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar4,uVar5);
          }
          local_24[0] = cVar3;
          fn_005a77fc(param_2,*(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4),local_24);
        }
        uVar4 = uVar4 + 1;
      }
      cVar3 = cVar3 + '\x01';
    } while (cVar3 < '\x18');
  }
  *(char *)(param_2 + 0x3c) = (char)param_3;
  return;
}



void fn_005a9084(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
      if (iVar1 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = fn_005888f8(iVar1,param_3,*(undefined4 *)(param_1 + 0x20),(int)(char)uVar12,0xd);
      }
      puVar9 = *(undefined4 **)(param_1 + 8);
      puVar10 = (uint *)(param_1 + 4);
      if (puVar9 == *(undefined4 **)(param_1 + 0xc)) {
        uVar3 = (int)((int)puVar9 - *puVar10) >> 2;
        if (uVar3 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar10) >> 2)) {
          *(undefined4 **)(param_1 + 8) = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          puVar5 = puVar9 + -1;
          puVar6 = puVar9;
          if (puVar9 < puVar5) {
            if (0 < (int)puVar5 - (int)puVar9) {
              iVar1 = (int)puVar5 - (int)puVar9 >> 2;
              iVar8 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar9[iVar8 + -1] = puVar5[iVar8 + -1];
                iVar8 = iVar8 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar9 != puVar5) {
              puVar5 = puVar5 + -1;
              puVar6[-1] = *puVar5;
              puVar6 = puVar6 + -1;
            }
          }
          *puVar9 = uVar11;
        }
        else {
          uVar4 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          uVar13 = uVar3 + 0x20;
          if (uVar3 + 0x20 <= uVar4) {
            uVar13 = uVar4;
          }
          puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
          puVar6 = puVar2;
          for (puVar5 = (undefined4 *)*puVar10; puVar5 != puVar9; puVar5 = puVar5 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar5;
            }
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar11;
          }
          puVar6 = *(undefined4 **)(param_1 + 8);
          puVar5 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffffc) + (int)puVar2);
          for (; puVar9 != puVar6; puVar9 = puVar9 + 1) {
            puVar5 = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar9;
            }
          }
          uVar4 = *puVar10;
          uVar7 = *(uint *)(param_1 + 8);
          uVar3 = uVar4;
          if (uVar7 < uVar4) {
            do {
              uVar3 = uVar3 + 4;
            } while (uVar3 != uVar7);
          }
          fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xc) - uVar4) >> 2,0);
          *(undefined4 **)(param_1 + 0xc) = puVar2 + uVar13;
          *(undefined4 **)(param_1 + 8) = puVar2 + ((int)(uVar7 - uVar4) >> 2) + 1;
          *puVar10 = (uint)puVar2;
        }
      }
      else {
        *(undefined4 **)(param_1 + 8) = puVar9 + 1;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = uVar11;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_2);
  }
  return;
}


