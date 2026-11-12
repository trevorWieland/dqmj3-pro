#include "0046f744_0046ffa8.h"



undefined4 fn_0046feec(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_1c;
  int local_18 [2];
  
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 < *(int *)(*(int *)(param_2 + 8) + 0x10)) {
    local_1c = 0;
    local_18[0] = 0;
    iVar1 = fn_0046ffa8(param_1,param_2,param_3,&local_1c,local_18);
    if (iVar1 != 0) {
      uVar2 = *(int *)(param_2 + 0xc) + 0x10;
      iVar1 = *(int *)(param_2 + 8);
      if (uVar2 <= *(uint *)(iVar1 + 0x10)) {
        *(uint *)(param_2 + 0xc) = uVar2;
        uVar2 = uVar2 + local_1c;
        if (uVar2 <= *(uint *)(iVar1 + 0x10)) {
          *(uint *)(param_2 + 0xc) = uVar2;
          uVar2 = uVar2 + local_18[0];
          if (uVar2 <= *(uint *)(iVar1 + 0x10)) {
            *(uint *)(param_2 + 0xc) = uVar2;
            if (param_4 != (int *)0x0) {
              *param_4 = uVar2 - iVar3;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



undefined4 fn_0046ffa8(undefined4 param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_2 + 0xc) + 2;
  if (uVar2 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
    *(uint *)(param_2 + 0xc) = uVar2;
    if (*(char *)(param_3 + 0x89) == '\0') {
      iVar1 = fn_00454b8c(param_2,param_3 + 0x68,0xc);
      if (iVar1 != 0) {
        *(undefined1 *)(param_3 + 0x24) = 1;
        *param_4 = (uint)*(byte *)(param_3 + 0x69);
        *param_5 = (uint)*(ushort *)(param_3 + 0x6a);
        *(undefined1 *)(param_3 + 0x25) = *(undefined1 *)(param_3 + 0x6c);
        *(undefined1 *)(param_3 + 0x26) = *(undefined1 *)(param_3 + 0x6d);
        *(undefined2 *)(param_3 + 0x3c) = *(undefined2 *)(param_3 + 0x6e);
        *(undefined1 *)(param_3 + 0x65) = *(undefined1 *)(param_3 + 0x70);
        *(undefined1 *)(param_3 + 0x84) = *(undefined1 *)(param_3 + 0x71);
        *(undefined2 *)(param_3 + 0x44) = *(undefined2 *)(param_3 + 0x72);
        return 1;
      }
    }
    else {
      *(undefined1 *)(param_3 + 0x89) = 1;
      uVar2 = *(int *)(param_2 + 0xc) + 0xc;
      if (uVar2 <= *(uint *)(*(int *)(param_2 + 8) + 0x10)) {
        *(uint *)(param_2 + 0xc) = uVar2;
        *param_4 = (uint)*(byte *)(param_3 + 0x69);
        *param_5 = (uint)*(ushort *)(param_3 + 0x6a);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_0046fb98(undefined4 param_1,int param_2,int param_3,uint *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_50;
  uint local_4c [7];
  undefined4 local_30;
  undefined2 local_2c [2];
  undefined4 local_28;
  
  local_30 = 0;
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) != 0) {
    iVar3 = fn_0074a4c8(param_2,param_3 + 0x25);
    if ((((iVar3 == 0) || (iVar3 = fn_0074a4c8(param_2,param_3 + 0x26), iVar3 == 0)) ||
        (iVar3 = fn_0074a598(param_2,param_3 + 0x3c), iVar3 == 0)) ||
       ((iVar3 = fn_0074a4c8(param_2,param_3 + 0x65), iVar3 == 0 ||
        (iVar3 = fn_00454b8c(param_2,param_3 + 0x28,4), iVar3 == 0)))) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x38) = 4;
    local_2c[0] = 0;
    iVar3 = fn_0074a598(param_2,local_2c);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined2 *)(param_3 + 0x44) = local_2c[0];
    uVar2 = *(ushort *)(param_3 + 0x3c);
    bVar9 = (uVar2 & 0xf) == 0;
    if (!bVar9) {
      uVar2 = uVar2 & 0xf;
    }
    if (bVar9 || uVar2 == 1) {
      iVar3 = fn_00454b8c(param_2,param_3 + 0x50,4);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_3 + 0x60) = 4;
    }
    if (((*(ushort *)(param_3 + 0x3c) & 0xf) == 2) &&
       (iVar3 = fn_0074a4c8(param_2,param_3 + 100), iVar3 == 0)) {
      return 0;
    }
    iVar3 = *(int *)(param_2 + 8);
    uVar7 = *(uint *)(iVar3 + 0x10);
    uVar8 = uVar7;
    if ((*(ushort *)(param_3 + 0x3c) & 0x80) != 0) {
      local_50 = local_50 & 0xffff0000;
      iVar4 = fn_0074a598(param_2,&local_50);
      if (iVar4 == 0) {
        return 0;
      }
      uVar8 = *(int *)(param_2 + 0xc) + (local_50 & 0xffff) + 1;
      if (uVar7 < uVar8) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = uVar8;
    bVar1 = *(byte *)(param_3 + 0x25) >> 4;
    if (0xb < bVar1) {
      return 0;
    }
    iVar4 = fn_004b616c(bVar1);
    local_50 = (uint)*(byte *)(iVar4 + 8);
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 != 0) {
      fn_00301a9c(local_4c,*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) + iVar4 + -1,1);
      local_4c[0] = local_4c[0] & 0xff;
      uVar5 = fn_004b5324(iVar3,iVar4 + -1,local_50);
      if (local_4c[0] == uVar5) {
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
        iVar4 = *(int *)(param_3 + 0xd8);
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(undefined4 *)(iVar4 + 0x18) = 0;
        uVar5 = *(uint *)(param_2 + 0xc);
        if (*(uint *)(iVar3 + 0x10) < uVar5) {
          return 0;
        }
        iVar4 = fn_0015ef58(*(undefined4 *)(param_3 + 0xd8),
                             *(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) + uVar5,
                             *(uint *)(iVar3 + 0x10) - uVar5,0xffffffff);
        if ((iVar4 != 0) && (local_30 = 1, *(int *)(*(int *)(param_3 + 0xd8) + 0x10) != 0)) {
          iVar4 = fn_004b616c(bVar1);
          piVar6 = *(int **)(iVar4 + 0x14);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x14))(piVar6,*(undefined4 *)(param_3 + 0xd8));
          }
          iVar4 = fn_004b616c(bVar1);
          piVar6 = *(int **)(iVar4 + 0x10);
          if (piVar6 != (int *)0x0) {
            local_28 = *(undefined4 *)(param_3 + 0xd8);
            (**(code **)(piVar6[4] + 8))();
            fn_004b5488(&local_50,2000);
            iVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,local_28,&local_50);
            fn_004b5540(local_28,&local_50);
            fn_0014f480(&local_50);
            (**(code **)(piVar6[4] + 0xc))(piVar6 + 4);
            if (iVar4 != 0) {
              return 0;
            }
          }
        }
      }
    }
    *(undefined1 *)(param_3 + 0x24) = 0;
    *(uint *)(iVar3 + 0x10) = uVar7;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar8;
    }
  }
  return local_30;
}



undefined4 fn_0046f744(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8c [4];
  undefined1 auStack_88 [16];
  int local_78;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_38 [8];
  undefined1 local_30 [12];
  
  uVar2 = *(ushort *)(param_2 + 0x3c) & 0xf;
  if (uVar2 == 7) {
    iVar3 = *(int *)(param_2 + 0xd8);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18),
                 *(undefined4 *)(iVar3 + 0x10),0xffffffff);
    *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(*(int *)(param_3 + 8) + 0x10);
    uVar4 = 1;
  }
  else {
    if (((uVar2 != 3) &&
        (iVar3 = fn_004b616c(*(byte *)(param_2 + 0x25) >> 4), *(char *)(iVar3 + 0x1c) != '\0')) ||
       ((((DAT_008b6393 != '\0' &&
          (((uVar2 = *(ushort *)(param_2 + 0x3c), (uVar2 & 0xf) == 2 &&
            (*(byte *)(param_2 + 0x25) >> 4 == 1)) && (DAT_008b6395 != '\0' || (uVar2 & 0x30) != 0))
          )) && (((DAT_008b6394 != '\0' && ((uVar2 & 0x10) == 0)) || ((uVar2 & 0x30) == 0)))) &&
        (*(char *)(param_2 + 0x131) == '\0')))) {
      *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) | 0x80;
    }
    local_90 = *(undefined1 *)(param_2 + 0x25);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_90,1,0xffffffff);
    local_90 = *(undefined1 *)(param_2 + 0x26);
    fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_90,1,0xffffffff);
    iVar3 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x3c,2,0xffffffff);
    uVar4 = 0;
    if (iVar3 != 0) {
      iVar3 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x65,1,0xffffffff);
      uVar4 = 0;
      if (iVar3 != 0) {
        if (*(int *)(param_2 + 0x38) == 0) {
          uVar8 = 0;
          do {
            local_38[0] = 0;
            fn_0015ef58(*(undefined4 *)(param_3 + 8),local_38,1,0xffffffff);
            uVar8 = uVar8 + 1;
          } while (uVar8 < 4);
        }
        else {
          iVar3 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x28,*(int *)(param_2 + 0x38),
                               0xffffffff);
          if (iVar3 == 0) {
            return 0;
          }
        }
        local_90 = (undefined1)*(undefined2 *)(param_2 + 0x44);
        local_8f = (undefined1)((ushort)*(undefined2 *)(param_2 + 0x44) >> 8);
        fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_90,2,0xffffffff);
        uVar2 = *(ushort *)(param_2 + 0x3c);
        bVar9 = (uVar2 & 0xf) != 0;
        if (bVar9) {
          uVar2 = uVar2 & 0xf;
        }
        if (!bVar9 || uVar2 == 1) {
          if (*(int *)(param_2 + 0x60) == 0) {
            uVar8 = 0;
            do {
              local_30[0] = 0;
              fn_0015ef58(*(undefined4 *)(param_3 + 8),local_30,1,0xffffffff);
              uVar8 = uVar8 + 1;
            } while (uVar8 < 4);
          }
          else {
            iVar3 = fn_0015ef58(*(undefined4 *)(param_3 + 8),param_2 + 0x50,
                                 *(int *)(param_2 + 0x60),0xffffffff);
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
        if ((*(ushort *)(param_2 + 0x3c) & 0xf) == 2) {
          local_90 = *(undefined1 *)(param_2 + 100);
          fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_90,1,0xffffffff);
        }
        iVar3 = *(int *)(param_3 + 8);
        bVar1 = *(byte *)(param_2 + 0x25) >> 4;
        if (*(int *)(param_2 + 0xd8) == 0) {
          if ((*(ushort *)(param_2 + 0x3c) & 0x80) != 0) {
            local_90 = 0;
            local_8f = 0;
            fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_90,2,0xffffffff);
          }
        }
        else {
          iVar5 = fn_004b616c(bVar1);
          piVar6 = *(int **)(iVar5 + 0x10);
          fn_004b5488(auStack_88,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0x40);
          if (piVar6 == (int *)0x0) {
            puVar7 = *(undefined1 **)(param_2 + 0xd8);
          }
          else {
            iVar5 = *(int *)(param_2 + 0xd8);
            (**(code **)(piVar6[4] + 8))();
            (**(code **)(*piVar6 + 8))(piVar6,iVar5,auStack_88);
            piVar6[2] = *(int *)(iVar5 + 0x10) + piVar6[2];
            piVar6[3] = local_78 + piVar6[3];
            (**(code **)(piVar6[4] + 0xc))(piVar6 + 4);
            puVar7 = auStack_88;
          }
          iVar5 = fn_004b616c(bVar1);
          piVar6 = *(int **)(iVar5 + 0x14);
          fn_004b5488(auStack_68,*(undefined4 *)(puVar7 + 0x10));
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))(piVar6,puVar7,auStack_68);
            puVar7 = auStack_68;
          }
          if ((*(ushort *)(param_2 + 0x3c) & 0x80) != 0) {
            local_48 = (undefined1)*(undefined4 *)(puVar7 + 0x10);
            local_47 = (undefined1)((uint)*(undefined4 *)(puVar7 + 0x10) >> 8);
            fn_0015ef58(*(undefined4 *)(param_3 + 8),&local_48,2,0xffffffff);
          }
          fn_0015ef58(*(undefined4 *)(param_3 + 8),*(int *)(puVar7 + 0x18) + *(int *)(puVar7 + 0xc)
                       ,*(undefined4 *)(puVar7 + 0x10),0xffffffff);
          fn_0014f480(auStack_68);
          fn_0014f480(auStack_88);
        }
        iVar5 = fn_004b616c(bVar1);
        local_8c[0] = fn_004b5324(iVar3,*(undefined4 *)(iVar3 + 0x10),*(undefined1 *)(iVar5 + 8));
        fn_0015ef58(iVar3,local_8c,1,0xffffffff);
        *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)(*(int *)(param_3 + 8) + 0x10);
        return 1;
      }
    }
  }
  return uVar4;
}


