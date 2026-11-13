#include "005da0c0_005daf2c.h"



void fn_005daf2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dafb8(iVar1,param_1);
  return;
}



void fn_005daed8(int param_1)

{
  fn_00788fb0(param_1 + 0x20);
  fn_00788fb0(param_1 + 0x2c);
  fn_00788fb0(param_1 + 0x38);
  return;
}



void fn_005daecc(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0xc) = param_3;
  return;
}



void fn_005dae7c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_c;
  int iStack_8;
  
  uVar2 = param_3 - 1U & 0xff;
  uStack_c = param_2;
  iStack_8 = param_3;
  if (uVar2 == 0) {
    fn_00788fe8(param_1 + 0x20,&uStack_c,param_3,param_4,param_1);
    return;
  }
  if (uVar2 == 1) {
    iVar1 = param_1 + 0x2c;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    iVar1 = param_1 + 0x38;
  }
  fn_00788fe8(iVar1,&uStack_c,param_3,param_4,param_1);
  return;
}



void fn_005da524(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  
  if ((char)param_1[3] == '\x03') {
    bVar6 = param_2 == 0;
    if (-1 < param_2) {
      bVar6 = *(char *)(param_1[0x17] + 0x31) == '\0';
    }
    if (bVar6) {
      iVar1 = fn_0074919c(param_1,param_2);
      if (iVar1 == 0) {
        fn_0068ab44(param_1,0x100094d);
        return;
      }
      param_1[0x48] = param_2;
      if (param_1[0x43] == 5) {
        if (param_2 == 0) {
          iVar1 = (**(code **)(*param_1 + 0x164))(param_1);
          if (iVar1 != 0) {
            *(undefined1 *)(param_1[0x3d] + 0x8e4) = 1;
            uVar5 = param_1[0x48];
            if ((uint)(param_1[0x38] - param_1[0x37] >> 4) <= uVar5) {
              fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar5);
            }
            uVar2 = *(undefined4 *)(param_1[0x37] + uVar5 * 0x10 + 8);
            puVar3 = (undefined4 *)fn_001f74ec(param_1,uVar2);
            if (puVar3 != (undefined4 *)0x0) {
              puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
              do {
                if (puVar4 == &DAT_00894694) goto LAB_005da680;
                puVar4 = (undefined4 *)*puVar4;
              } while (puVar4 != (undefined4 *)0x0);
            }
            puVar3 = (undefined4 *)0x0;
LAB_005da680:
            puVar3[3] = 8;
            puVar3[4] = 0xe0;
            puVar3[5] = 0xe0;
            puVar3[6] = param_1[0x3f];
            fn_006899f4(param_1,uVar2,1);
            (**(code **)(*param_1 + 0x13c))(param_1,uVar2);
            param_1[0x45] = 0x11;
            fn_0068ab44(param_1,0x100094b);
            return;
          }
        }
        else {
          if (param_2 == 1) {
            *(undefined4 *)(param_1[0x17] + 0x38) = 0;
            uVar2 = fn_0022f584((char *)&DAT_005da75c);
            fn_007491f0(param_1,uVar2);
            param_1[0x4d] = 0xf;
            param_1[0x45] = 8;
            fn_0068ab44(param_1,0x100094b);
            return;
          }
          if (param_2 == 2) {
            fn_003f71d0(*(undefined4 *)(param_1[0x3c] + 0x40),8);
            *(undefined4 *)(param_1[0x17] + 0x38) = 0;
            uVar2 = fn_0022f584((char *)&DAT_005da734);
            fn_007491f0(param_1,uVar2);
            param_1[0x45] = 6;
            fn_0068ab44(param_1,0x100094c);
            return;
          }
        }
      }
    }
  }
  return;
}



void fn_005da4f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x140,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dae08(iVar1,param_1);
  return;
}



void fn_005dae08(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00444384(param_1,param_2,(char *)&DAT_005dae5c,0xdf,0);
  *puVar1 = &DAT_0084d064;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  *(undefined1 *)(puVar1 + 0x4c) = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  puVar1[0x4f] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  return;
}



void fn_005da390(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_20;
  undefined1 auStack_1c [8];
  
  if (0 < param_1[0x4d]) {
    return;
  }
  if (param_1[0x4a] == 0) {
    iVar2 = param_1[0x4f];
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        param_1[0x4b] = 3;
      }
      else {
        if (iVar2 == 4) {
          iVar2 = 5;
        }
        else if (iVar2 == 6) {
          iVar2 = 7;
        }
        param_1[0x4b] = iVar2;
      }
      param_1[0x45] = 3;
      return;
    }
    iVar2 = param_1[0x3d];
    iVar4 = 0;
    do {
      fn_0020bbc4(&local_20,iVar2 + iVar4 * 0xf0 + 0x520);
      iVar3 = fn_006bf198(auStack_1c);
      if (iVar3 != 0) {
        fn_0020b8b8(&local_20);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    uVar5 = param_1[0x48];
    uVar1 = param_1[0x38] - param_1[0x37] >> 4;
    if (uVar1 <= uVar5) {
      local_20 = uVar1;
      fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar5);
    }
    uVar6 = *(undefined4 *)(param_1[0x37] + uVar5 * 0x10 + 8);
    fn_006899f4(param_1,uVar6,1);
    (**(code **)(*param_1 + 0x13c))(param_1,uVar6);
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    fn_00689bd0(param_1,0,0,0);
    iVar2 = 0x11;
  }
  else {
    param_1[0x4b] = param_1[0x4a];
    iVar2 = 3;
  }
  param_1[0x45] = iVar2;
  return;
}



undefined1 fn_005da0c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  uVar1 = (**(code **)**(undefined4 **)(param_1 + 0xfc))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0xfc) + 4))();
  piVar3 = (int *)fn_006c7770(*(undefined4 *)(param_1 + 0x100),uVar1);
  piVar4 = (int *)fn_006c7770(*(undefined4 *)(param_1 + 0x100),uVar2);
  iVar7 = 4;
  iVar11 = 0;
  piVar5 = piVar3;
  do {
    iVar8 = *piVar5;
    piVar5 = piVar5 + 0x3c;
    if (iVar8 != 0) {
      iVar11 = iVar11 + 1;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 4;
  iVar8 = 0;
  piVar5 = piVar4;
  do {
    iVar9 = *piVar5;
    piVar5 = piVar5 + 0x3c;
    if (iVar9 != 0) {
      iVar8 = iVar8 + 1;
    }
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  uVar12 = iVar11 == 0 && iVar8 == 0;
  iVar9 = *(int *)(*(int *)(param_1 + 0xf4) + 0x8ec);
  if (iVar11 != 0 || iVar8 != 0) {
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        iVar6 = fn_0024e350(piVar3 + iVar10 * 0x3c);
        if (iVar6 != 0) {
          return 2;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    iVar10 = 0;
    if (0 < iVar8) {
      do {
        iVar6 = fn_0024e350(piVar4 + iVar10 * 0x3c);
        if (iVar6 != 0) {
          return 3;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
    fn_00246e68(auStack_34);
    fn_00246e00(auStack_34);
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        fn_0020bbc4(auStack_30,piVar3 + iVar10 * 0x3c);
        fn_006bfdb4(auStack_2c,&local_50,0xc);
        iVar6 = fn_006b5424(auStack_34,&local_50);
        if (iVar6 != 0) {
          fn_00246e74(auStack_34);
          return 6;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    fn_00246e74(auStack_34);
    fn_00246e68(auStack_30);
    fn_00246e00(auStack_30);
    iVar10 = 0;
    if (0 < iVar8) {
      do {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        fn_0020bbc4(auStack_38,piVar4 + iVar10 * 0x3c);
        fn_006bfdb4(auStack_34,&local_50,0xc);
        iVar6 = fn_006b5424(auStack_30,&local_50);
        if (iVar6 != 0) {
          fn_00246e74(auStack_30);
          return 7;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar8);
    }
    fn_00246e74(auStack_30);
    if (500 - iVar7 < iVar8) {
      uVar12 = 4;
    }
    else if (500 - iVar9 < iVar11) {
      uVar12 = 5;
    }
  }
  return uVar12;
}


