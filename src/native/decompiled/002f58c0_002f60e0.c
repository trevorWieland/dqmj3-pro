#include "002f58c0_002f60e0.h"



void fn_002f60e0(void)

{
  fn_001f7414(*(undefined4 *)(DAT_008977ec + 0x24),0xf9,0);
  return;
}



void fn_002f5fa0(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fn_003e93ec();
  iVar2 = *param_1 + param_2 * 0x14;
  puVar4 = *(undefined4 **)(iVar2 + -0xc);
  iVar5 = *(int *)(iVar2 + -0x10);
  fn_00301f50(puVar4,0x78);
  puVar3 = (undefined4 *)fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_2);
  uVar6 = puVar3[9];
  uVar7 = puVar3[10];
  uVar8 = puVar3[0xb];
  uVar9 = puVar3[0xc];
  uVar10 = puVar3[0xd];
  uVar11 = puVar3[0xe];
  uVar12 = puVar3[0xf];
  *puVar4 = puVar3[8];
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4[4] = uVar9;
  puVar4[5] = uVar10;
  puVar4[6] = uVar11;
  puVar4[7] = uVar12;
  puVar4[8] = puVar3[0x10];
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4[9] = *puVar3;
  puVar4[10] = uVar6;
  puVar4[0xb] = uVar7;
  puVar4[0xc] = uVar8;
  puVar4[0xd] = puVar3[4];
  puVar4[0xe] = puVar3[5];
  puVar4[0xf] = puVar3[6];
  iVar2 = fn_003e93d0(DAT_008977ec,param_2);
  puVar4[0x10] = (uint)(*(char *)(iVar2 + 8) == '\x01');
  uVar6 = fn_002f5b28(param_2);
  puVar4[0x11] = uVar6;
  uVar1 = fn_002f6980(param_2);
  *(undefined2 *)(puVar4 + 0x12) = uVar1;
  uVar1 = fn_002f5944(param_2);
  *(undefined2 *)((int)puVar4 + 0x4a) = uVar1;
  uVar1 = fn_002f6298(param_2);
  *(undefined2 *)(puVar4 + 0x13) = uVar1;
  *(undefined1 *)((int)puVar4 + 0x4e) = *(undefined1 *)(puVar3 + 0x11);
  puVar4[0x14] = *(undefined4 *)(iVar5 + 0x34);
  puVar4[0x15] = *(undefined4 *)(iVar5 + 0x38);
  local_38 = 0x56c4a85f;
  uStack_34 = 0x120a04c0;
  uStack_30 = 0x838d9cb1;
  uStack_2c = 0xf3c72986;
  uStack_28 = 0xca886feb;
  uStack_24 = 0xca175817;
  uStack_20 = 0x3316fdf5;
  uStack_1c = 0x29ed65b;
  fn_001628b0(puVar4 + 0x16,puVar4,0x58,&local_38,0x20);
  return;
}



void fn_002f5f8c(undefined4 param_1)

{
  fn_002f4624(DAT_008977ec,param_1);
  return;
}



void fn_002f5ee4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_001f74e4(*(undefined4 *)(DAT_008977ec + 0x24),0xf9,param_3,param_4,param_4);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_00897040) goto LAB_002f5f3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_002f5f3c:
  (**(code **)(*piVar1 + 0xc))(piVar1);
  piVar1[6] = param_1;
  fn_005718fc(piVar1,param_2);
  *(undefined1 *)(piVar1 + 7) = 1;
  fn_003ca348(*(undefined4 *)(DAT_008977ec + 0x24),0xf9,0,0,0);
  return;
}



bool fn_002f5d5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_003e93d0(DAT_008977ec,param_1);
  return *(char *)(iVar1 + 8) == '\x01';
}



bool fn_002f5cf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_002f5d40;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f5d40:
  return *(char *)(puVar1 + 4) == '\0';
}



void fn_002f5c0c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_900 [2272];
  
  fn_00290734(auStack_900);
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_002f5c6c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f5c6c:
  puVar2 = (undefined4 *)fn_001f74e4(*(undefined4 *)(DAT_008977ec + 0x24),0x3c);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894d28) goto LAB_002f5cb4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_002f5cb4:
  fn_0017821c(puVar1 + 0x12,auStack_900,0x8d8);
  fn_0017821c(puVar2 + 7,auStack_900,0x8d8);
  return;
}



int fn_002f5b28(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  iVar2 = fn_003e93d0(DAT_008977ec,param_1);
  if (*(char *)(iVar2 + 8) == '\x01') {
    iVar2 = fn_006cd710(*(undefined4 *)(DAT_008977ec + 0x28));
    fVar6 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar2 + 0x50),(byte)(in_fpscr >> 0x16) & 3)
    ;
    iVar5 = *(int *)(DAT_008977ec + 0x28);
    iVar2 = fn_006cd660(iVar5);
    fVar6 = fVar6 * *(float *)(iVar2 + *(int *)(iVar5 + 0xc) * 4);
    puVar3 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00896fe0) goto LAB_002f5bd8;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_002f5bd8:
    bVar1 = *(byte *)((int)puVar3 + 0x11);
    iVar2 = fn_006cd660(*(undefined4 *)(DAT_008977ec + 0x28));
    iVar2 = (int)(fVar6 * *(float *)(iVar2 + (uint)bVar1 * 4 + 0x1c));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int fn_002f5944(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float fVar11;
  
  iVar2 = fn_003e93d0(DAT_008977ec,param_1);
  puVar9 = (undefined4 *)0x0;
  if (*(char *)(iVar2 + 8) == '\x01') {
    uVar10 = *(undefined4 *)(DAT_008977ec + 0x28);
    iVar2 = fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_1);
    puVar3 = (uint *)fn_006cd710(uVar10);
    uVar10 = fn_002f8914();
    uVar10 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar10);
    iVar4 = fn_00247138(uVar10,4);
    iVar2 = fn_00247138(iVar2 + 0xd8,4);
    uVar5 = iVar2 - iVar4;
    uVar8 = 0;
    if (0 < (int)uVar5) {
      if (*puVar3 < uVar5) {
        if (puVar3[2] < uVar5) {
          if (puVar3[4] < uVar5) {
            if (puVar3[6] < uVar5) {
              if (puVar3[8] < uVar5) {
                if (puVar3[10] < uVar5) {
                  if (puVar3[0xc] < uVar5) {
                    if (puVar3[0xe] < uVar5) {
                      if (puVar3[0x10] < uVar5) {
                        if (uVar5 <= puVar3[0x12]) {
                          uVar8 = puVar3[0x13];
                        }
                      }
                      else {
                        uVar8 = puVar3[0x11];
                      }
                    }
                    else {
                      uVar8 = puVar3[0xf];
                    }
                  }
                  else {
                    uVar8 = puVar3[0xd];
                  }
                }
                else {
                  uVar8 = puVar3[0xb];
                }
              }
              else {
                uVar8 = puVar3[9];
              }
            }
            else {
              uVar8 = puVar3[7];
            }
          }
          else {
            uVar8 = puVar3[5];
          }
        }
        else {
          uVar8 = puVar3[3];
        }
      }
      else {
        uVar8 = puVar3[1];
      }
    }
    iVar4 = *(int *)(DAT_008977ec + 0x28);
    iVar2 = fn_006cd660(iVar4);
    fVar11 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = *(float *)(iVar2 + *(int *)(iVar4 + 0xc) * 4) * fVar11;
    puVar6 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar7 == &DAT_00896fe0) {
          puVar9 = puVar6;
          break;
        }
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    bVar1 = *(byte *)((int)puVar9 + 0x11);
    iVar2 = fn_006cd660(*(undefined4 *)(DAT_008977ec + 0x28));
    iVar2 = (int)(fVar11 * *(float *)(iVar2 + (uint)bVar1 * 4 + 0x1c));
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



bool fn_002f5908(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    fn_002f4624(DAT_008977ec,1);
  }
  return iVar1 == 2;
}



undefined4 fn_002f58c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    if (param_1 != 0) {
      fn_002f4624(DAT_008977ec,1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


