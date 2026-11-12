#include "001013b0_00101674.h"



void fn_00101674(void)

{
  fn_00300604();
  return;
}



undefined1 * fn_001013b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined1 local_68;
  char local_67 [18];
  char acStack_55 [5];
  uint local_50;
  undefined1 *local_4c;
  int local_48;
  char *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [9];
  undefined1 auStack_2f [3];
  int local_2c;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int *piStack_18;
  
  local_48 = 0;
  iVar9 = param_4[2];
  uVar6 = param_4[1];
  local_2c = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  piStack_18 = param_4;
  iVar1 = fn_00300190();
  local_28 = (uint)*(byte *)((int)*(int **)(iVar1 + 0xc) + **(int **)(iVar1 + 0xc));
  puVar8 = &DAT_ffffffff;
  do {
    puVar2 = puVar8;
    puVar8 = puVar2 + 1;
    local_50 = (*(code *)param_4[6])(local_20);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (local_50 == 0xffffffff) {
    return &DAT_ffffffff;
  }
  uVar6 = uVar6 & 0xfffff97f;
  if (0 < iVar9) {
    if (local_50 != 0x2b) {
      if (local_50 != 0x2d) goto LAB_00101418;
      uVar6 = uVar6 | 0x400;
    }
    puVar8 = puVar2 + 2;
    local_50 = (*(code *)param_4[6])(local_20);
    iVar9 = iVar9 + -1;
  }
LAB_00101418:
  if ((int)(uVar6 << 0x15) < 0) {
    local_68 = 0x2d;
  }
  else {
    local_68 = 0x2b;
  }
  local_44 = local_67;
  local_4c = local_38;
  if (0 < iVar9) {
    if ((((local_50 == 0x69) || (local_50 == 0x49)) || (local_50 == 0x6e)) || (local_50 == 0x4e)) {
      local_6c = local_50;
      local_78 = puVar8;
      local_74 = uVar6;
      local_70 = iVar9;
      puVar2 = (undefined1 *)fn_0010272c(0xfffffffd,local_20,local_1c,param_4);
      if (puVar2 != (undefined1 *)0xfffffffd) {
        return puVar2;
      }
    }
    do {
      if (local_50 != 0x30) {
        if (((local_50 == 0x78) || (local_50 == 0x58)) && (local_2c == 1)) {
          local_78 = puVar8;
          local_74 = uVar6;
          local_70 = iVar9;
          puVar2 = (undefined1 *)fn_00102728(0xfffffffd,local_20,local_1c,param_4);
          if (puVar2 != (undefined1 *)0xfffffffd) {
            return puVar2;
          }
        }
        break;
      }
      puVar8 = puVar8 + 1;
      local_50 = (*(code *)param_4[6])(local_20);
      iVar9 = iVar9 + -1;
      uVar6 = uVar6 | 0x200;
      *local_1c = puVar8;
      local_2c = local_2c + 1;
    } while (0 < iVar9);
  }
  if (local_50 == local_28) {
    uVar6 = uVar6 | 0x80;
    puVar2 = puVar8;
    while( true ) {
      puVar8 = puVar2 + 1;
      iVar9 = iVar9 + -1;
      local_50 = (*(code *)param_4[6])(local_20);
      if (local_50 != 0x30) break;
      local_48 = local_48 + -1;
      uVar6 = uVar6 | 0x200;
      *local_1c = puVar2 + 2;
      local_50 = 0x30;
      puVar2 = puVar8;
    }
  }
  do {
    if (iVar9 < 1) {
LAB_001015fc:
      (*(code *)param_4[7])(local_20);
      *local_44 = -1;
      *local_4c = 0xff;
      local_40 = 0;
      local_3c = 0;
      fn_0010119c(&local_40,local_38,&local_68,local_48);
      if (-1 < (int)(uVar6 << 0x16)) {
        return (undefined1 *)0xfffffffe;
      }
      if ((uVar6 & 0x24) == 0) {
        fn_00300420(&local_78,&local_40);
        if ((uVar6 & 1) == 0) {
          puVar4 = (undefined4 *)*param_4;
          *param_4 = (int)(puVar4 + 1);
          *(undefined1 **)*puVar4 = local_78;
        }
      }
      else if ((uVar6 & 1) == 0) {
        piVar3 = (int *)*param_4;
        *param_4 = (int)(piVar3 + 1);
        puVar4 = (undefined4 *)*piVar3;
        *puVar4 = local_40;
        puVar4[1] = local_3c;
      }
      return puVar8;
    }
    if ((local_50 == local_28) && (-1 < (int)(uVar6 << 0x18))) {
      uVar7 = uVar6 | 0x80;
    }
    else {
      iVar1 = fn_00300388(local_50);
      if (iVar1 == 0) {
        if ((0 < iVar9) &&
           (((local_50 == 0x65 || (local_50 == 0x45)) && ((int)(uVar6 << 0x16) < 0)))) {
          uVar6 = uVar6 & 0xfffffcff;
          iVar1 = iVar9 + -1;
          local_50 = (*(code *)param_4[6])(local_20);
          puVar2 = puVar8 + 1;
          if (0 < iVar1) {
            if (local_50 != 0x2b) {
              if (local_50 != 0x2d) goto LAB_0010158a;
              uVar6 = uVar6 | 0x100;
            }
            local_50 = (*(code *)param_4[6])(local_20);
            iVar1 = iVar9 + -2;
            puVar2 = puVar8 + 2;
          }
LAB_0010158a:
          puVar8 = puVar2;
          if ((int)(uVar6 << 0x17) < 0) {
            uVar5 = 0x2d;
          }
          else {
            uVar5 = 0x2b;
          }
          *local_4c = uVar5;
          local_78 = local_4c + 1;
          local_4c = local_78;
          while ((0 < iVar1 && (iVar9 = fn_00300388(local_50), iVar9 != 0))) {
            iVar1 = iVar1 + -1;
            if (local_4c < auStack_2f) {
              *local_4c = (char)(local_50 - 0x30);
              if (((local_50 - 0x30 & 0xff) != 0) || (local_78 < local_4c)) {
                local_4c = local_4c + 1;
              }
            }
            else if ((int)(uVar6 << 0x17) < 0) {
              local_48 = -9999;
            }
            else {
              local_48 = 9999;
            }
            puVar8 = puVar8 + 1;
            local_50 = (*(code *)param_4[6])(local_20);
            *local_1c = puVar8;
            uVar6 = uVar6 | 0x200;
          }
        }
        goto LAB_001015fc;
      }
      uVar7 = uVar6 | 0x200;
      if (local_44 < acStack_55) {
        *local_44 = (char)local_50 + -0x30;
        local_44 = local_44 + 1;
        if ((int)(uVar6 << 0x18) < 0) {
          local_48 = local_48 + -1;
        }
      }
      else if (-1 < (int)(uVar6 << 0x18)) {
        local_48 = local_48 + 1;
      }
    }
    iVar9 = iVar9 + -1;
    if ((int)(uVar7 << 0x16) < 0) {
      *local_1c = puVar8 + 1;
    }
    puVar8 = puVar8 + 1;
    local_50 = (*(code *)param_4[6])(local_20);
    uVar6 = uVar7;
  } while( true );
}


