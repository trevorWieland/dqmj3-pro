#include "0011c298_0011c298.h"



/* WARNING: Removing unreachable block (ram,0x0011c2fc) */
/* WARNING: Removing unreachable block (ram,0x0011c300) */
/* WARNING: Type propagation algorithm not settling */

undefined4
fn_0011c298(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  wchar16 ***pppwVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  wchar16 ****ppppwVar16;
  undefined2 *puVar17;
  wchar16 **ppwVar18;
  uint uVar19;
  ushort *puVar20;
  int iVar21;
  wchar16 **ppwVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  wchar16 ***pppwVar26;
  undefined1 *puVar27;
  undefined4 ****local_64;
  int local_60;
  int *local_5c;
  undefined4 *local_58;
  wchar16 ***local_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  int *local_44;
  int *local_40;
  int local_34;
  undefined4 *puStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar2 = (undefined4 *)fn_00100fc6(0xc,0);
  piVar3 = (int *)fn_00100fc6(0xc,0);
  puVar2[2] = piVar3;
  *puVar2 = 0;
  puVar2[1] = 1;
  piVar25 = piVar3 + 3;
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  local_5c = piVar25;
  puVar4 = (ushort *)fn_00168a24(auStack_50,local_2c,auStack_4c);
  piVar23 = (int *)0x0;
  puVar6 = puVar2;
  if (piVar25 == local_5c) {
    if (puVar2 == (undefined4 *)0x0) {
      uVar24 = 0x20;
    }
    else {
      uVar5 = puVar2[1];
      uVar24 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (uVar24 < uVar5 + 0x20) {
        uVar24 = uVar5 + 0x20;
      }
    }
    puVar6 = (undefined4 *)fn_00100fc6(0xc,0);
    uVar7 = fn_00100fc6(uVar24 * 0xc,0);
    puVar6[2] = uVar7;
    *puVar6 = puVar2;
    puVar6[1] = uVar24;
    piVar25 = (int *)puVar6[2];
    local_5c = piVar25 + uVar24 * 3;
  }
  piVar9 = piVar25 + 2;
  if (piVar9 != (int *)0x0) {
    iVar8 = *(int *)puVar4;
    if (*(int *)(iVar8 + -0xc) == -1) {
      uVar24 = *(uint *)(iVar8 + -4);
      if (0xfffffff1 < uVar24) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar24,0xfffffff1);
      }
      if (uVar24 == 0) {
        puVar2 = &DAT_008f9ce8;
      }
      else {
        puVar2 = (undefined4 *)fn_00100fc6((uVar24 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[1] = uVar24;
        puVar17 = (undefined2 *)((int)puVar2 + uVar24 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[2] = uVar24;
        if (puVar17 != (undefined2 *)0x0) {
          *puVar17 = 0;
        }
      }
      *piVar9 = (int)(puVar2 + 3);
      fn_00301a9c(puVar2 + 3,*(undefined4 *)puVar4,uVar24 << 1);
    }
    else {
      *piVar9 = iVar8;
      piVar9 = (int *)(iVar8 + -0xc);
      if (piVar9 != &DAT_008f9ce8) {
        *piVar9 = *piVar9 + 1;
      }
    }
  }
  *piVar25 = (int)piVar3;
  piVar25[1] = piVar3[1];
  *(int **)piVar3[1] = piVar25;
  piVar3[1] = (int)piVar25;
  fn_001588d4(auStack_50);
  fn_00168a24(&local_60,local_2c,auStack_48);
  uVar24 = fn_00100b58();
  if (0xfffffff1 < uVar24) {
    fn_002ff628(8,&DAT_008c75f7,&DAT_008c75f7,uVar24,0xfffffff1);
  }
  iVar8 = *(int *)(local_60 + -4);
  if (iVar8 != 0) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (uVar24 != 0) {
        uVar5 = uVar24 & 1;
        if (uVar5 != 0) {
          puVar4 = (ushort *)(iVar8 * 2 + -2);
        }
        uVar19 = 0;
        if (uVar5 != 0) {
          puVar4 = (ushort *)(uint)*(ushort *)(local_60 + (int)puVar4);
          do {
            if (puVar4 == (ushort *)(uint)(ushort)(&DAT_0011c824)[uVar19]) goto LAB_0011c544;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar5);
        }
        if (uVar5 < uVar24) {
          puVar20 = (ushort *)(uint)*(ushort *)(local_60 + iVar8 * 2 + -2);
          do {
            puVar4 = &DAT_0011c824 + uVar5;
            uVar1 = *puVar4;
            if (puVar20 != (ushort *)(uint)uVar1) {
              puVar4 = (ushort *)(uint)(ushort)(&DAT_0011c826)[uVar5];
            }
            if (puVar20 == (ushort *)(uint)uVar1 || puVar20 == puVar4) goto LAB_0011c544;
            uVar5 = uVar5 + 2;
          } while (uVar5 < uVar24);
        }
      }
    }
  }
  iVar8 = -1;
LAB_0011c564:
  uVar24 = iVar8 + 1;
  uVar5 = fn_00100b58();
  if (0xfffffff1 < uVar5) {
    fn_002ff628(8,&DAT_008c75f7,&DAT_008c75f7,uVar5,0xfffffff1);
  }
  iVar21 = *(int *)(local_60 + -4);
  iVar8 = iVar21;
  if (iVar21 != 0) {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (uVar5 != 0) {
        uVar19 = uVar5 & 1;
        uVar15 = 0;
        if (uVar19 != 0) {
          do {
            if (*(short *)(local_60 + iVar8 * 2 + -2) == (&DAT_0011c82c)[uVar15]) goto LAB_0011c62c;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar19);
        }
        if (uVar19 < uVar5) {
          puVar4 = (ushort *)(uint)*(ushort *)(local_60 + iVar8 * 2 + -2);
          do {
            puVar20 = &DAT_0011c82c + uVar19;
            uVar1 = *puVar20;
            if (puVar4 != (ushort *)(uint)uVar1) {
              puVar20 = (ushort *)(uint)(ushort)(&DAT_0011c82e)[uVar19];
            }
            if (puVar4 == (ushort *)(uint)uVar1 || puVar4 == puVar20) goto LAB_0011c62c;
            uVar19 = uVar19 + 2;
          } while (uVar19 < uVar5);
        }
      }
    }
  }
  iVar8 = -1;
LAB_0011c64c:
  if (*(uint *)(local_60 + -4) < uVar24) {
    fn_002ff628(9,&DAT_008c75f9,&DAT_008c75f9,uVar24,iVar21);
  }
  pppwVar10 = (wchar16 ***)(*(int *)(local_60 + -4) - uVar24);
  pppwVar26 = (wchar16 ***)(iVar8 - uVar24);
  if (pppwVar10 <= (wchar16 ***)(iVar8 - uVar24)) {
    pppwVar26 = pppwVar10;
  }
  iVar8 = local_60 + uVar24 * 2;
  if ((wchar16 ***)0xfffffff1 < pppwVar26) {
    fn_002ff628(8,&DAT_008c7612,&DAT_008c7612,pppwVar26,0xfffffff1);
  }
  local_58 = &DAT_008f9cf4;
  if (pppwVar26 != (wchar16 ***)0x0) {
    ppppwVar16 = &local_54;
    if ((wchar16 ***)0x20 < pppwVar26) {
      ppppwVar16 = (wchar16 ****)&local_64;
    }
    local_64 = (undefined4 ****)pppwVar26;
    local_54 = (wchar16 ***)0x20;
    pppwVar10 = *ppppwVar16;
    if ((wchar16 ***)0xfffffff1 < pppwVar10) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,pppwVar10,0xfffffff1);
    }
    if (pppwVar10 < pppwVar26) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,pppwVar26,pppwVar10);
    }
    if (pppwVar10 == (wchar16 ***)0x0) {
      local_58 = &DAT_008f9ce8;
    }
    else {
      local_58 = (undefined4 *)fn_00100fc6((int)(pppwVar10 + 2) * 2,0);
      if (local_58 != (undefined4 *)0x0) {
        *local_58 = 0;
        local_58[1] = 0;
        local_58[2] = 0;
      }
      local_58[2] = pppwVar26;
      *local_58 = 0;
      local_58[1] = pppwVar10;
      puVar17 = (undefined2 *)((int)local_58 + (int)pppwVar26 * 2 + 0xc);
      if (puVar17 != (undefined2 *)0x0) {
        *puVar17 = 0;
      }
    }
    local_58 = local_58 + 3;
  }
  if (iVar8 != 0) {
    fn_00301a9c();
  }
  iVar8 = fn_00144a40(DAT_008977f8,local_58);
  if (iVar8 != 0) {
    local_44 = *(int **)(iVar8 + 0x10);
    piVar9 = (int *)*local_44;
    puVar2 = puVar6;
    piVar25 = piVar25 + 3;
    if (piVar9 != local_44) {
      do {
        uVar7 = DAT_008f9cf0;
        local_64 = (undefined4 ****)0x11c840;
        local_54 = (wchar16 ***)&DAT_008f9cf4;
        uVar11 = fn_00100b58();
        fn_00177c88(&local_54,uVar7,0,local_64,uVar11,0,uVar11);
        ppwVar22 = local_54[-1];
        iVar8 = *(int *)(piVar9[2] + -4);
        ppwVar18 = (wchar16 **)((int)ppwVar22 + iVar8);
        if ((local_54[-2] < ppwVar18) || (1 < (int)local_54[-3] + 1U)) {
          uVar7 = 0;
          local_64 = (undefined4 ****)&local_54;
          if ((wchar16 **)(-iVar8 - 0xfU) < ppwVar22) {
            fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,ppwVar22,(wchar16 **)(-iVar8 - 0xfU));
          }
          fn_00177c88(local_64,local_54[-1],0,piVar9[2],*(undefined4 *)(piVar9[2] + -4),uVar7,iVar8
                      );
        }
        else {
          fn_00301a9c((int)local_54 + (int)ppwVar22 * 2,piVar9[2],(iVar8 + 1) * 2);
          local_54[-1] = ppwVar18;
        }
        local_64 = (undefined4 ****)0x11ccdc;
        ppwVar18 = local_54[-1];
        uVar7 = fn_00100b58(L".arc");
        fn_00177c88(&local_54,ppwVar18,0,local_64,uVar7,0,uVar7);
        puVar6 = puVar2;
        if (piVar23 == (int *)0x0) {
          if (piVar25 == local_5c) {
            if (puVar2 == (undefined4 *)0x0) {
              uVar24 = 0x20;
            }
            else {
              uVar5 = puVar2[1];
              uVar24 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
              if (uVar24 < uVar5 + 0x20) {
                uVar24 = uVar5 + 0x20;
              }
            }
            puVar6 = (undefined4 *)fn_00100fc6(0xc,0);
            piVar25 = (int *)fn_00100fc6(uVar24 * 0xc,0);
            puVar6[2] = piVar25;
            *puVar6 = puVar2;
            puVar6[1] = uVar24;
            local_5c = piVar25 + uVar24 * 3;
          }
          piVar13 = piVar25 + 3;
        }
        else {
          piVar13 = piVar25;
          piVar25 = piVar23;
          piVar23 = (int *)*piVar23;
        }
        piVar12 = piVar25 + 2;
        if (piVar12 != (int *)0x0) {
          local_40 = piVar12;
          if (local_54[-3] == (wchar16 **)0xffffffff) {
            pppwVar10 = (wchar16 ***)local_54[-1];
            pppwVar26 = pppwVar10;
            local_64 = (undefined4 ****)pppwVar10;
            if ((wchar16 ***)0xfffffff1 < pppwVar10) {
              fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,pppwVar10,0xfffffff1);
            }
            if (pppwVar10 == (wchar16 ***)0x0) {
              puVar2 = &DAT_008f9ce8;
            }
            else {
              puVar2 = (undefined4 *)fn_00100fc6((int)(pppwVar10 + 2) * 2,0);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
              }
              *puVar2 = 0;
              puVar2[1] = pppwVar10;
              puVar2[2] = pppwVar26;
              puVar17 = (undefined2 *)((int)puVar2 + (int)pppwVar26 * 2 + 0xc);
              if (puVar17 != (undefined2 *)0x0) {
                *puVar17 = 0;
              }
            }
            *local_40 = (int)(puVar2 + 3);
            fn_00301a9c(puVar2 + 3,local_54,(int)local_64 << 1);
          }
          else {
            *piVar12 = (int)local_54;
            pppwVar26 = local_54 + -3;
            if (pppwVar26 != (wchar16 ***)&DAT_008f9ce8) {
              *pppwVar26 = (wchar16 **)((int)*pppwVar26 + 1);
            }
          }
        }
        *piVar25 = (int)piVar3;
        piVar25[1] = piVar3[1];
        *(int **)piVar3[1] = piVar25;
        piVar3[1] = (int)piVar25;
        if (local_54 != (wchar16 ***)&DAT_008f9cf4) {
          pppwVar26 = local_54 + -3;
          ppwVar18 = *pppwVar26;
          if ((ppwVar18 == (wchar16 **)0xffffffff) ||
             ((pppwVar26 != (wchar16 ***)&DAT_008f9ce8 &&
              (*pppwVar26 = (wchar16 **)((int)ppwVar18 + -1), ppwVar18 == (wchar16 **)0x0)))) {
            fn_001008c4(local_54 + -3,local_54[-2] + 2,0);
          }
        }
        piVar9 = (int *)*piVar9;
        puVar2 = puVar6;
        piVar25 = piVar13;
      } while (piVar9 != local_44);
    }
  }
  fn_001588d4(&local_58);
  fn_001588d4(&local_60);
  piVar25 = (int *)*piVar3;
  if (piVar25 != piVar3) {
    puVar27 = &DAT_008f9d04;
    do {
      uVar7 = fn_001287b4();
      iVar8 = fn_0012e958(*(undefined4 *)(local_34 + 100),piVar25[2],uVar7,param_6);
      for (piVar9 = (int *)param_2[5]; piVar9 != param_2 + 5; piVar9 = (int *)*piVar9) {
        if (piVar9[-5] == iVar8) {
          piVar13 = piVar9 + -5;
          if (piVar13 != (int *)0x0) {
            piVar9[-4] = piVar9[-4] + 1;
            goto LAB_0011cc5c;
          }
          break;
        }
      }
      piVar13 = (int *)fn_00145b00(0x1c,&DAT_00812c8c);
      if (piVar13 != (int *)0x0) {
        iVar21 = piVar25[2];
        piVar13[2] = (int)&DAT_008f9cf4;
        piVar13[3] = (int)puVar27;
        piVar13[5] = 0;
        piVar13[1] = 1;
        piVar13[6] = 0;
        *piVar13 = iVar8;
        uVar7 = local_28;
        fn_00147974(piVar13 + 2,iVar21);
        fn_001008cc(piVar13 + 3,uVar7);
        piVar13[4] = 0;
      }
      fn_0017d948(param_2 + 4,param_2 + 5,piVar13 + 5);
LAB_0011cc5c:
      if ((param_5 != 0) && (piVar13[4] == 0)) {
        iVar14 = fn_0012ead8(*(undefined4 *)(local_34 + 100),iVar8);
        iVar21 = local_34;
        if (iVar14 == 0) {
          uVar7 = *param_2;
          puVar2 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
          if (puVar2 != (undefined4 *)0x0) {
            puVar2[2] = 0;
            puVar2[3] = 0;
          }
          *puVar2 = uVar7;
          puVar2[1] = iVar8;
          fn_0017d948(iVar21 + 0x4c,iVar21 + 0x50,puVar2 + 2);
        }
        else {
          iVar8 = fn_0012ead8(*(undefined4 *)(local_34 + 100),*piVar13);
          if ((iVar8 != 0) && (piVar13[4] == 0)) {
            puVar2 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
            iVar8 = 0;
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
              iVar8 = fn_0013f7ec(puVar2 + 2);
              iVar8 = iVar8 + -8;
            }
            piVar13[4] = iVar8;
            iVar8 = piVar13[3];
            uVar7 = fn_0012ea14(*(undefined4 *)(local_34 + 100),*piVar13);
            fn_0013f814(piVar13[4],uVar7,iVar8);
            fn_0017d938(param_2[3],piVar13[4]);
          }
        }
      }
      iVar8 = fn_0013a6b0(*(undefined4 *)(local_34 + 0x6c),piVar25[2]);
      if (iVar8 != -1) {
        piVar9 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
        if (piVar9 != (int *)0x0) {
          piVar9[1] = 0;
          *piVar9 = iVar8;
          piVar9[2] = 0;
        }
        fn_0017d948(param_2 + 7,param_2 + 8,piVar9 + 1);
      }
      piVar25 = (int *)*piVar25;
    } while (piVar25 != piVar3);
  }
  uVar7 = *param_2;
  if (piVar3 != (int *)0x0) {
    piVar25 = (int *)*piVar3;
    while (piVar9 = piVar25, piVar9 != piVar3) {
      piVar25 = piVar3;
      if (piVar9 != piVar3) {
        piVar25 = (int *)*piVar9;
        *(int **)piVar9[1] = piVar25;
        *(int *)(*piVar9 + 4) = piVar9[1];
        if ((undefined4 *)piVar9[2] != &DAT_008f9cf4) {
          piVar13 = (undefined4 *)piVar9[2] + -3;
          iVar8 = *piVar13;
          if ((iVar8 == -1) || ((piVar13 != &DAT_008f9ce8 && (*piVar13 = iVar8 + -1, iVar8 == 0))))
          {
            fn_001008c4(piVar9[2] + -0xc,*(int *)(piVar9[2] + -8) + 8,0);
          }
        }
        *piVar9 = (int)piVar23;
        piVar23 = piVar9;
      }
    }
    *piVar3 = (int)piVar23;
    while (puVar6 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar6;
      fn_001008c4(puVar6[2],puVar6[1],0);
      fn_001008c4(puVar6,1,0);
      puVar6 = puVar2;
    }
  }
  return uVar7;
LAB_0011c544:
  iVar8 = iVar8 + -1;
  goto LAB_0011c564;
LAB_0011c62c:
  iVar8 = iVar8 + -1;
  goto LAB_0011c64c;
}


