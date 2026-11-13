#include "006688a0_00669fec.h"



undefined4 fn_00669fec(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,9);
  return 1;
}



int fn_00669eb0(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = param_1[0x12];
  iVar2 = 0;
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x13] = param_1[0x13] | 2;
    (**(code **)(*param_1 + 0x34))(param_1,1);
  }
  else if (iVar1 == 1) {
    bVar3 = (*(byte *)(param_1 + 0x13) & 2) == 0;
    if (bVar3) {
      iVar2 = param_1[0x1b];
    }
    if (bVar3 && iVar2 == 0) {
      iVar1 = param_1[0x27];
      if (*(char *)(iVar1 + 0x10) != '\x02') {
        local_20 = *(undefined4 *)(iVar1 + 0x38);
        uStack_1c = *(undefined4 *)(iVar1 + 0x3c);
        uStack_18 = *(undefined4 *)(iVar1 + 0x40);
        local_14 = 0x80670005;
        iVar1 = fn_006d3b74(&local_20,&local_14);
        if (iVar1 != 1) {
          local_10 = 0x80670006;
          iVar1 = fn_006d3b74(&local_20,&local_10);
          if (iVar1 != 1) {
            iVar2 = -1;
            fn_006688a0(param_1,param_1 + 0x1d,&local_20,0);
          }
        }
      }
      (**(code **)(*param_1 + 0x34))(param_1,2);
    }
  }
  else if ((iVar1 == 2) && (iVar1 = fn_00673be8(param_1), iVar1 == 0)) {
    (**(code **)(*param_1 + 0x30))(param_1,0);
  }
  return iVar2;
}



void fn_00669e78(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0xa8,param_2,300);
  if (*(ushort *)(param_1 + 0xac) < 2) {
    *(short *)(param_1 + 0xac) = (short)*(undefined4 *)(DAT_00898840 + 0x38);
  }
  return;
}



undefined4 fn_00669d8c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  param_1[0x14d] = *param_2;
  fn_00170fa4(param_1 + 0x14e,param_2 + 1);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  fn_00673ce8(param_1,0x1a);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    fn_00673ce8(param_1,2);
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0x1f) = 0;
    uVar1 = 0;
    if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
      (**(code **)(*param_1 + 0x30))(param_1,1);
      uVar1 = 1;
    }
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,2);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_00669d70(int *param_1)

{
  (**(code **)(*param_1 + 0x30))(param_1,8);
  return 1;
}



undefined4 fn_006699f4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined *local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined *local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined2 local_148;
  undefined4 *local_138;
  undefined4 *puStack_134;
  undefined *local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  
  uVar8 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  local_168 = &DAT_008554c0;
  local_164 = 0;
  local_150 = 0;
  local_14c = 0;
  local_154 = &DAT_00854fd4;
  local_148 = 0xffff;
  puVar1 = (undefined4 *)fn_0075546c(&local_138,0);
  puVar1[-0xc] = &DAT_008549dc;
  puVar1[-10] = 0;
  puVar1[-9] = 0;
  local_124 = 0;
  local_120 = 0;
  local_128 = &DAT_00854fd4;
  local_11c = 0xffff;
  fn_004aeaec(puVar1 + -7,&local_128);
  puVar1[-2] = 0;
  puVar1[-1] = 0;
  puVar1[-8] = 0;
  puVar6 = (undefined4 *)puVar1[1];
  puVar7 = (undefined4 *)*puVar1;
  puVar5 = puVar7;
  if (puVar7 != puVar6) {
    do {
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
    puVar1[1] = puVar1[1] - ((int)puVar6 - (int)puVar7 & 0xfffffff8U);
  }
  local_160 = *(undefined4 *)(param_1 + 0x660);
  uStack_15c = *(undefined4 *)(param_1 + 0x664);
  iVar2 = (**(code **)(**(int **)(param_1 + 0xa4) + 0x118))
                    (*(int **)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0x9c),&local_168,
                     *(undefined4 *)(param_1 + 0x66c),*(undefined4 *)(param_1 + 0x668),
                     *(undefined4 *)(param_1 + 0x670));
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
    uVar3 = fn_0045a590();
    uVar4 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar4;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar3,&local_128,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  local_168 = &DAT_008554c0;
  for (puVar5 = local_138; puVar5 != puStack_134; puVar5 = puVar5 + 2) {
    (**(code **)*puVar5)(puVar5);
  }
  fn_0014f1bc(local_138);
  return uVar8;
}



void fn_006688a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = fn_00482944(param_3);
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = uVar1;
  if (param_4 == 0) {
    local_30 = 0x800300cc;
    iVar2 = fn_006d3b74(param_3,&local_30);
    if (iVar2 == 0) {
      local_2c = 0x80030073;
      iVar2 = fn_006d3b74(param_3,&local_2c);
      if (iVar2 == 0) {
        local_28 = 0x800300c8;
        iVar2 = fn_006d3b74(param_3,&local_28);
        if (iVar2 == 0) {
          local_24 = 0x800300c9;
          iVar2 = fn_006d3b74(param_3,&local_24);
          if (iVar2 == 0) {
            local_20 = 0x800300d8;
            iVar2 = fn_006d3b74(param_3,&local_20);
            if (iVar2 == 0) {
              local_1c = 0x800300ca;
              iVar2 = fn_006d3b74(param_3,&local_1c);
              if (iVar2 == 0) {
                local_18 = 0x80690004;
                iVar2 = fn_006d3b74(param_3,&local_18);
                if (iVar2 == 0) {
                  uVar1 = 1;
                }
                else {
                  uVar1 = 0x13;
                }
              }
              else {
                uVar1 = 0x12;
              }
            }
            else {
              uVar1 = 0x11;
            }
          }
          else {
            uVar1 = 0x10;
          }
        }
        else {
          uVar1 = 0xf;
        }
      }
      else {
        uVar1 = 0xe;
      }
    }
    else {
      uVar1 = 0xd;
    }
  }
  else {
    uVar1 = 1;
  }
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}


