#include "0045d1ac_0045d864.h"



undefined4 fn_0045d784(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_34 [16];
  int local_24;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  iVar1 = fn_0045d1ac();
  if (iVar1 != 0) {
    local_24 = 0;
    iVar1 = *(int *)(param_2 + 8);
    iVar2 = *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18);
    fn_0045cfec(auStack_34,*(ushort *)(param_3 + 0xa2) & 0xf,param_1 + 0xc,uVar3,iVar2,iVar2 + 0x2c
                 ,*(int *)(iVar1 + 0x10) + -0x2c);
    if (((*(int *)(param_3 + 0x38) == local_24) &&
        (iVar1 = fn_001010c8(param_3 + 0x28,auStack_34), iVar1 == 0)) &&
       (iVar1 = fn_0045d104(param_1,param_3), iVar1 != 0)) {
      if ((*(ushort *)(param_3 + 0xa2) & 0xf) == 1) {
        uVar3 = fn_0045ceac(param_1,param_3);
        return uVar3;
      }
      return 1;
    }
  }
  return 0;
}



void fn_0045d420(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*(ushort *)(param_2 + 0xa2) & 0xf) != 1) || (iVar1 = fn_0045d864(param_1), iVar1 != 0)) {
    iVar1 = fn_0011c134(DAT_008b6510 - *(uint *)(param_1 + 0x28),
                         DAT_008b6514 -
                         (*(int *)(param_1 + 0x2c) +
                         (uint)(DAT_008b6510 < *(uint *)(param_1 + 0x28))),1000,0,param_4);
    *(int *)(param_2 + 0xb8) = iVar1 + *(int *)(param_1 + 0x30);
    fn_0045d4a0(param_1,param_2,param_3,param_1 + 0xc,*(undefined4 *)(param_1 + 8));
  }
  return;
}



undefined4 fn_0045d864(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined *local_38;
  undefined1 local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [20];
  
  iVar1 = *(int *)(param_2 + 0xd8);
  iVar4 = param_2;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x10);
  }
  if (iVar1 == 0 || iVar4 == 0) {
    iVar1 = fn_0015ece0(0x20);
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = fn_004b5488(iVar1,0xc);
    }
    *(undefined4 *)(iVar4 + 0x10) = 0xc;
    piVar2 = *(int **)(param_2 + 0xd8);
    if (piVar2 != (int *)0x0) {
      puVar6 = (uint *)(piVar2 + 1);
      do {
        uVar5 = *puVar6 - 1;
        bVar7 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar7);
      *puVar6 = uVar5;
      bVar7 = uVar5 == 0;
      if (bVar7) {
        uVar5 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar7 && uVar5 == 0) {
LAB_0045d990:
        *(undefined1 *)(piVar2 + 2) = 1;
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  else {
    if (*(int *)(iVar1 + 0x18) == 0xc) {
      *(int *)(iVar1 + 0x10) = iVar4 + 0xc;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      goto LAB_0045d9a4;
    }
    iVar4 = fn_0015ece0(0x20);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_004b5488(iVar4,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0xc);
    }
    *(undefined4 *)(iVar4 + 0x10) = 0xc;
    fn_0015ef58(iVar4,*(int *)(*(int *)(param_2 + 0xd8) + 0xc) +
                       *(int *)(*(int *)(param_2 + 0xd8) + 0x18));
    piVar2 = *(int **)(param_2 + 0xd8);
    if (piVar2 != (int *)0x0) {
      puVar6 = (uint *)(piVar2 + 1);
      do {
        uVar5 = *puVar6 - 1;
        bVar7 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar7);
      *puVar6 = uVar5;
      bVar7 = uVar5 == 0;
      if (bVar7) {
        uVar5 = (uint)*(byte *)(piVar2 + 2);
      }
      if (bVar7 && uVar5 == 0) goto LAB_0045d990;
    }
  }
  *(int *)(param_2 + 0xd8) = iVar4;
LAB_0045d9a4:
  uVar9 = (ulonglong)*(uint *)(*(int *)(param_2 + 0xd8) + 0x10);
  *(undefined4 *)(*(int *)(param_2 + 0xd8) + 0x10) = 0;
  local_30 = *(int *)(param_2 + 0xd8);
  local_38 = &DAT_00852740;
  piVar2 = (int *)(local_30 + 4);
  do {
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = *piVar2 + 1;
  local_34 = 0;
  local_2c = 0;
  local_40 = *(undefined1 *)(param_2 + 0xbc);
  fn_0015ef58(local_30,&local_40,1,0xffffffff);
  local_40 = *(undefined1 *)(param_2 + 0xbd);
  fn_0015ef58(local_30,&local_40,1,0xffffffff);
  iVar4 = 0;
  do {
    local_28[0] = 0;
    fn_0015ef58(local_30,local_28,1,0xffffffff);
    uVar8 = (undefined4)uVar9;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  uVar3 = *(undefined4 *)(param_2 + 0xc0);
  local_40 = (undefined1)uVar3;
  local_3f = (undefined1)((uint)uVar3 >> 8);
  local_3e = (undefined1)((uint)uVar3 >> 0x10);
  local_3d = (undefined1)((uint)uVar3 >> 0x18);
  fn_0015ef58(local_30,&local_40,4,0xffffffff);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  local_40 = (undefined1)uVar3;
  local_3f = (undefined1)((uint)uVar3 >> 8);
  local_3e = (undefined1)((uint)uVar3 >> 0x10);
  local_3d = (undefined1)((uint)uVar3 >> 0x18);
  fn_0015ef58(local_30,&local_40,4,0xffffffff);
  *(undefined4 *)(*(int *)(param_2 + 0xd8) + 0x10) = uVar8;
  fn_00454d0c(&local_38);
  return 1;
}



undefined4
fn_0045d4a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined1 auStack_34 [16];
  undefined4 local_24;
  
  iVar1 = *(int *)(param_3 + 8);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  local_40 = (local_40 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0xf5) & 0xff);
  fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,1,0xffffffff);
  if (*(char *)(param_2 + 0x24) == -0x30) {
    local_40 = (local_40 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0xd0) & 0xff);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,1,0xffffffff);
    local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,*(undefined2 *)(param_2 + 0xa2));
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,2,0xffffffff);
    local_40 = *(uint *)(param_2 + 0xa4);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,4,0xffffffff);
    local_40 = *(uint *)(param_2 + 0xa8);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,4,0xffffffff);
    local_40 = (local_40 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(*(undefined2 *)(param_2 + 0xac)) & 0xffff);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,2,0xffffffff);
    local_40 = CONCAT22(((unsigned int)(local_40) >> 16) & 0xffff,*(undefined2 *)(param_2 + 0xae));
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,2,0xffffffff);
    local_40 = *(uint *)(param_2 + 0xb0) ^ 0xdb319579;
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,4,0xffffffff);
    local_40 = *(uint *)(param_2 + 0xb4) ^ 0xbee17d2f;
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,4,0xffffffff);
    local_40 = *(uint *)(param_2 + 0xb8);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_40,4,0xffffffff);
    local_24 = 0;
    iVar1 = *(int *)(param_2 + 0xd8);
    if (iVar1 == 0) {
      local_40 = *(int *)(*(int *)(param_3 + 8) + 0x18) + *(int *)(*(int *)(param_3 + 8) + 0xc);
      iStack_3c = 0;
      local_38 = 0;
      fn_0045cfec(auStack_34,*(ushort *)(param_2 + 0xa2) & 0xf,param_4,param_5);
    }
    else {
      local_38 = *(undefined4 *)(iVar1 + 0x10);
      iStack_3c = *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18);
      local_40 = *(int *)(*(int *)(param_3 + 8) + 0x18) + *(int *)(*(int *)(param_3 + 8) + 0xc);
      fn_0045cfec(auStack_34,*(ushort *)(param_2 + 0xa2) & 0xf,param_4,param_5);
    }
    iVar1 = fn_0015ef58(*(undefined4 *)(param_3 + 8),auStack_34,local_24,0xffffffff);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_2 + 0xd8);
      if (iVar1 != 0) {
        fn_0015ef58(*(undefined4 *)(param_3 + 8),*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18),
                     *(undefined4 *)(iVar1 + 0x10),0xffffffff);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_0045d1ac(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char local_58 [4];
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined2 local_4c [2];
  undefined2 local_48 [2];
  uint local_44;
  undefined2 local_40 [6];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c [3];
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) != 0) {
    local_58[0] = '\0';
    local_54[0] = 0;
    local_34 = 0;
    local_30 = 0;
    local_40[0] = 0;
    local_50 = 0;
    local_4c[0] = 0;
    local_48[0] = 0;
    local_44 = 0;
    local_2c[0] = 0;
    iVar2 = fn_0074a4c8(param_2,local_58);
    if (((iVar2 != 0) && (local_58[0] == -0xb)) &&
       (iVar2 = fn_0074a4c8(param_2,local_54), iVar2 != 0)) {
      *(undefined1 *)(param_3 + 0x24) = local_54[0];
      iVar2 = fn_0074a598(param_2,local_40);
      if (iVar2 != 0) {
        *(undefined2 *)(param_3 + 0xa2) = local_40[0];
        iVar2 = fn_0074a528(param_2,&local_34);
        if (iVar2 != 0) {
          *(undefined4 *)(param_3 + 0xa4) = local_34;
          iVar2 = fn_0074a528(param_2,&local_50);
          if (iVar2 != 0) {
            *(undefined4 *)(param_3 + 0xa8) = local_50;
            iVar2 = fn_0074a598(param_2,local_4c);
            if (iVar2 != 0) {
              *(undefined2 *)(param_3 + 0xac) = local_4c[0];
              iVar2 = fn_0074a598(param_2,local_48);
              if (iVar2 != 0) {
                *(undefined2 *)(param_3 + 0xae) = local_48[0];
                iVar2 = fn_0074a528(param_2,&local_30);
                if (iVar2 != 0) {
                  *(uint *)(param_3 + 0xb0) = local_30 ^ 0xdb319579;
                  iVar2 = fn_0074a528(param_2,&local_44);
                  if (iVar2 != 0) {
                    *(uint *)(param_3 + 0xb4) = local_44 ^ 0xbee17d2f;
                    iVar2 = fn_0074a528(param_2,local_2c);
                    if (iVar2 != 0) {
                      *(undefined4 *)(param_3 + 0xb8) = local_2c[0];
                      iVar2 = fn_00454b8c(param_2,param_3 + 0x28,0x10);
                      if ((iVar2 != 0) &&
                         (*(undefined4 *)(param_3 + 0x38) = 0x10, *(int *)(param_2 + 0xc) == 0x2c))
                      {
                        *(undefined1 *)(param_3 + 0x25) = 0xbf;
                        *(undefined1 *)(param_3 + 0x26) = 0xbf;
                        iVar2 = *(int *)(param_3 + 0xd8);
                        iVar5 = *(int *)(param_2 + 8);
                        *(undefined4 *)(iVar2 + 0x10) = 0;
                        *(undefined4 *)(iVar2 + 0x18) = 0;
                        uVar3 = *(int *)(iVar5 + 0x10) - 0x2cU & 0xffff;
                        if (uVar3 != 0 && param_5 != 0) {
                          iVar4 = *(int *)(param_3 + 0xd8);
                          iVar2 = *(int *)(param_2 + 8);
                          *(undefined4 *)(iVar4 + 0x10) = 0;
                          *(undefined4 *)(iVar4 + 0x18) = 0;
                          uVar1 = *(int *)(iVar2 + 0x10) - 0x2cU & 0xffff;
                          if ((uVar1 != 0) &&
                             (iVar2 = fn_0015ef58(*(undefined4 *)(param_3 + 0xd8),
                                                   *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x18) +
                                                   *(int *)(param_2 + 0xc),uVar1,0xffffffff),
                             iVar2 == 0)) {
                            return 0;
                          }
                          uVar3 = *(int *)(param_2 + 0xc) + uVar3;
                          if (uVar3 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
                            *(uint *)(param_2 + 0xc) = uVar3;
                          }
                        }
                        if (param_4 != (undefined4 *)0x0) {
                          *param_4 = *(undefined4 *)(iVar5 + 0x10);
                        }
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


