#include "0010edfc_0010f2e0.h"



undefined4 fn_0010f2e0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  char *local_44;
  char *local_40;
  undefined1 local_3c;
  uint local_38;
  int iStack_34;
  char *local_30;
  char *local_2c [2];
  
  if (DAT_00890f34 == 0) {
    uVar1 = fn_00118290();
    DAT_00890f34 = fn_0011c184(L"patch:/data/Effect/EffectTbl.bin",uVar1,4,5);
    if (DAT_00890f34 != 0) {
      piVar2 = (int *)fn_00145b00(0x1c,&DAT_00812c8c);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = 0;
        piVar2[4] = 0;
        piVar2[5] = 0;
        *(undefined1 *)(piVar2 + 6) = 0;
        *(char *)((int)piVar2 + 0x19) = (char)piVar2;
        piVar2[3] = 0;
        piVar2[2] = 0;
        piVar2[1] = 0;
        piVar3 = (int *)fn_00100fc6(0xc,0);
        iVar4 = fn_00100fc6(0x300,0);
        piVar3[2] = iVar4;
        *piVar3 = *piVar2;
        piVar3[1] = 0x20;
        *piVar2 = (int)piVar3;
        puVar5 = (undefined1 *)piVar3[2];
        piVar2[2] = (int)puVar5;
        piVar2[3] = (int)(puVar5 + 0x300);
        piVar2[2] = (int)(puVar5 + 0x18);
        *(undefined4 *)(puVar5 + 8) = 0;
        *(undefined4 *)(puVar5 + 0xc) = 0;
        *puVar5 = 0;
        piVar2[4] = (int)puVar5;
        *(undefined4 *)(puVar5 + 4) = 0;
        *(int *)(piVar2[4] + 8) = piVar2[4];
        *(int *)(piVar2[4] + 0xc) = piVar2[4];
      }
      DAT_00890f38 = piVar2;
      iVar4 = fn_00145ac0(DAT_00890f34);
      iVar6 = fn_00145ac0(DAT_00890f34);
      iVar11 = 0;
      if (0 < *(int *)(iVar4 + 4) + *(int *)(iVar4 + 8)) {
        uVar12 = 1;
        do {
          local_38 = *(uint *)(iVar6 + 0xc + iVar11 * 4);
          bVar13 = true;
          pcVar10 = (char *)DAT_00890f38[4];
          pcVar7 = pcVar10;
          pcVar8 = *(char **)(pcVar10 + 4);
          while (pcVar8 != (char *)0x0) {
            bVar13 = local_38 < *(uint *)(pcVar8 + 0x10);
            if (bVar13) {
              pcVar9 = *(char **)(pcVar8 + 8);
            }
            else {
              pcVar9 = *(char **)(pcVar8 + 0xc);
            }
            pcVar7 = pcVar8;
            pcVar8 = pcVar9;
          }
          iStack_34 = iVar11;
          if ((char)DAT_00890f38[6] == '\0') {
            if (bVar13) {
              if (pcVar7 == *(char **)(pcVar10 + 8)) {
                fn_0012cb78(&local_30);
                local_40 = local_30;
                local_3c = uVar12;
                goto LAB_0010f544;
              }
              if ((*pcVar7 == '\0') && (*(char **)(*(int *)(pcVar7 + 4) + 4) == pcVar7)) {
                pcVar7 = *(char **)(pcVar7 + 0xc);
              }
              else {
                pcVar8 = *(char **)(pcVar7 + 8);
                if (*(char **)(pcVar7 + 8) == (char *)0x0) {
                  pcVar8 = pcVar7;
                  pcVar7 = *(char **)(pcVar7 + 4);
                  while (pcVar8 == *(char **)(pcVar7 + 8)) {
                    pcVar8 = pcVar7;
                    pcVar7 = *(char **)(pcVar7 + 4);
                  }
                }
                else {
                  do {
                    pcVar7 = pcVar8;
                    pcVar8 = *(char **)(pcVar7 + 0xc);
                  } while (*(char **)(pcVar7 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(uint *)(pcVar7 + 0x10) < local_38) {
              fn_0012cb78(local_2c);
              local_40 = local_2c[0];
              local_3c = uVar12;
            }
            else {
              local_3c = 0;
              local_40 = pcVar7;
            }
          }
          else {
            fn_0012cb78(&local_44);
            local_40 = local_44;
            local_3c = uVar12;
          }
LAB_0010f544:
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(iVar4 + 4) + *(int *)(iVar4 + 8));
      }
      return 1;
    }
  }
  return 0;
}



undefined4 fn_0010f1e4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_008988a0 == 0) {
    uVar1 = fn_00118290();
    DAT_0089889c = fn_0011c184(L"rom:/data/Script/SoundTbl.bin",uVar1,4,5);
    if ((DAT_0089889c != 0) && (iVar2 = fn_00145ac0(), iVar2 != 0)) {
      iVar3 = fn_00145b00(8,&DAT_00812c8c);
      iVar2 = 0;
      if (iVar3 != 0) {
        uVar1 = fn_00145ac0(DAT_0089889c);
        iVar2 = fn_00118624(iVar3,uVar1);
      }
      DAT_008988a0 = iVar2;
    }
  }
  return 1;
}



int * fn_0010edfc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x328) != 0) {
      fn_00113a24();
      if (*(int **)(iVar3 + 0x328) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x328) + 4))();
        *(undefined4 *)(iVar3 + 0x328) = 0;
      }
    }
    fn_00119bd8(iVar3);
    if (*(int **)(iVar3 + 0x338) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x338) + 4))();
    }
    if (*(int **)(iVar3 + 0x328) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x328) + 4))();
    }
    if (*(int **)(iVar3 + 0x318) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x318) + 4))();
    }
    if (*(int **)(iVar3 + 0x314) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x314) + 4))();
    }
    if (*(int *)(iVar3 + 0x310) != 0) {
      fn_00122c9c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x30c) != 0) {
      fn_00122e2c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x308) != 0) {
      fn_00122a84();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x304) != 0) {
      fn_0012238c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x300) != 0) {
      fn_0012219c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x2fc) != 0) {
      fn_0012291c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x2f8) != 0) {
      fn_0012271c();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x2f4) != 0) {
      fn_0011e054();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x2f0) != 0) {
      fn_0011e134();
      fn_002feef8();
    }
    if (*(int **)(iVar3 + 0x2ec) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2ec) + 4))();
    }
    if (*(int **)(iVar3 + 0x2e8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2e8) + 4))();
    }
    if (*(int **)(iVar3 + 0x2e4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2e4) + 4))();
    }
    if (*(int **)(iVar3 + 0x2e0) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2e0) + 4))();
    }
    if (*(int **)(iVar3 + 0x2dc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2dc) + 4))();
    }
    if (*(int **)(iVar3 + 0x2d8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2d8) + 4))();
    }
    if (*(int **)(iVar3 + 0x2d4) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2d4) + 4))();
    }
    if (*(int **)(iVar3 + 0x2d0) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x2d0) + 4))();
    }
    if (*(int *)(iVar3 + 0x58) != 0) {
      fn_0011d0c8();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x54) != 0) {
      fn_0011de18();
      fn_002feef8();
    }
    if (*(int **)(iVar3 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x4c) + 4))();
    }
    if (*(int **)(iVar3 + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x48) + 4))();
    }
    if (*(int *)(iVar3 + 0x44) != 0) {
      fn_001290d8();
      fn_002feef8();
    }
    if (*(int *)(iVar3 + 0x40) != 0) {
      fn_0011de54();
      fn_002feef8();
    }
    if (*(int **)(iVar3 + 0x3c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x3c) + 4))();
    }
    if (*(int **)(iVar3 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x38) + 4))();
    }
    if (*(int **)(iVar3 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x34) + 4))();
    }
    if (*(int **)(iVar3 + 0x30) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x30) + 4))();
    }
    if (*(int *)(iVar3 + 0x2c) != 0) {
      fn_00121a00();
      fn_002feef8();
    }
    if (*(int **)(iVar3 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x28) + 4))();
    }
    uVar1 = *(uint *)(iVar3 + 0x1c);
    uVar2 = uVar1;
    if (*(uint *)(iVar3 + 0x20) < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != *(uint *)(iVar3 + 0x20));
    }
    fn_001008c4(uVar1,(int)(*(int *)(iVar3 + 0x24) - uVar1) >> 2,0);
    fn_002feef8(iVar3);
  }
  return param_1;
}


