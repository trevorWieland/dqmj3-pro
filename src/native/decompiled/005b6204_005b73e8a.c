#include "005b6204_005b73e8a.h"



undefined4 fn_005b6c20(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  uVar1 = fn_004144c4();
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_00890b2c) goto LAB_005b6c80;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005b6c80:
  *(undefined4 **)(param_1 + 0x134) = puVar3;
  *(undefined1 *)(param_1 + 0x150) = 1;
  return uVar1;
}



void fn_005b6bec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d9bb0();
  puVar1[0x37] = 0;
  *puVar1 = &DAT_008485f8;
  puVar1[0x38] = 0;
  return;
}



void fn_005b6754(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  fn_006e9c1c();
  iVar1 = fn_006ba220(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      fn_006ba284(param_1);
                    /* WARNING: Subroutine does not return */
      fn_006ba250(param_1);
    }
    uVar2 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         (char *)&DAT_005b6520);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    fn_005d9ae4(param_1,2);
    return;
  }
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar3 == &DAT_00890b20) break;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  fn_006ba284(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005b6644(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  fn_002c3d68();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b20) goto LAB_005b6694;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b6694:
  iVar4 = puVar1[0x4a];
  if ((iVar4 != 0xd5) && (iVar4 == 0xd6)) {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00890b08) {
          puVar3 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    fn_00601670(puVar3);
  }
  fn_006899f4(param_1,iVar4,0,1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005b64b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                       (char *)&DAT_005b6520);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_005d9ae4(param_1,2);
  return;
}



void fn_005b6204(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  uint local_28;
  
  uVar3 = *(uint *)(param_1 + 0xc0);
  uVar4 = *(uint *)(param_1 + 0xc4);
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 8;
      } while (uVar1 != uVar4);
    }
    *(uint *)(param_1 + 0xc4) = uVar4 - (uVar4 - uVar3 & 0xfffffff8);
  }
  local_30 = 0;
  local_2f = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    do {
      puVar5 = (uint *)(param_1 + 0xc0);
      uVar3 = *(uint *)(param_1 + 0xc4);
      if (uVar3 == *(uint *)(param_1 + 200)) {
        uVar4 = (int)(uVar3 - *puVar5) >> 3;
        if (uVar4 < (uint)((int)(*(uint *)(param_1 + 200) - *puVar5) >> 3)) {
          *(uint *)(param_1 + 0xc4) = uVar3 + 8;
          if (uVar3 != 0) {
            fn_00166824(uVar3,uVar3 - 8);
          }
          uVar1 = uVar3 - 8;
          uVar4 = uVar3;
          if (uVar3 < uVar1) {
            iVar7 = uVar1 - uVar3;
            if (0 < iVar7) {
              uVar2 = uVar1;
              if (iVar7 * 0x10000000 < 0) {
                uVar2 = uVar3 - 0x10;
                fn_00166824(uVar1,uVar2);
                uVar4 = uVar1;
              }
              for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
                fn_00166824(uVar4 - 8,uVar2 - 8);
                uVar4 = uVar4 - 0x10;
                uVar2 = uVar2 - 0x10;
                fn_00166824();
              }
            }
          }
          else {
            while (uVar3 != uVar1) {
              uVar1 = uVar1 - 8;
              fn_00166824(uVar4 - 8,uVar1);
              uVar4 = uVar4 - 8;
            }
          }
          goto LAB_005b6374;
        }
        local_28 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_28 < uVar4 + 0x20) {
          local_28 = uVar4 + 0x20;
        }
        uVar2 = fn_00100fc6(local_28 << 3,0);
        uVar1 = uVar2;
        for (uVar4 = *puVar5; uVar4 != uVar3; uVar4 = uVar4 + 8) {
          if (uVar1 != 0) {
            fn_00166824(uVar1,uVar4);
          }
          uVar1 = uVar1 + 8;
        }
        iVar7 = (uVar3 - *puVar5 & 0xfffffff8) + uVar2;
        if (iVar7 != 0) {
          fn_00166824(iVar7,&local_30);
        }
        uVar4 = *(uint *)(param_1 + 0xc4);
        iVar7 = (uVar3 - *puVar5 & 0xfffffff8) + uVar2;
        for (; uVar3 != uVar4; uVar3 = uVar3 + 8) {
          iVar7 = iVar7 + 8;
          if (iVar7 != 0) {
            fn_00166824(iVar7,uVar3);
          }
        }
        uVar4 = *puVar5;
        uVar1 = *(uint *)(param_1 + 0xc4);
        uVar3 = uVar4;
        if (uVar1 < uVar4) {
          do {
            uVar3 = uVar3 + 8;
          } while (uVar3 != uVar1);
        }
        fn_001008c4(uVar4,(int)(*(int *)(param_1 + 200) - uVar4) >> 3,0);
        *puVar5 = uVar2;
        *(uint *)(param_1 + 0xc4) = uVar2 + ((int)(uVar1 - uVar4) >> 3) * 8 + 8;
        *(uint *)(param_1 + 200) = uVar2 + local_28 * 8;
      }
      else {
        *(uint *)(param_1 + 0xc4) = uVar3 + 8;
        if (uVar3 != 0) {
LAB_005b6374:
          fn_00166824(uVar3,&local_30);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0xd0));
  }
  return;
}


