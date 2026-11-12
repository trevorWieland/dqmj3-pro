#include "0026db48_0026e608.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


void fn_0026e608(int param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_320 [512];
  undefined1 auStack_120 [256];
  undefined1 auStack_20 [12];
  
  fn_001028d4(auStack_120,(char *)&DAT_0026fac0,*(undefined4 *)(param_2 + 4),
               (int)(char)(&DAT_007bfb68)[*(byte *)(param_2 + 6)]);
  fn_00211ce4(auStack_120,auStack_320,*(undefined4 *)(DAT_008977e0 + 0xa8));
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_00118624(auStack_20,uVar1);
  uVar2 = fn_006ede48(auStack_20,auStack_120);
  fn_005f5d3c(auStack_20);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2 != 0) {
      do {
        iVar3 = fn_006e9f44(*(undefined4 *)(*(int *)(param_1 + 0x28) + uVar4 * 4));
        if (uVar2 < iVar3 - 0x2800U) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar4 * 4);
          goto LAB_0026e704;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2));
    }
    uVar4 = 0;
    uVar2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) >> 2;
    if (uVar2 != 0) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
    uVar1 = 0;
LAB_0026e704:
    fn_003376f4(*(undefined4 *)(param_1 + 0x18),*param_2,auStack_320,uVar1);
  }
  return;
}



undefined4 fn_0026e5c4(int param_1)

{
  if (param_1 != 0x1f) {
    if (param_1 < 0x20) {
      if ((param_1 != 0x12 && param_1 != 0x13) && (param_1 != 0x17 && param_1 != 0x1e)) {
        return 1;
      }
    }
    else if ((param_1 != 0x20 && param_1 != 0x22) && param_1 != 0x23) {
      return 1;
    }
  }
  return 0;
}



void fn_0026e588(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0081e074;
  if (param_1[1] != 0) {
    iVar1 = fn_001588d4(param_1[1] + 4);
    fn_002feef8(iVar1 + -4);
  }
  fn_002feef8(param_1);
  return;
}



undefined1 * fn_0026e47c(undefined1 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_24 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = fn_00100b58(param_2);
  if (uVar1 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_24 + 1;
    if (0x20 < uVar1) {
      puVar3 = local_24;
    }
    local_24[0] = uVar1;
    local_24[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  fn_00301a9c(puVar2,param_2,uVar1 << 1);
  return param_1;
}



int * fn_0026e410(int *param_1)

{
  if (*(char *)(*param_1 + 0x1034) != '\0') {
    fn_0016e9e0(*(undefined4 *)(*param_1 + 0x1024));
    *(undefined1 *)(*param_1 + 0x1034) = 0;
  }
  if (*param_1 != 0) {
    fn_0026e148();
    fn_002feef8();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_0026e378(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = param_3;
  iVar1 = fn_00145b00(0x1038,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0026dd3c(iVar1,param_2,param_4,param_5,param_6);
  }
  iVar1 = *param_1;
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0026e148(iVar1);
      fn_002feef8();
    }
    *param_1 = iVar2;
  }
  return param_1;
}



int * fn_0026e33c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_0026d83c(*param_1);
  (**(code **)(*piVar1 + 8))(piVar1);
  return piVar1;
}



int * fn_0026e294(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 *local_28 [8];
  
  local_28[0] = &DAT_008f9cf4;
  fn_006b72dc(*param_1,local_28,param_2);
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    local_38 = param_7;
    uStack_34 = param_8;
    local_30 = param_9;
    uStack_2c = param_10;
    piVar2 = (int *)fn_00210af8(iVar1,local_28[0],param_3,&local_38,param_5,param_6);
  }
  fn_001588d4(local_28);
  (**(code **)(*piVar2 + 8))(piVar2);
  return piVar2;
}



int * fn_0026e148(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x402) = 0;
  svc_0x24();
  if (*param_1 < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  fn_0015e304(param_1);
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  if (param_1[0x406] != 0) {
    iVar1 = **(int **)(param_1[0x406] + 0x10);
    while (iVar1 != *(int *)(param_1[0x406] + 0x10)) {
      if (*(int **)(iVar1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
      }
      iVar1 = **(int **)(param_1[0x406] + 0x10);
    }
    if (param_1[0x406] != 0) {
      fn_00787044();
      fn_002feef8();
    }
    param_1[0x406] = 0;
  }
  iVar1 = fn_001588d4(param_1 + 0x40a);
  if (*(undefined1 **)(iVar1 + -4) != &DAT_008f9d04) {
    piVar2 = (int *)(*(undefined1 **)(iVar1 + -4) + -0xc);
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(*(int *)(iVar1 + -4) + -0xc,*(int *)(*(int *)(iVar1 + -4) + -8) + 0xe,0);
    }
  }
  piVar2 = (int *)(iVar1 + -0x1028);
  fn_0015e304(piVar2);
  if (*piVar2 != 0) {
    svc_0x23();
    *piVar2 = 0;
  }
  return piVar2;
}



void fn_0026db48(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *param_1;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*(int **)(iVar1 + 0x101c) == param_2) {
    do {
      svc_0xa();
    } while (*(int **)(iVar1 + 0x101c) == param_2);
    if (param_2 == (int *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0026dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 4))(param_2);
    return;
  }
  fn_00170704();
  iVar2 = *(int *)(iVar1 + 0x1018);
  if (iVar2 != 0) {
    piVar5 = *(int **)(iVar2 + 0x10);
    for (piVar6 = (int *)*piVar5; piVar6 != piVar5; piVar6 = (int *)*piVar6) {
      if ((int *)piVar6[2] == param_2) {
        if (piVar6 != piVar5) {
          *(int *)piVar6[1] = *piVar6;
          *(int *)(*piVar6 + 4) = piVar6[1];
          *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -1;
          *piVar6 = *(int *)(iVar2 + 4);
          *(int **)(iVar2 + 4) = piVar6;
        }
        if (param_2 != (int *)0x0) {
          (**(code **)(*param_2 + 4))(param_2);
        }
        piVar5 = *(int **)(iVar1 + 0x1018);
        if (piVar5[5] == 0) {
          if (piVar5 != (int *)0x0) {
            piVar6 = (int *)piVar5[4];
            if (piVar6 != (int *)0x0) {
              piVar4 = (int *)*piVar6;
              while (piVar3 = piVar4, piVar3 != piVar6) {
                piVar4 = (int *)piVar5[4];
                if (piVar3 != (int *)piVar5[4]) {
                  piVar4 = (int *)*piVar3;
                  *(int *)piVar3[1] = *piVar3;
                  *(int *)(*piVar3 + 4) = piVar3[1];
                  piVar5[5] = piVar5[5] + -1;
                  *piVar3 = piVar5[1];
                  piVar5[1] = (int)piVar3;
                }
              }
              piVar6 = (int *)piVar5[4];
              *piVar6 = piVar5[1];
              piVar5[1] = (int)piVar6;
              piVar6 = (int *)*piVar5;
              while (piVar6 != (int *)0x0) {
                *piVar5 = *piVar6;
                fn_001008c4(piVar6[2],piVar6[1],0);
                fn_001008c4(piVar6,1,0);
                piVar6 = (int *)*piVar5;
              }
              piVar5[1] = 0;
              piVar5[2] = 0;
              piVar5[3] = 0;
            }
            fn_002feef8(piVar5);
          }
          *(undefined4 *)(iVar1 + 0x1018) = 0;
        }
        goto LAB_0026dc58;
      }
    }
    if (param_2 == (int *)0x0) goto LAB_0026dc58;
  }
  (**(code **)(*param_2 + 4))(param_2);
LAB_0026dc58:
  fn_001707b4(iVar1 + 0x100c);
  return;
}


