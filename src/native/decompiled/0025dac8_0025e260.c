#include "0025dac8_0025e260.h"



void fn_0025e260(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081dac4;
  uVar1 = param_1[0x20];
  uVar2 = uVar1;
  if ((uint)param_1[0x21] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x21]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x22] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



void fn_0025e1f8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0081dac4;
  uVar1 = param_1[0x20];
  uVar2 = uVar1;
  if ((uint)param_1[0x21] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x21]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x22] - uVar1) >> 2,0);
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0025dea8(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint local_30;
  uint local_2c [2];
  
  puVar8 = &local_30;
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_0081dac4;
  uVar10 = *(undefined4 *)(param_2 + 0x18);
  puVar1[0x1a] = 0;
  puVar1[0x19] = uVar10;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar2 = puVar1 + 0x20;
  *puVar2 = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  local_2c[0] = param_4;
  if (0x3fffffff < param_4) {
    local_30 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7671);
  }
  if ((uint)((int)(puVar1[0x22] - *puVar2) >> 2) < local_2c[0]) {
    uVar12 = (int)(puVar1[0x21] - *puVar2) >> 2;
    uVar7 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    local_30 = uVar12 + 0x20;
    if (uVar12 + 0x20 <= uVar7) {
      local_30 = uVar7;
    }
    if (local_30 <= local_2c[0]) {
      puVar8 = local_2c;
    }
    uVar12 = *puVar8;
    puVar3 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
    puVar11 = (undefined4 *)puVar1[0x21];
    puVar14 = puVar3;
    for (puVar9 = (undefined4 *)*puVar2; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *puVar9;
      }
      puVar14 = puVar14 + 1;
    }
    uVar4 = *puVar2;
    uVar7 = uVar4;
    if ((uint)puVar1[0x21] < uVar4) {
      do {
        uVar7 = uVar7 + 4;
      } while (uVar7 != puVar1[0x21]);
    }
    fn_001008c4(uVar4,(int)(puVar1[0x22] - uVar4) >> 2,0);
    uVar7 = *puVar2;
    puVar1[0x20] = puVar3;
    puVar1[0x21] = (puVar1[0x21] - uVar7 & 0xfffffffc) + (int)puVar3;
    puVar1[0x22] = puVar3 + uVar12;
  }
  iVar13 = 0;
  if (0 < (int)param_4) {
    do {
      puVar9 = (undefined4 *)puVar1[0x21];
      if (puVar9 == (undefined4 *)puVar1[0x22]) {
        puVar14 = (undefined4 *)(param_3 + iVar13 * 4);
        uVar12 = (int)((int)puVar9 - *puVar2) >> 2;
        if (uVar12 < (uint)((int)((int)puVar1[0x22] - *puVar2) >> 2)) {
          puVar1[0x21] = puVar9 + 1;
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = puVar9[-1];
          }
          puVar3 = puVar9 + -1;
          puVar11 = puVar9;
          if (puVar9 < puVar3) {
            iVar5 = (int)puVar3 - (int)puVar9;
            if (0 < iVar5) {
              if (iVar5 * 0x20000000 < 0) {
                puVar3 = puVar9 + -2;
                puVar11 = puVar9 + -1;
                *puVar11 = *puVar3;
              }
              for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
                puVar11[-1] = puVar3[-1];
                puVar3 = puVar3 + -2;
                puVar11 = puVar11 + -2;
                *puVar11 = *puVar3;
              }
            }
          }
          else {
            while (puVar9 != puVar3) {
              puVar3 = puVar3 + -1;
              puVar11[-1] = *puVar3;
              puVar11 = puVar11 + -1;
            }
          }
          *puVar9 = *puVar14;
        }
        else {
          local_30 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
          if (local_30 < uVar12 + 0x20) {
            local_30 = uVar12 + 0x20;
          }
          puVar6 = (undefined4 *)fn_00100fc6(local_30 << 2,0);
          puVar11 = puVar6;
          for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar9; puVar3 = puVar3 + 1) {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = *puVar3;
            }
            puVar11 = puVar11 + 1;
          }
          puVar3 = (undefined4 *)(((int)puVar9 - *puVar2 & 0xfffffffc) + (int)puVar6);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar14;
          }
          puVar3 = (undefined4 *)puVar1[0x21];
          puVar14 = (undefined4 *)(((int)puVar9 - *puVar2 & 0xfffffffc) + (int)puVar6);
          for (; puVar9 != puVar3; puVar9 = puVar9 + 1) {
            puVar14 = puVar14 + 1;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = *puVar9;
            }
          }
          uVar7 = *puVar2;
          uVar4 = puVar1[0x21];
          uVar12 = uVar7;
          if (uVar4 < uVar7) {
            do {
              uVar12 = uVar12 + 4;
            } while (uVar12 != uVar4);
          }
          fn_001008c4(uVar7,(int)(puVar1[0x22] - uVar7) >> 2,0);
          puVar1[0x22] = puVar6 + local_30;
          puVar1[0x21] = puVar6 + ((int)(uVar4 - uVar7) >> 2) + 1;
          *puVar2 = (uint)puVar6;
        }
      }
      else {
        puVar1[0x21] = puVar9 + 1;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = *(undefined4 *)(param_3 + iVar13 * 4);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)param_4);
  }
  return puVar1;
}



void fn_0025dbc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0xc) != '\x03') {
    return;
  }
  piVar7 = (int *)0x0;
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
    iVar4 = fn_006896fc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,param_4,param_4);
    if (*(char *)(iVar4 + 0xc) == '\x03') {
      piVar2 = (int *)fn_006896fc(param_1,*(undefined4 *)(param_1 + 0x78));
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
        do {
          if (puVar3 == &DAT_00895318) {
            piVar7 = piVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      iVar9 = piVar7[0x20];
      iVar8 = piVar7[0x21];
      iVar4 = fn_003492a8(*(undefined4 *)(param_1 + 0x68));
      if (iVar4 == 2) {
        if (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2 < 2) {
          return;
        }
        iVar4 = *(int *)(param_1 + 0x68);
        if (iVar9 <= iVar8 + 1) {
          *(undefined1 *)(iVar4 + 8) = 0;
          uVar5 = 2;
          goto LAB_0025dd08;
        }
        uVar6 = 2;
      }
      else {
        if (iVar4 != 1) {
          return;
        }
        if (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2 < 2) {
          return;
        }
        if (iVar8 + -1 < 0) {
          *(undefined1 *)(*(int *)(param_1 + 0x68) + 8) = 0;
          *(undefined4 *)(param_1 + 0x74) = 1;
          return;
        }
        iVar4 = *(int *)(param_1 + 0x68);
        uVar6 = 1;
      }
      *(undefined1 *)(iVar4 + 0x19) = uVar6;
    }
    break;
  case 1:
    *(undefined1 *)(*(int *)(param_1 + 0x68) + 0x19) = 1;
    iVar4 = *(int *)(param_1 + 0x6c) + -1;
    *(int *)(param_1 + 0x70) = iVar4;
    if (iVar4 < 0) {
      *(int *)(param_1 + 0x70) = (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2) + -1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x10) = *(undefined4 *)(param_1 + 0x70);
    uVar1 = *(uint *)(param_1 + 0x70);
    if (((int)uVar1 < 0) ||
       (iVar4 = *(int *)(param_1 + 0x80), (uint)(*(int *)(param_1 + 0x84) - iVar4 >> 2) <= uVar1)) {
LAB_0025de04:
      uVar5 = 0;
      goto LAB_0025dd78;
    }
    goto LAB_0025de0c;
  case 2:
    *(undefined1 *)(*(int *)(param_1 + 0x68) + 0x19) = 2;
    iVar4 = *(int *)(param_1 + 0x6c) + 1;
    *(int *)(param_1 + 0x70) = iVar4;
    if (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2 <= iVar4) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x10) = *(undefined4 *)(param_1 + 0x70);
    uVar1 = *(uint *)(param_1 + 0x70);
    if (((int)uVar1 < 0) ||
       (iVar4 = *(int *)(param_1 + 0x80), (uint)(*(int *)(param_1 + 0x84) - iVar4 >> 2) <= uVar1))
    goto LAB_0025de04;
LAB_0025de0c:
    uVar5 = *(undefined4 *)(iVar4 + uVar1 * 4);
LAB_0025dd78:
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    fn_0068993c(param_1,uVar5,*(undefined4 *)(param_1 + 0x78),0,0);
    fn_0068ab44(param_1,0x100094f);
    *(undefined4 *)(param_1 + 0x74) = 3;
    return;
  case 3:
    piVar2 = (int *)fn_006896fc(param_1,*(undefined4 *)(param_1 + 0x7c),param_3,param_4,param_4);
    if (piVar2 != (int *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
      do {
        if (puVar3 == &DAT_00895318) {
          piVar7 = piVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    iVar4 = fn_0022ca98(piVar7);
    if (iVar4 == 0) {
      uVar5 = 4;
LAB_0025dd08:
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      return;
    }
    break;
  case 4:
    *(undefined1 *)(*(int *)(param_1 + 0x68) + 8) = 1;
    fn_003492d0(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    return;
  }
  return;
}



void fn_0025db60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_008951bc) goto LAB_0025dba4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0025dba4:
  *(undefined4 **)(param_1 + 0x68) = puVar2;
  return;
}



undefined4 fn_0025dac8(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  (**(code **)(*param_1 + 0x108))(param_1);
  iVar1 = *(int *)(param_1[0x1a] + 0xc);
  if (iVar1 < 0) {
    iVar1 = param_1[0x1c];
  }
  else {
    param_1[0x1c] = iVar1;
  }
  *(int *)(param_1[0x1a] + 0x10) = iVar1;
  *(int *)(param_1[0x1a] + 0x14) = param_1[0x21] - param_1[0x20] >> 2;
  uVar2 = param_1[0x1c];
  if (((int)uVar2 < 0) || ((uint)(param_1[0x21] - param_1[0x20] >> 2) <= uVar2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1[0x20] + uVar2 * 4);
  }
  param_1[0x1f] = iVar1;
  fn_00689818(param_1,iVar1,0);
  param_1[0x1d] = 3;
  return 1;
}


