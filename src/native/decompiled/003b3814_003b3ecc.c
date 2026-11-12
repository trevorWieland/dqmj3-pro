#include "003b3814_003b3ecc.h"



void fn_003b3ecc(int param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  undefined2 local_80;
  undefined2 local_7e;
  float local_7c;
  undefined2 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  fn_00301f50(&local_80,0x5c);
  local_80 = *param_2;
  puVar6 = (uint *)(param_1 + 0x14);
  local_7e = param_2[1];
  local_7c = (float)VectorSignedToFloat((int)(short)param_2[2],(byte)(in_fpscr >> 0x16) & 3);
  local_7c = local_7c * 0.001;
  local_78 = param_2[3];
  local_74 = *(undefined4 *)(param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 6);
  local_6c = *(undefined4 *)(param_2 + 8);
  uStack_68 = *(undefined4 *)(param_2 + 10);
  local_64 = *(undefined4 *)(param_2 + 0xc);
  uStack_60 = *(undefined4 *)(param_2 + 0xe);
  local_5c = *(undefined4 *)(param_2 + 0x10);
  uStack_58 = *(undefined4 *)(param_2 + 0x12);
  local_54 = *(undefined4 *)(param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 0x16);
  local_4c = *(undefined4 *)(param_2 + 0x18);
  uStack_48 = *(undefined4 *)(param_2 + 0x1a);
  local_44 = *(undefined4 *)(param_2 + 0x1c);
  uStack_40 = *(undefined4 *)(param_2 + 0x1e);
  local_3c = *(undefined4 *)(param_2 + 0x20);
  uStack_38 = *(undefined4 *)(param_2 + 0x22);
  local_34 = *(undefined4 *)(param_2 + 0x24);
  uStack_30 = *(undefined4 *)(param_2 + 0x26);
  local_2c = *(undefined4 *)(param_2 + 0x28);
  uStack_28 = *(undefined4 *)(param_2 + 0x2a);
  uVar1 = *puVar6;
  puVar7 = (uint *)(param_1 + 0x10);
  if (uVar1 == *(uint *)(param_1 + 0x18)) {
    uVar3 = *(uint *)(param_1 + 0x18) - *puVar7;
    iVar4 = (int)((longlong)(int)uVar3 * -0x4de9bd37 + ((ulonglong)uVar3 << 0x20) >> 0x20);
    uVar3 = uVar1 - *puVar7;
    iVar5 = (int)((longlong)(int)uVar3 * -0x4de9bd37 + ((ulonglong)uVar3 << 0x20) >> 0x20);
    if ((uint)((iVar4 >> 6) - (iVar4 >> 0x1f)) <= (uint)((iVar5 >> 6) - (iVar5 >> 0x1f))) {
      iVar4 = (int)((longlong)(int)uVar3 * -0x4de9bd37 + ((ulonglong)uVar3 << 0x20) >> 0x20);
      uVar9 = (iVar4 >> 6) - (iVar4 >> 0x1f);
      uVar3 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (uVar3 < uVar9 + 0x20) {
        uVar3 = uVar9 + 0x20;
      }
      uVar2 = fn_00100fc6(uVar3 * 0x5c,0);
      uVar8 = uVar2;
      for (uVar9 = *puVar7; uVar9 != uVar1; uVar9 = uVar9 + 0x5c) {
        if (uVar8 != 0) {
          fn_0017821c(uVar8,uVar9,0x5c);
        }
        uVar8 = uVar8 + 0x5c;
      }
      iVar4 = (int)((longlong)(int)(uVar1 - *puVar7) * -0x4de9bd37 +
                    ((ulonglong)(uVar1 - *puVar7) << 0x20) >> 0x20);
      iVar4 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x5c;
      if (iVar4 != 0) {
        fn_0017821c(iVar4,&local_80);
      }
      uVar9 = *puVar6;
      iVar4 = (int)((longlong)(int)(uVar1 - *puVar7) * -0x4de9bd37 +
                    ((ulonglong)(uVar1 - *puVar7) << 0x20) >> 0x20);
      iVar4 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x5c;
      for (; uVar1 != uVar9; uVar1 = uVar1 + 0x5c) {
        iVar4 = iVar4 + 0x5c;
        if (iVar4 != 0) {
          fn_0017821c(iVar4,uVar1,0x5c);
        }
      }
      uVar9 = *puVar7;
      uVar8 = *puVar6;
      iVar4 = (int)((longlong)(int)(uVar8 - uVar9) * -0x4de9bd37 +
                    ((ulonglong)(uVar8 - uVar9) << 0x20) >> 0x20);
      uVar1 = uVar9;
      if (uVar8 < uVar9) {
        do {
          uVar1 = uVar1 + 0x5c;
        } while (uVar1 != uVar8);
      }
      uVar1 = *(int *)(param_1 + 0x18) - uVar9;
      iVar5 = (int)((longlong)(int)uVar1 * -0x4de9bd37 + ((ulonglong)uVar1 << 0x20) >> 0x20);
      fn_001008c4(uVar9,(iVar5 >> 6) - (iVar5 >> 0x1f),0);
      *puVar7 = uVar2;
      *puVar6 = uVar2 + ((iVar4 >> 6) - (iVar4 >> 0x1f)) * 0x5c + 0x5c;
      *(uint *)(param_1 + 0x18) = uVar2 + uVar3 * 0x5c;
      return;
    }
    *puVar6 = uVar1 + 0x5c;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,uVar1 - 0x5c,0x5c);
    }
    uVar3 = uVar1 - 0x5c;
    uVar9 = uVar1;
    if (uVar1 < uVar3) {
      uVar9 = uVar3 - uVar1;
      if (0 < (int)uVar9) {
        iVar4 = (int)((longlong)(int)uVar9 * -0x4de9bd37 + ((ulonglong)uVar9 << 0x20) >> 0x20);
        uVar8 = uVar1;
        if (((iVar4 >> 6) - (iVar4 >> 0x1f) & 1U) != 0) {
          uVar3 = uVar1 - 0xb8;
          uVar8 = uVar1 - 0x5c;
          fn_0017821c(uVar8,uVar3,0x5c);
        }
        iVar4 = (int)((longlong)(int)uVar9 * -0x4de9bd37 + ((ulonglong)uVar9 << 0x20) >> 0x20);
        for (iVar4 = (iVar4 >> 6) - (iVar4 >> 0x1f) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          fn_0017821c(uVar8 - 0x5c,uVar3 - 0x5c,0x5c);
          uVar3 = uVar3 - 0xb8;
          uVar8 = uVar8 - 0xb8;
          fn_0017821c(uVar8,uVar3,0x5c);
        }
      }
    }
    else {
      while (uVar1 != uVar3) {
        uVar3 = uVar3 - 0x5c;
        fn_0017821c(uVar9 - 0x5c,uVar3,0x5c);
        uVar9 = uVar9 - 0x5c;
      }
    }
  }
  else {
    *puVar6 = uVar1 + 0x5c;
    if (uVar1 == 0) {
      return;
    }
  }
  fn_0017821c(uVar1,&local_80,0x5c);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003b3b48) */
/* WARNING: Removing unreachable block (ram,0x003b3b64) */
/* WARNING: Removing unreachable block (ram,0x003b3b18) */
/* WARNING: Removing unreachable block (ram,0x003b3b20) */
/* WARNING: Removing unreachable block (ram,0x003b3b2c) */
/* WARNING: Removing unreachable block (ram,0x003b3bbc) */
/* WARNING: Removing unreachable block (ram,0x003b3be8) */
/* WARNING: Removing unreachable block (ram,0x003b3b68) */
/* WARNING: Removing unreachable block (ram,0x003b3b70) */
/* WARNING: Removing unreachable block (ram,0x003b3b94) */
/* WARNING: Removing unreachable block (ram,0x003b3ba8) */

int fn_003b3814(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_13c [128];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  undefined1 auStack_b0 [128];
  uint local_30;
  uint local_2c;
  
  uVar9 = *(uint *)(param_1 + 0x1c);
  uVar5 = *(uint *)(param_1 + 0x20);
  puVar6 = (uint *)(param_1 + 0x1c);
  uVar1 = uVar5 - uVar9;
  iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
  local_30 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  uVar7 = local_30 + param_2;
  fn_00301f50(auStack_b0,0x7c);
  fn_0017821c(auStack_13c,auStack_b0,0x7c);
  iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
  if ((uint)((iVar2 >> 6) - (iVar2 >> 0x1f)) < uVar7) {
    iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
    uVar7 = uVar7 - ((iVar2 >> 6) - (iVar2 >> 0x1f));
    if (uVar7 != 0) {
      iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
      uVar9 = *(int *)(param_1 + 0x24) - uVar9;
      iVar3 = (int)((longlong)(int)uVar9 * -0x7bdef7bd + ((ulonglong)uVar9 << 0x20) >> 0x20);
      if ((uint)((iVar3 >> 6) - (iVar3 >> 0x1f)) < ((iVar2 >> 6) - (iVar2 >> 0x1f)) + uVar7) {
        iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
        iVar3 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
        local_b8 = ((iVar2 >> 6) - (iVar2 >> 0x1f)) + uVar7;
        uVar1 = (iVar3 >> 6) - (iVar3 >> 0x1f);
        local_b4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_b4 < uVar1 + 0x20) {
          local_b4 = uVar1 + 0x20;
        }
        puVar4 = &local_b8;
        if (local_b8 < local_b4) {
          puVar4 = &local_b4;
        }
        local_2c = *puVar4;
        uVar8 = fn_00100fc6(local_2c * 0x7c,0);
        uVar9 = uVar8;
        for (uVar1 = *puVar6; uVar1 != uVar5; uVar1 = uVar1 + 0x7c) {
          if (uVar9 != 0) {
            fn_0017821c(uVar9,uVar1,0x7c);
          }
          uVar9 = uVar9 + 0x7c;
        }
        iVar2 = (int)((longlong)(int)(uVar5 - *puVar6) * -0x7bdef7bd +
                      ((ulonglong)(uVar5 - *puVar6) << 0x20) >> 0x20);
        iVar2 = uVar8 + ((iVar2 >> 6) - (iVar2 >> 0x1f)) * 0x7c;
        for (uVar1 = uVar7; uVar1 != 0; uVar1 = uVar1 - 1) {
          if (iVar2 != 0) {
            fn_0017821c(iVar2,auStack_13c,0x7c);
          }
          iVar2 = iVar2 + 0x7c;
        }
        uVar1 = *(uint *)(param_1 + 0x20);
        iVar2 = (int)((longlong)(int)(uVar5 - *puVar6) * -0x7bdef7bd +
                      ((ulonglong)(uVar5 - *puVar6) << 0x20) >> 0x20);
        iVar2 = uVar8 + (((iVar2 >> 6) - (iVar2 >> 0x1f)) + uVar7) * 0x7c;
        for (; uVar5 != uVar1; uVar5 = uVar5 + 0x7c) {
          if (iVar2 != 0) {
            fn_0017821c(iVar2,uVar5,0x7c);
          }
          iVar2 = iVar2 + 0x7c;
        }
        uVar1 = *puVar6;
        uVar9 = *(uint *)(param_1 + 0x20);
        iVar2 = (int)((longlong)(int)(uVar9 - uVar1) * -0x7bdef7bd +
                      ((ulonglong)(uVar9 - uVar1) << 0x20) >> 0x20);
        uVar5 = uVar1;
        if (uVar9 < uVar1) {
          do {
            uVar5 = uVar5 + 0x7c;
          } while (uVar5 != uVar9);
        }
        uVar5 = *(int *)(param_1 + 0x24) - uVar1;
        iVar3 = (int)((longlong)(int)uVar5 * -0x7bdef7bd + ((ulonglong)uVar5 << 0x20) >> 0x20);
        fn_001008c4(uVar1,(iVar3 >> 6) - (iVar3 >> 0x1f),0);
        *puVar6 = uVar8;
        *(uint *)(param_1 + 0x20) = uVar8 + ((iVar2 >> 6) - (iVar2 >> 0x1f)) * 0x7c + uVar7 * 0x7c;
        *(uint *)(param_1 + 0x24) = uVar8 + local_2c * 0x7c;
      }
      else {
        uVar1 = uVar5 + uVar7 * 0x7c;
        *(uint *)(param_1 + 0x20) = uVar5 + uVar7 * 0x7c;
        if (uVar1 < uVar5) {
          uVar7 = uVar5 + uVar7 * -0x7c;
          uVar9 = uVar5;
          local_bc = uVar7;
          for (; uVar7 != uVar5; uVar7 = uVar7 + 0x7c) {
            if (uVar9 != 0) {
              fn_0017821c(uVar9,uVar7,0x7c);
            }
            uVar9 = uVar9 + 0x7c;
          }
          uVar9 = uVar5;
          uVar8 = local_bc;
          if (uVar5 < local_bc) {
            uVar7 = local_bc - uVar5;
            if (0 < (int)uVar7) {
              iVar2 = (int)((longlong)(int)uVar7 * -0x7bdef7bd + ((ulonglong)uVar7 << 0x20) >> 0x20)
              ;
              uVar9 = local_bc;
              uVar8 = uVar5;
              if (((iVar2 >> 6) - (iVar2 >> 0x1f) & 1U) != 0) {
                uVar9 = local_bc - 0x7c;
                uVar8 = uVar5 - 0x7c;
                fn_0017821c(uVar8,uVar9,0x7c);
              }
              iVar2 = (int)((longlong)(int)uVar7 * -0x7bdef7bd + ((ulonglong)uVar7 << 0x20) >> 0x20)
              ;
              for (iVar2 = (iVar2 >> 6) - (iVar2 >> 0x1f) >> 1; uVar7 = 0, iVar2 != 0;
                  iVar2 = iVar2 + -1) {
                fn_0017821c(uVar8 - 0x7c,uVar9 - 0x7c,0x7c);
                uVar8 = uVar8 - 0xf8;
                uVar9 = uVar9 - 0xf8;
                fn_0017821c(uVar8,uVar9,0x7c);
              }
            }
          }
          else {
            while (uVar5 != uVar8) {
              fn_0017821c(uVar9 - 0x7c,uVar8 - 0x7c,0x7c);
              uVar9 = uVar9 - 0x7c;
              uVar8 = uVar8 - 0x7c;
            }
          }
          if (uVar5 < uVar1) {
            uVar1 = uVar1 - uVar5;
            if (0 < (int)uVar1) {
              uVar7 = 0x84210843;
              iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20)
              ;
              if (((iVar2 >> 6) - (iVar2 >> 0x1f) & 1U) != 0) {
                fn_0017821c(uVar5,auStack_13c,0x7c);
                uVar5 = uVar5 + 0x7c;
              }
              iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20)
              ;
              for (iVar2 = (iVar2 >> 6) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                fn_0017821c(uVar5,auStack_13c,0x7c);
                fn_0017821c(uVar5 + 0x7c,auStack_13c,0x7c);
                uVar5 = uVar5 + 0xf8;
              }
            }
          }
          else {
            for (; uVar5 != uVar1; uVar5 = uVar5 + 0x7c) {
              fn_0017821c(uVar5,auStack_13c,0x7c);
            }
          }
        }
        else {
          for (; uVar7 != 0; uVar7 = uVar7 - 1) {
            if (uVar5 != 0) {
              fn_0017821c(uVar5,auStack_13c,0x7c);
            }
            uVar5 = uVar5 + 0x7c;
          }
          uVar7 = 0;
        }
      }
    }
  }
  else {
    iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
    if ((uVar7 < (uint)((iVar2 >> 6) - (iVar2 >> 0x1f))) &&
       (uVar1 = uVar9 + uVar7 * 0x7c, uVar9 != uVar5)) {
      uVar9 = uVar1;
      if (uVar5 < uVar1) {
        do {
          uVar9 = uVar9 + 0x7c;
        } while (uVar9 != uVar5);
      }
      iVar2 = (int)((longlong)(int)(uVar5 - uVar1) * -0x7bdef7bd +
                    ((ulonglong)(uVar5 - uVar1) << 0x20) >> 0x20);
      *(uint *)(param_1 + 0x20) = uVar5 + ((iVar2 >> 6) - (iVar2 >> 0x1f)) * -0x7c;
    }
  }
  uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar2 = (int)((longlong)(int)uVar5 * -0x7bdef7bd + ((ulonglong)uVar5 << 0x20) >> 0x20);
  uVar5 = local_30;
  if (local_30 < (uint)((iVar2 >> 6) - (iVar2 >> 0x1f))) {
    do {
      uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
      bVar10 = iVar2 >> 6 == iVar2 >> 0x1f;
      if (!bVar10) {
        uVar7 = *(int *)(param_1 + 0x1c) + uVar5 * 0x7c;
        bVar10 = uVar7 == 0;
      }
      if (!bVar10) {
        fn_00301f50(uVar7,0x7c);
        *(undefined1 *)(uVar7 + 0x29) = 0xff;
        *(undefined1 *)(uVar7 + 0x2a) = 0xff;
      }
      uVar5 = uVar5 + 1;
      uVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      iVar2 = (int)((longlong)(int)uVar1 * -0x7bdef7bd + ((ulonglong)uVar1 << 0x20) >> 0x20);
    } while (uVar5 < (uint)((iVar2 >> 6) - (iVar2 >> 0x1f)));
  }
  uVar5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
  iVar2 = (int)((longlong)(int)uVar5 * -0x7bdef7bd + ((ulonglong)uVar5 << 0x20) >> 0x20);
  return (iVar2 >> 6) - (iVar2 >> 0x1f);
}


