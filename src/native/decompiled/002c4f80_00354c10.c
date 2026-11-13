#include "002c4f80_00354c10.h"



undefined4 fn_00354c10(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x2c);
  iVar1 = fn_0031390c(uVar8,0xc);
  uVar4 = 0;
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x74) == -1) {
      piVar9 = (int *)0x0;
      iVar1 = fn_0016dcdc(uVar8,*(undefined4 *)(param_1 + 0x70),0x14,1,1,0);
      *(int *)(param_1 + 0x74) = iVar1;
      if (iVar1 == -1) {
        return 0;
      }
      iVar1 = fn_00178f9c(uVar8,iVar1);
      *(int *)(param_1 + 0x68) = iVar1;
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x10);
      piVar2 = (int *)fn_001828f0(iVar1,(char *)&DAT_00355030);
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
        do {
          if (puVar3 == &DAT_0089a930) goto LAB_00354ccc;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      piVar2 = (int *)0x0;
LAB_00354ccc:
      *(int **)(param_1 + 0x108) = piVar2;
      *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe;
      uVar4 = fn_00172c98(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_00355044);
      iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)fn_00307738(iVar1,*(undefined4 *)(param_1 + 4),uVar4,1,
                                     *(undefined4 *)(param_1 + 0x48),param_1 + 0x90,0,0,0);
      }
      piVar7 = *(int **)(param_1 + 0xa8);
      if (piVar7 != piVar2) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        *(int **)(param_1 + 0xa8) = piVar2;
      }
      (**(code **)(**(int **)(param_1 + 0xa8) + 0x10))();
      uVar4 = fn_00172c98(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_00355058);
      iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)fn_00307738(iVar1,*(undefined4 *)(param_1 + 4),uVar4,1,
                                     *(undefined4 *)(param_1 + 0x48),param_1 + 0x9c,0,0,0);
      }
      piVar7 = *(int **)(param_1 + 0xac);
      if (piVar7 != piVar2) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        *(int **)(param_1 + 0xac) = piVar2;
      }
      (**(code **)(**(int **)(param_1 + 0xac) + 0x10))();
      iVar1 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x9c) + iVar1 * 4) != 0) {
          iVar5 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))
                            (*(int **)(param_1 + 0xac),0,iVar1);
          iVar6 = fn_00174828(DAT_008977e4);
          *(bool *)(iVar5 + 0x33) =
               *(char *)(iVar6 + (char)((char)iVar1 + '\x18') * 0x418 + -0x4019) == '\0';
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 4);
      fn_003571ac(param_1);
      fn_0035723c(param_1);
      fn_0079e1d4(param_1 + 0x78,param_1 + 0x90);
      fn_0079e1d4(param_1 + 0x84,param_1 + 0x9c);
      uVar4 = fn_00172c98(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0035506c);
      iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)fn_002b44c0(iVar1,*(undefined4 *)(param_1 + 4),uVar4,0,
                                     *(undefined4 *)(param_1 + 0x48));
      }
      piVar7 = *(int **)(param_1 + 0xb0);
      if (piVar7 != piVar2) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        *(int **)(param_1 + 0xb0) = piVar2;
      }
      (**(code **)(**(int **)(param_1 + 0xb0) + 0x10))();
      fn_002b427c(*(undefined4 *)(param_1 + 0xb0),0);
      fn_002b4348(*(undefined4 *)(param_1 + 0xb0),0);
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x3d) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x43) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x45) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x2f) = 1;
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x10);
      iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)fn_0025e920(iVar1,*(undefined4 *)(param_1 + 4),uVar4);
      }
      piVar7 = *(int **)(param_1 + 0xb4);
      if (piVar7 != piVar2) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        *(int **)(param_1 + 0xb4) = piVar2;
      }
      (**(code **)(**(int **)(param_1 + 0xb4) + 0x10))
                (*(int **)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0x48));
      iVar1 = fn_00145b00(0xe8,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar1 != 0) {
        piVar2 = (int *)fn_0025ecd0(iVar1,*(undefined4 *)(param_1 + 100),0);
      }
      piVar7 = *(int **)(param_1 + 0xbc);
      if (piVar7 != piVar2) {
        if (piVar7 != (int *)0x0) {
          (**(code **)(*piVar7 + 4))(piVar7);
        }
        *(int **)(param_1 + 0xbc) = piVar2;
      }
      *(int *)(*(int *)(param_1 + 0xbc) + 8) = param_1;
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x24))(*(int **)(param_1 + 0xbc),2,5);
      *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x45) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x44) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x10) = 0x100094e;
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),0,0);
      *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xd4) = 1;
      fn_00355fd8(param_1);
      *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x48) = 1;
      iVar1 = fn_00154ac8(0x3c);
      if (iVar1 == 0) {
        iVar1 = fn_0068967c(uVar4,(char *)&DAT_0085d7e0);
        *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
      }
      piVar2 = (int *)fn_00172c98(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0085d7f0);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_003551f8,1);
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
        do {
          if (puVar3 == &DAT_0089a928) {
            piVar9 = piVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      iVar1 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_0035520c,1);
      iVar5 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_0035521c,1);
      iVar6 = fn_00172c98(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0085d7b8);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
      *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar5 + 0x40);
      *(undefined4 *)(iVar5 + 0x1c) = 0xc3050000;
      *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
      *(undefined1 *)(param_1 + 0x10c) = 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 fn_002c4f80(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  bool bVar15;
  bool bVar16;
  uint local_6c;
  uint local_68 [3];
  wchar16 *local_5c;
  char *local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_48;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 local_30;
  undefined4 local_28;
  
  pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                *(undefined4 *)(DAT_008977e0 + 0xa8));
  cVar1 = *pcVar3;
  if (cVar1 == 'A') {
    uVar2 = 1;
  }
  else if (cVar1 == 'H') {
    uVar2 = 0;
  }
  else if (cVar1 == 'O') {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0xb9) = uVar2;
  puVar14 = *(undefined4 **)(param_1 + 0x18);
  if (puVar14 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar14)(puVar14);
    do {
      if (puVar4 == &DAT_00894eec) goto LAB_002c5008;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_002c5008:
  *(undefined4 **)(param_1 + 0xb0) = puVar14;
  fn_002c4850(param_1);
  fn_002c330c(local_68 + 3);
  local_5c = L"rom:/data/Layout/common/common_0100.arc";
  local_58 = "common_0100.bflyt";
  local_48 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
  local_54 = 10;
  local_50 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
  puVar14 = (undefined4 *)fn_0023070c((char *)&DAT_002c53f4);
  uVar5 = fn_00100b58();
  puVar4 = &DAT_008f9ce8;
  if (uVar5 == 0) {
    piVar7 = local_40 + -3;
    iVar11 = *piVar7;
    if (iVar11 == 0) {
      local_40[-1] = 0;
      puVar14 = local_40;
      goto LAB_002c5270;
    }
    if ((local_40 != &DAT_008f9cf4) &&
       ((iVar11 == -1 || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
    local_40 = &DAT_008f9cf4;
  }
  else {
    uVar13 = local_40[-3] + 1;
    bVar16 = local_40[-3] != -1;
    bVar15 = uVar13 == 1;
    if (uVar13 < 2) {
      bVar16 = (uint)local_40[-2] <= uVar5;
      bVar15 = uVar5 == local_40[-2];
    }
    if (bVar16 && !bVar15) {
LAB_002c50c4:
      uVar13 = local_40[-1];
      local_6c = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_6c < uVar13 + 0x80) {
        local_6c = uVar13 + 0x80;
      }
      local_68[0] = uVar5;
      puVar6 = &local_6c;
      if (local_6c < uVar5) {
        puVar6 = local_68;
      }
      uVar13 = *puVar6;
      if (0xfffffff1 < uVar13) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar13,0xfffffff1);
      }
      if (uVar13 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,uVar13);
      }
      if (uVar13 != 0) {
        puVar4 = (undefined4 *)fn_00100fc6((uVar13 + 8) * 2,0);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        puVar4[2] = uVar5;
        puVar10 = (undefined2 *)((int)puVar4 + uVar5 * 2 + 0xc);
        *puVar4 = 0;
        puVar4[1] = uVar13;
        if (puVar10 != (undefined2 *)0x0) {
          *puVar10 = 0;
        }
      }
      fn_00301a9c(puVar4 + 3,puVar14,uVar5 << 1);
      if (local_40 != &DAT_008f9cf4) {
        piVar7 = local_40 + -3;
        iVar11 = *piVar7;
        if ((iVar11 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))) {
          fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
        }
      }
      local_40 = puVar4 + 3;
    }
    else {
      if (puVar14 != (undefined4 *)0x0) {
        bVar15 = puVar14 <= local_40;
        if (local_40 <= puVar14) {
          bVar15 = (undefined4 *)((int)local_40 + local_40[-1] * 2) <= puVar14;
        }
        if (!bVar15) goto LAB_002c50c4;
      }
      fn_001006ac(local_40,puVar14,uVar5);
      local_40[-1] = uVar5;
      puVar14 = (undefined4 *)((int)local_40 + uVar5 * 2);
LAB_002c5270:
      *(undefined2 *)puVar14 = 0;
    }
  }
  local_30 = 10 < local_48;
  local_28 = 0x8c000000;
  fn_00163988(DAT_00897810,&local_28,1);
  (**(code **)(*DAT_00897810 + 8))(DAT_00897810,1);
  iVar11 = fn_00154ac8(0x30);
  if (iVar11 == 0) {
    iVar11 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
    if (iVar11 < 2) goto LAB_002c52f8;
  }
  else {
    iVar11 = fn_006c5138(*(undefined4 *)(param_1 + 0xb0));
    if (iVar11 < 3) {
LAB_002c52f8:
      iVar11 = 1;
      goto LAB_002c5304;
    }
  }
  iVar11 = 0;
LAB_002c5304:
  piVar7 = (int *)fn_006f72e0(DAT_008977e0);
  (**(code **)(*piVar7 + 0x8c))(piVar7,1,iVar11);
  fn_002c29a0(param_1,local_68 + 3);
  uVar8 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar8 = fn_00172c98(uVar8,(char *)&DAT_002c5408);
  iVar9 = fn_00145b00(0x88,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar9 != 0) {
    piVar7 = (int *)fn_0031fee0(iVar9,*(undefined4 *)(param_1 + 4),uVar8,1,
                                 *(undefined4 *)(param_1 + 0x48));
  }
  piVar12 = *(int **)(param_1 + 0x74);
  if (piVar12 != piVar7) {
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 4))(piVar12);
    }
    *(int **)(param_1 + 0x74) = piVar7;
  }
  (**(code **)(**(int **)(param_1 + 0x74) + 0x10))();
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),1,0,0,0xffffffff);
  iVar9 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar9 + 0x7f) = 10;
  fn_0031ef00(iVar9,0,0);
  if (iVar11 != 0) {
    uVar8 = fn_0023070c((char *)&DAT_002c55b0);
    local_6c = 1;
    local_68[0] = 0;
    local_68[2] = 1;
    local_68[1] = 0;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar8,1,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0xb8) = 1;
    fn_0025e31c(*(undefined4 *)(param_1 + 0x98),0);
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar7 = local_34 + -3;
    iVar11 = *piVar7;
    if ((iVar11 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar7 = local_38 + -3;
    iVar11 = *piVar7;
    if ((iVar11 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar7 = local_3c + -3;
    iVar11 = *piVar7;
    if ((iVar11 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar7 = local_40 + -3;
    iVar11 = *piVar7;
    if ((iVar11 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar11 + -1, iVar11 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  return 1;
}


