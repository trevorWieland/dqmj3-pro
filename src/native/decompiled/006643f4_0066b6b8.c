#include "006643f4_0066b6b8.h"



undefined4 fn_0066b6b8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 auStack_28 [8];
  
  uVar7 = 0;
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    fn_0079bd60();
    puVar6 = (undefined4 *)**(undefined4 **)(param_1 + 0x5a0);
    uVar1 = *(uint *)(DAT_00898840 + 0x48);
    if (uVar1 != 0) {
      if (uVar1 < 0x80000000) {
        if (0 < (int)uVar1) {
          if ((uVar1 & 1) != 0) {
            puVar6 = (undefined4 *)*puVar6;
          }
          for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar6 = *(undefined4 **)*puVar6;
          }
        }
      }
      else {
        do {
          puVar6 = (undefined4 *)*puVar6;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
    }
    DAT_00898848 = *(int *)(param_1 + 0x690);
    iVar3 = puVar6[3];
    if (DAT_00898848 == 0) {
      DAT_00898848 = *(int *)(iVar3 + 8);
    }
    local_128 = fn_0013d3e8(auStack_28,&DAT_0066b920);
    iVar2 = fn_004a0b10(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         DAT_00898848,param_1 + 0x5a8);
    fn_00170f54(auStack_28);
    if (iVar2 == 0) {
      uVar7 = 0xffffffff;
      uVar4 = fn_0045a590();
      uVar5 = fn_00482b9c();
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      fn_0045a3b0(uVar4,&local_128,0x80);
      fn_0045a5b0();
    }
    else {
      fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
      iVar2 = *(int *)(param_1 + 0x9c);
      if (*(char *)(iVar2 + 0x10) == '\x02') {
        if (*(int *)(param_1 + 0x690) == 0) {
          DAT_00898844 = *(undefined4 *)(iVar3 + 0xc);
        }
        else {
          DAT_00898844 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 8) + 0xc);
        }
      }
      else {
        uVar7 = 0xffffffff;
        local_128 = *(undefined4 *)(iVar2 + 0x38);
        uStack_124 = *(undefined4 *)(iVar2 + 0x3c);
        uStack_120 = *(undefined4 *)(iVar2 + 0x40);
        fn_006688a0(param_1,param_1 + 0x74,&local_128,0);
      }
      *(undefined4 *)(param_1 + 0x690) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x70) == 1) {
    iVar3 = fn_004820b4(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),
                         DAT_00898848,param_1 + 0x578);
    if (iVar3 == 0) {
      uVar7 = 0xffffffff;
      uVar4 = fn_0045a590();
      uVar5 = fn_00482b9c();
      *(undefined4 *)(param_1 + 0x74) = uVar5;
      *(undefined4 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      fn_0045a3b0(uVar4,&local_128,0x80);
      fn_0045a5b0();
    }
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
    iVar3 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar3 + 0x10) != '\x02') {
      uVar7 = 0xffffffff;
      local_128 = *(undefined4 *)(iVar3 + 0x38);
      uStack_124 = *(undefined4 *)(iVar3 + 0x3c);
      uStack_120 = *(undefined4 *)(iVar3 + 0x40);
      fn_006688a0(param_1,param_1 + 0x74,&local_128,1);
    }
  }
  return uVar7;
}



undefined4 fn_0066996c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_18 [8];
  
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  uVar1 = fn_0013d3e8(auStack_18,&DAT_006699e0);
  iVar2 = fn_004820cc(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x9c),DAT_00898848,
                       uVar1);
  fn_00170f54(auStack_18);
  if (iVar2 != 0) {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00667d68) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 fn_00667c48(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *unaff_r4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined *local_140;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 auStack_128 [268];
  
  uVar7 = 0;
  uVar9 = *(undefined4 *)(param_1 + 0x478);
  local_13c = 0;
  local_140 = &DAT_00853910;
  local_138 = 2;
  local_13a = 0xff;
  local_139 = 0;
  local_13b = *(int *)(param_1 + 0x484) == 1;
  iVar5 = *(int *)(param_1 + 0x490);
  iVar6 = iVar5;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  uVar4 = (undefined1)iVar6;
  if (0 < iVar5) {
    uVar4 = 1;
  }
  if (-1 < iVar5) {
    local_139 = *(undefined1 *)(param_1 + 0x494);
    local_13a = uVar4;
  }
  if (*(uint *)(param_1 + 0x488) < 2) {
    local_138 = (undefined1)*(uint *)(param_1 + 0x488);
  }
  local_134 = *(undefined4 *)(param_1 + 0x48c);
  local_130 = *(undefined1 *)(param_1 + 0x480);
  uVar8 = *(undefined4 *)(param_1 + 0x47c);
  if (*(char *)(*(int *)(param_1 + 0x9c) + 0x10) != '\x01') {
    fn_00456400();
  }
  if (*(undefined4 **)(param_1 + 0x4a4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x4a4))();
  }
  fn_002feca8(*(undefined4 *)(param_1 + 0x4a0));
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  puVar1 = (undefined4 *)fn_001287d4(0x14,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    unaff_r4 = (undefined4 *)0x0;
  }
  *(undefined4 **)(param_1 + 0x4a0) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar10 = 0;
    *puVar1 = &DAT_00853920;
    piVar2 = puVar1 + 2;
    *(undefined1 *)(puVar1 + 1) = 0;
    *piVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    iVar5 = 0;
    puVar3 = (undefined8 *)fn_0015ece0(0x100);
    *piVar2 = (int)puVar3;
    for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = uVar10;
      }
      puVar3 = puVar3 + 1;
    }
    puVar1[4] = *piVar2 + 0x100;
    puVar1[3] = *piVar2 + iVar5 * 8;
    *puVar1 = &DAT_00852bec;
    unaff_r4 = puVar1;
  }
  *(undefined4 **)(param_1 + 0x4a4) = unaff_r4;
  iVar6 = fn_00468aac(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x9c),uVar9,
                       &local_140,uVar8);
  if (iVar6 == 0) {
    uVar7 = 0xffffffff;
    uVar9 = fn_0045a590();
    uVar8 = fn_00482b9c();
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x78) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_0045a3b0(uVar9,auStack_128,0x80);
    fn_0045a5b0();
  }
  else {
    fn_004562e0(*(undefined4 *)(param_1 + 0x9c),0xffffffff);
  }
  return uVar7;
}



void fn_006667d4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c8cdc();
}



void fn_00666384(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      uVar2 = DAT_008c06ec;
      puVar4 = (uint *)(*(int *)(param_1 + 0x20) + iVar7 * 0x14 + 8);
      uVar6 = *puVar4;
      piVar3 = (int *)puVar4[1];
      puVar4[1] = DAT_008c06ec;
      uVar1 = DAT_008c06e8 & 0x8000000;
      *puVar4 = DAT_008c06e8;
      if (uVar1 != 0) {
        *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
      }
      if (((uVar6 & 0x8000000) != 0) && (iVar5 = piVar3[1], piVar3[1] = iVar5 + -1, iVar5 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))();
      }
      uVar2 = DAT_008c06ec;
      puVar4 = (uint *)(*(int *)(param_1 + 0x20) + iVar7 * 0x14);
      piVar3 = (int *)puVar4[1];
      uVar6 = *puVar4;
      puVar4[1] = DAT_008c06ec;
      uVar1 = DAT_008c06e8 & 0x8000000;
      *puVar4 = DAT_008c06e8;
      if (uVar1 != 0) {
        *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
      }
      if (((uVar6 & 0x8000000) != 0) && (iVar5 = piVar3[1], piVar3[1] = iVar5 + -1, iVar5 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x24));
  }
  return;
}



void fn_00664a3c(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    fn_00662bd0(0);
    iVar1 = fn_00664210();
    *param_1 = iVar1 == 2;
  }
  return;
}



void fn_00664a14(char *param_1)

{
  if (*param_1 != '\0') {
    fn_00662bd0();
    fn_00663dac();
    *param_1 = '\0';
  }
  return;
}



void fn_00664930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_006643f4();
  fn_00663994();
  iVar1 = fn_006f5d18(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_00662bd0();
    puVar4 = (undefined4 *)(iVar1 + 0x30);
    fn_00664a8c(&local_10);
    iVar2 = fn_006649e0(&local_10);
    if (iVar2 == 2) {
      uVar3 = fn_006f5d6c(*puVar4,0);
      if (uVar3 < DAT_00896aac) {
        fn_00663de0(puVar4,param_1);
        fn_006636c8(*puVar4,iVar1 + 0x40,0);
        fn_00664a98(&local_10);
        goto code_r0x006649cc;
      }
    }
    fn_00664a98(&local_10);
  }
code_r0x006649cc:
  fn_00663ce4();
  fn_00664464();
  return;
}



void fn_006643f4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (DAT_008ccfbc == 0) {
    DAT_008ccfb8 = fn_006644c0();
    DAT_008ccfc0 = &LAB_006644e8;
  }
  iVar1 = DAT_008ccfb8;
  DAT_008ccfbc = DAT_008ccfbc + 1;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0x18);
  if (*(int *)(DAT_008ccfb8 + 0x1c) == 0) {
    uVar2 = fn_0066430c();
    *puVar3 = uVar2;
    *(undefined1 **)(iVar1 + 0x20) = &LAB_00664394;
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return;
}


