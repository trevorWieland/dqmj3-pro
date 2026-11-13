#include "00679590_006799e4.h"



void fn_006799e4(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 3;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



undefined4 * fn_00679904(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &DAT_0085a30c;
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x19];
  if (uVar3 != uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    param_1[0x1a] = uVar2 - (uVar2 - uVar3 & 0xfffffffc);
  }
  uVar3 = param_1[0x19];
  uVar2 = uVar3;
  if ((uint)param_1[0x1a] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1a]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x1b] - uVar3) >> 2,0);
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  return param_1;
}



undefined4 * fn_00679850(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_00859b90;
  fn_00129688(param_1);
  fn_002fec40(param_1 + 1,(char *)&DAT_006798c8);
  *param_1 = &DAT_00859be4;
  iVar1 = fn_00119b40(param_1 + 0x13);
  puVar2 = (undefined4 *)(iVar1 + -0x4c);
  fn_00119b60(puVar2);
  *puVar2 = &DAT_00859ab8;
  *puVar2 = &DAT_0085a30c;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return puVar2;
}



undefined4 fn_00679828(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_20;
  uint local_1c [2];
  
  piVar3 = (int *)fn_0066eb80(DAT_00898840,3);
  puVar5 = (uint *)(param_1 + 100);
  puVar12 = (uint *)(piVar3 + 0x19e);
  if (puVar5 != puVar12) {
    puVar1 = *(undefined4 **)(param_1 + 0x68);
    puVar10 = (undefined4 *)*puVar5;
    puVar6 = (undefined4 *)*puVar12;
    uVar14 = (int)puVar1 - (int)puVar10;
    uVar13 = (int)uVar14 >> 2;
    if ((uint)(piVar3[0x1a0] - (int)puVar6 >> 2) < uVar13) {
      local_20 = uVar13;
      uVar14 = piVar3[0x19f] - (int)puVar6 >> 2;
      local_1c[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_1c[0] < uVar14 + 0x20) {
        local_1c[0] = uVar14 + 0x20;
      }
      puVar7 = local_1c;
      if (local_1c[0] <= uVar13) {
        puVar7 = &local_20;
      }
      uVar13 = *puVar7;
      puVar1 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
      puVar8 = *(undefined4 **)(param_1 + 0x68);
      puVar6 = puVar1;
      for (puVar10 = (undefined4 *)*puVar5; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar10;
        }
        puVar6 = puVar6 + 1;
      }
      uVar11 = *puVar12;
      uVar14 = uVar11;
      if ((uint)piVar3[0x19f] <= uVar11) {
        for (; uVar14 != piVar3[0x19f]; uVar14 = uVar14 + 4) {
        }
      }
      fn_001008c4(uVar11,(int)(piVar3[0x1a0] - uVar11) >> 2,0);
      *puVar12 = (uint)puVar1;
      piVar3[0x19f] = (int)(puVar1 + ((int)(*(int *)(param_1 + 0x68) - *puVar5) >> 2));
      piVar3[0x1a0] = (int)(puVar1 + uVar13);
    }
    else {
      uVar11 = piVar3[0x19f] - (int)puVar6 >> 2;
      if (uVar11 < uVar13) {
        puVar1 = puVar10 + uVar11;
        if (puVar10 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar10) {
            puVar8 = puVar10 + -1;
            puVar9 = puVar6 + -1;
            if (((int)puVar1 - (int)puVar10) * 0x20000000 < 0) {
              *puVar6 = *puVar10;
              puVar8 = puVar10;
              puVar9 = puVar6;
            }
            for (iVar2 = (int)puVar1 - (int)puVar10 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar9[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar9 = puVar9 + 2;
              *puVar9 = *puVar8;
            }
          }
        }
        else {
          for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
            *puVar6 = *puVar10;
            puVar6 = puVar6 + 1;
          }
        }
        piVar3[0x19f] = *puVar12 + ((int)(*(int *)(param_1 + 0x68) - *puVar5) >> 2) * 4;
        puVar1 = *(undefined4 **)(param_1 + 0x68);
        puVar6 = (undefined4 *)(*puVar12 + uVar11 * 4);
        for (puVar10 = (undefined4 *)(*puVar5 + uVar11 * 4); puVar10 != puVar1;
            puVar10 = puVar10 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar10;
          }
          puVar6 = puVar6 + 1;
        }
      }
      else {
        if (puVar10 < puVar1) {
          if (0 < (int)uVar14) {
            puVar1 = puVar6 + -1;
            puVar8 = puVar10 + -1;
            if ((int)(uVar14 * 0x20000000) < 0) {
              *puVar6 = *puVar10;
              puVar1 = puVar6;
              puVar8 = puVar10;
            }
            for (iVar2 = (int)uVar14 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar1[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar1 = puVar1 + 2;
              *puVar1 = *puVar8;
            }
            puVar6 = (undefined4 *)((int)puVar6 + (uVar14 & 0xfffffffc));
          }
        }
        else {
          for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
            *puVar6 = *puVar10;
            puVar6 = puVar6 + 1;
          }
        }
        if ((undefined4 *)piVar3[0x19f] < puVar6) {
          do {
            puVar6 = puVar6 + 1;
          } while (puVar6 != (undefined4 *)piVar3[0x19f]);
        }
        iVar2 = *puVar12 + ((int)(*(int *)(param_1 + 0x68) - *puVar5) >> 2) * 4;
        piVar3[0x19f] = iVar2;
        piVar3[0x1a0] = iVar2;
      }
    }
  }
  piVar3[0x1a1] = *(int *)(param_1 + 0x70);
  piVar3[0x1d] = 0;
  piVar3[0x1e] = 0;
  *(undefined1 *)(piVar3 + 0x1f) = 0;
  if ((*(byte *)(piVar3 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar3 + 0x30))(piVar3);
    return 1;
  }
  fn_00673ce8(piVar3,0x14);
  piVar3[0x1d] = 0;
  piVar3[0x1e] = 0;
  *(undefined1 *)(piVar3 + 0x1f) = 0;
  if ((*(byte *)(piVar3 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar3,2);
    piVar3[0x1d] = 0;
    piVar3[0x1e] = 0;
    *(undefined1 *)(piVar3 + 0x1f) = 0;
    uVar4 = 0;
    if ((*(byte *)(piVar3 + 0x13) & 1) == 0) {
      (**(code **)(*piVar3 + 0x30))(piVar3,1);
      uVar4 = 1;
    }
  }
  else {
    (**(code **)(*piVar3 + 0x30))(piVar3,2);
    uVar4 = 1;
  }
  return uVar4;
}



void fn_00679590(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint local_20;
  uint local_1c [2];
  
  puVar11 = (uint *)(param_1 + 100);
  if (param_2 != puVar11) {
    puVar4 = (undefined4 *)param_2[1];
    puVar6 = (undefined4 *)*param_2;
    puVar1 = (undefined4 *)*puVar11;
    uVar9 = (int)puVar4 - (int)puVar6;
    local_20 = (int)uVar9 >> 2;
    if ((uint)(*(int *)(param_1 + 0x6c) - (int)puVar1 >> 2) < local_20) {
      uVar9 = *(int *)(param_1 + 0x68) - (int)puVar1 >> 2;
      uVar7 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      local_1c[0] = uVar9 + 0x20;
      if (uVar9 + 0x20 <= uVar7) {
        local_1c[0] = uVar7;
      }
      puVar5 = &local_20;
      if (local_20 < local_1c[0]) {
        puVar5 = local_1c;
      }
      uVar9 = *puVar5;
      puVar4 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
      puVar8 = (undefined4 *)param_2[1];
      puVar1 = puVar4;
      for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar8; puVar6 = puVar6 + 1) {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar6;
        }
        puVar1 = puVar1 + 1;
      }
      uVar2 = *puVar11;
      uVar7 = uVar2;
      if (*(uint *)(param_1 + 0x68) < uVar2) {
        do {
          uVar7 = uVar7 + 4;
        } while (uVar7 != *(uint *)(param_1 + 0x68));
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x6c) - uVar2) >> 2,0);
      *puVar11 = (uint)puVar4;
      *(uint *)(param_1 + 0x68) = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar4;
      *(undefined4 **)(param_1 + 0x6c) = puVar4 + uVar9;
    }
    else {
      uVar7 = *(int *)(param_1 + 0x68) - (int)puVar1 >> 2;
      if (uVar7 < local_20) {
        puVar4 = puVar6 + uVar7;
        if (puVar6 < puVar4) {
          if (0 < (int)puVar4 - (int)puVar6) {
            puVar8 = puVar1 + -1;
            puVar10 = puVar6 + -1;
            if (((int)puVar4 - (int)puVar6) * 0x20000000 < 0) {
              *puVar1 = *puVar6;
              puVar8 = puVar1;
              puVar10 = puVar6;
            }
            for (iVar3 = (int)puVar4 - (int)puVar6 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar8[1] = puVar10[1];
              puVar10 = puVar10 + 2;
              puVar8 = puVar8 + 2;
              *puVar8 = *puVar10;
            }
          }
        }
        else {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar1 = *puVar6;
            puVar1 = puVar1 + 1;
          }
        }
        *(uint *)(param_1 + 0x68) = (param_2[1] - *param_2 & 0xfffffffc) + *puVar11;
        puVar4 = (undefined4 *)param_2[1];
        puVar1 = (undefined4 *)(*puVar11 + uVar7 * 4);
        for (puVar6 = (undefined4 *)(*param_2 + uVar7 * 4); puVar6 != puVar4; puVar6 = puVar6 + 1) {
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *puVar6;
          }
          puVar1 = puVar1 + 1;
        }
      }
      else {
        if (puVar6 < puVar4) {
          if (0 < (int)uVar9) {
            puVar4 = puVar1 + -1;
            puVar8 = puVar6 + -1;
            if ((int)(uVar9 * 0x20000000) < 0) {
              *puVar1 = *puVar6;
              puVar4 = puVar1;
              puVar8 = puVar6;
            }
            for (iVar3 = (int)uVar9 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar4[1] = puVar8[1];
              puVar8 = puVar8 + 2;
              puVar4 = puVar4 + 2;
              *puVar4 = *puVar8;
            }
            puVar1 = (undefined4 *)((int)puVar1 + (uVar9 & 0xfffffffc));
          }
        }
        else {
          for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
            *puVar1 = *puVar6;
            puVar1 = puVar1 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 0x68) < puVar1) {
          do {
            puVar1 = puVar1 + 1;
          } while (puVar1 != *(undefined4 **)(param_1 + 0x68));
        }
        iVar3 = (param_2[1] - *param_2 & 0xfffffffc) + *puVar11;
        *(int *)(param_1 + 0x68) = iVar3;
        *(int *)(param_1 + 0x6c) = iVar3;
      }
    }
  }
  *(uint *)(param_1 + 0x70) = param_2[3];
  return;
}


