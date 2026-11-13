#include "00316a3c_003173cc.h"



void fn_003173cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = fn_0033ca90(param_3);
  uVar4 = fn_002ea648();
  *(undefined4 *)(param_1 + 4) = uVar4;
  uVar1 = fn_002ea7f0(uVar3);
  *(undefined1 *)(param_1 + 0x26) = uVar1;
  uVar4 = fn_002ea824(uVar3);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  uVar2 = fn_002ea730(uVar3);
  *(undefined2 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar5 = fn_00363c3c(uVar3);
  *(uint *)(param_1 + 0x18) = (uint)uVar5 | 0x4000;
  *(int *)(param_1 + 0x1c) = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00317394) */
/* WARNING: Removing unreachable block (ram,0x003172f0) */
/* WARNING: Removing unreachable block (ram,0x0031737c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint fn_00317234(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  uVar2 = fn_0033ca90(param_3);
  uVar3 = fn_002ea7a8(uVar2,param_4);
  if (param_1 != 0) {
    uVar2 = fn_002ea244((int)(short)uVar3);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar4 = fn_002ea2b0((int)(short)uVar3);
    *(uint *)(param_1 + 0x18) = uVar4;
    iVar5 = 9999999;
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar1 = (int)param_2 >> 0x1f;
    local_30 = CONCAT44(((unsigned long long)(local_30) >> 32) & 0xffffffff,(int)local_30);
    if ((uVar3 < 10000000) &&
       (uVar9 = fn_00169c20(9999999 - uVar3,-(uint)(9999999 < uVar3),uVar3,0),
       uVar7 = (uint)((ulonglong)uVar9 >> 0x20), local_30 = CONCAT44(((unsigned long long)(local_30) >> 32) & 0xffffffff,(int)local_30),
       uVar1 < uVar7 || uVar7 - uVar1 < (uint)(param_2 <= (uint)uVar9))) {
      local_30 = uVar9;
      local_40 = param_2;
      uStack_3c = uVar1;
      local_38 = 0;
      local_34 = 0;
      puVar8 = &local_40;
      if (uVar7 <= uVar1 && (uint)(param_2 <= (uint)uVar9) <= uVar7 - uVar1) {
        puVar8 = (uint *)&local_30;
      }
      iVar5 = *puVar8 * uVar3 + uVar3;
    }
    iVar6 = 999999;
    *(int *)(param_1 + 0x14) = iVar5;
    uVar3 = -(uint)(999999 < uVar4);
    if ((999999 >= uVar4) &&
       (uVar9 = fn_00169c20(999999 - uVar4,-(uint)(999999 < uVar4),uVar4,0),
       uVar7 = (uint)((ulonglong)uVar9 >> 0x20), uVar3 = (uint)uVar9,
       uVar1 < uVar7 || uVar7 - uVar1 < (uint)(param_2 <= uVar3))) {
      local_30 = uVar9;
      local_38 = 0;
      local_34 = 0;
      local_40 = param_2;
      uStack_3c = uVar1;
      puVar8 = &local_40;
      if (uVar7 <= uVar1 && (uint)(param_2 <= uVar3) <= uVar7 - uVar1) {
        puVar8 = (uint *)&local_30;
      }
      uVar3 = *puVar8 * uVar4;
      iVar6 = uVar3 + uVar4;
    }
    *(int *)(param_1 + 0x18) = iVar6;
  }
  return uVar3;
}



undefined4 * fn_0031718c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0082298c;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return puVar1;
}



void fn_00316af0(int param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = fn_00316190();
  puVar6 = (undefined4 *)0x0;
  if (iVar2 == 0) {
    uVar4 = fn_0022f584((char *)&DAT_00316170,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  uVar5 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar2 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= param_2) {
    iVar2 = (int)((longlong)(int)uVar5 * -0x6db6db6d + ((ulonglong)uVar5 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,(iVar2 >> 4) - (iVar2 >> 0x1f));
  }
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c + 8);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_00890e84) goto LAB_00316bb4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_00316bb4:
  puVar7[2] = param_2;
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_00890e84) goto LAB_00316bf8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_00316bf8:
  *(undefined1 *)(puVar7 + 3) = 0xff;
  fn_006899f4(param_1,iVar2,0,1);
  if (iVar2 == 0xd5) {
    puVar7 = (undefined4 *)fn_001f74ec(param_1,0xd5);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890ac8) goto LAB_00316c94;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar7 = (undefined4 *)0x0;
LAB_00316c94:
    fn_005aa9bc(puVar7,0xd4);
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890e84) {
          puVar6 = puVar7;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    uVar1 = 0;
  }
  else if (iVar2 < 0xd6) {
    if (iVar2 != 0x50) {
      if (iVar2 == 0x51) {
        puVar7 = (undefined4 *)fn_001f74ec(param_1,0x51);
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar3 == &DAT_008944a8) goto LAB_00316e84;
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        puVar7 = (undefined4 *)0x0;
LAB_00316e84:
        puVar7[2] = 0xd4;
        *(undefined1 *)(puVar7 + 3) = 1;
        puVar7 = *(undefined4 **)(param_1 + 0x18);
        if (puVar7 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
          do {
            if (puVar3 == &DAT_00890e84) {
              puVar6 = puVar7;
              break;
            }
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        *(undefined1 *)(puVar6 + 3) = 4;
      }
      goto LAB_00316ed4;
    }
    puVar7 = (undefined4 *)fn_001f74ec(param_1,0x50);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_008944b4) goto LAB_00316dec;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar7 = (undefined4 *)0x0;
LAB_00316dec:
    *(undefined1 *)(puVar7 + 2) = 0;
    puVar7[4] = 0xd4;
    puVar7[5] = 0xd4;
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890e84) {
          puVar6 = puVar7;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    uVar1 = 3;
  }
  else if (iVar2 == 0xdc) {
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890e84) {
          puVar6 = puVar7;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    uVar1 = 2;
  }
  else {
    if (iVar2 != 0xe0) goto LAB_00316ed4;
    puVar7 = (undefined4 *)fn_001f74ec(param_1,0xe0);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890bf0) goto LAB_00316d24;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar7 = (undefined4 *)0x0;
LAB_00316d24:
    fn_005aa9bc(puVar7,0xd4);
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_00890e84) {
          puVar6 = puVar7;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    uVar1 = 1;
  }
  *(undefined1 *)(puVar6 + 3) = uVar1;
LAB_00316ed4:
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00316a3c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00890e84) goto LAB_00316a80;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00316a80:
  fn_003f01a8(puVar2);
  fn_006899f4(param_1,0,1);
  fn_00689878(param_1,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}


