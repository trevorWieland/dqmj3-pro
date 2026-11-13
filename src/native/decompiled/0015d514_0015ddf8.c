#include "0015d514_0015ddf8.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


int fn_0015ddf8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  local_18 = 0;
  iVar1 = fn_0017c354(&DAT_008f3270,&local_18,0,0x40);
  if (-1 < iVar1) {
    iVar1 = 3;
    do {
      if ((*(uint *)(&DAT_008f3270 + iVar1 * 0x10) & 0xff) == 0) {
        DAT_008f314c = '\0';
        fn_0017d77c(&DAT_008f314c,&DAT_008f3270 + iVar1 * 0x10,0xf);
        if (DAT_008f314c == *(char *)(iVar1 * 0x10 + 0x8f327f)) {
          iVar1 = iVar1 * 0x10;
          puVar2 = (undefined4 *)(&DAT_008f3270 + iVar1);
          if (puVar2 != (undefined4 *)0x0) {
            *(ushort *)(param_1 + 2) = (ushort)((uint)*puVar2 >> 8) & 0xfff;
            *(ushort *)((int)param_1 + 10) = (ushort)((uint)*puVar2 >> 0x14);
            *param_1 = *(undefined4 *)(iVar1 + 0x8f3274);
            uVar3 = *(undefined4 *)(iVar1 + 0x8f3278);
            goto LAB_0015dea4;
          }
          break;
        }
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar1 = fn_00170218(param_1);
    if (iVar1 < 0) {
      uVar3 = 0x3f800000;
      *(undefined2 *)(param_1 + 2) = 0x800;
      *(undefined2 *)((int)param_1 + 10) = 0x800;
      *param_1 = 0x3f800000;
LAB_0015dea4:
      param_1[1] = uVar3;
    }
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_0015d514(uint param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  uint uVar6;
  uint in_stack_00000000;
  undefined4 *puVar7;
  ushort local_c0;
  ushort local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac;
  byte local_ab;
  int local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  ushort local_8c;
  ushort local_8a;
  uint local_88;
  uint local_84;
  uint local_80;
  byte local_7c;
  byte local_7b;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_64;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [8];
  uint local_40 [3];
  ushort local_34;
  ushort local_32;
  ushort local_30;
  undefined2 local_2e;
  undefined4 local_2c [2];
  
  local_a8 = 0;
  DAT_008c078a = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_54 = 0;
  fn_0017ca80(&local_78);
  fn_0017ca80(&local_74,0);
  fn_0017c3e4(&local_78);
  fn_00170048(&local_74);
  local_a4 = (in_stack_00000000 & 0xffffff) >> 0x10;
  local_64 = (param_1 & 0xffff) >> 8;
  bVar2 = true;
  local_6c = 1;
  local_9c = (param_1 & 0xffffff) >> 0x10;
  local_60 = local_64 * 3 >> 1;
  do {
    uVar5 = local_74;
    if (((int)local_a4 <= local_a8) || (DAT_008c078d != '\0')) {
      if ((int)local_a4 <= local_a8) {
        DAT_008c07e8 = 5;
        fn_0015dfc0(&DAT_008c07b4);
        if ((0 < DAT_008c07a4) && (iVar3 = fn_0015f738(0x215,0), iVar3 == -0x279f9bf8)) {
          fn_00123b08(0xd8606408,0x15d7a8);
        }
      }
      if (local_74 != 0) {
        svc_0x23();
      }
      if (local_78 != 0) {
        svc_0x23();
      }
      return 1;
    }
    if (DAT_008c078b == '\0') {
LAB_0015d5f4:
      iVar3 = fn_0017c84c(&DAT_008c078e,3);
      if (iVar3 < 0) {
        DAT_008c078b = '\0';
        if (local_74 != 0) {
          svc_0x23();
        }
joined_r0x0015d634:
        if (local_78 != 0) {
          svc_0x23();
        }
        return 0;
      }
      DAT_008c078b = '\x01';
    }
    else {
      svc_0x24();
      if ((int)local_74 < 0) {
        fn_0015e294(local_74,local_a8,0,0);
      }
      if ((uVar5 & 0x3ff) != 0x3fe) goto LAB_0015d5f4;
    }
    fn_001704b0();
    if (local_6c != 0) {
      local_6c = 0;
      svc_0x28();
      local_58 = 0;
      uStack_54 = extraout_r1;
    }
LAB_0015d670:
    if (DAT_008c078c != '\0') {
      fn_0017008c(&DAT_008c0798,&local_58,&local_70,local_64);
    }
    uVar5 = local_78;
    iVar3 = ((int)local_60 >> 0x1f) * 1000000 + (int)((ulonglong)local_60 * 1000000 >> 0x20);
    svc_0x24();
    if ((int)local_78 < 0) {
      fn_0015e294(local_78,iVar3,(int)((ulonglong)local_60 * 1000000),iVar3);
    }
    if ((uVar5 & 0x3ff) != 0x3fe) {
      fn_0017c8dc(auStack_48,6,&local_50,&local_4c,0);
      if (local_50 != 0) {
        local_a8 = 0;
        do {
          if (local_50 != 6) {
            if (local_74 != 0) {
              svc_0x23();
            }
            goto joined_r0x0015d634;
          }
          puVar7 = (undefined4 *)&DAT_008525b0;
          fn_0019bc50(&local_c0,auStack_48);
          uVar5 = local_74;
          if ((char)local_c0 == '\x10') {
            local_8c = local_c0 >> 8 | (local_be & 0xf) << 8;
            local_8a = local_be >> 4 & 0xf | (local_be >> 8) << 4;
            if ((local_bc & 0x80) == 0) {
              uVar6 = 2;
            }
            else {
              uVar6 = 0;
            }
            if ((local_bc & 0x40) == 0) {
              uVar4 = 4;
            }
            else {
              uVar4 = 0;
            }
            local_7c = (byte)local_bc & 0x1f;
            local_88 = uVar4 | uVar6 | ~(uint)((byte)local_bc >> 5) & 1;
            local_7b = 1;
            DAT_008c078a = ((unsigned int)(local_bc) >> 8) & 0xff;
            local_84 = (local_88 ^ DAT_008c079c) & ~DAT_008c079c;
            local_80 = DAT_008c079c & ~local_88;
            DAT_008c079c = local_88;
            if (((unsigned int)(local_bc) >> 8) & 0xff <= local_9c) {
              if (DAT_008c078b == '\0') {
LAB_0015d8d4:
                iVar3 = fn_0017c84c(&DAT_008c078e,3);
                if (iVar3 < 0) {
                  DAT_008c078b = '\0';
                  if (local_74 != 0) {
                    svc_0x23();
                  }
                  goto joined_r0x0015d634;
                }
                DAT_008c078b = '\x01';
              }
              else {
                svc_0x24();
                if ((int)local_74 < 0) {
                  fn_0015e294();
                }
                if ((uVar5 & 0x3ff) != 0x3fe) goto LAB_0015d8d4;
              }
              fn_001704b0();
            }
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef42c);
            } while (!bVar1);
            DAT_008ef42c = local_8c;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef42e);
            } while (!bVar1);
            DAT_008ef42e = local_8a;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef418);
            } while (!bVar1);
            DAT_008ef418 = local_88;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef41c);
            } while (!bVar1);
            DAT_008ef41c = local_84;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef420);
            } while (!bVar1);
            DAT_008ef420 = local_80;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef424);
            } while (!bVar1);
            DAT_008ef424 = local_7c;
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef425);
            } while (!bVar1);
            DAT_008ef425 = local_7b;
            fn_00170308(&local_30,&local_8c);
            uVar5 = extraout_r1_00;
            if (DAT_008ef504 != '\x01') {
              uVar5 = (uint)DAT_008ef505;
            }
            if (DAT_008ef504 == '\x01' || uVar5 == 0) {
              if (0xf < local_7c) goto LAB_0015da88;
LAB_0015da90:
              local_ac = '\0';
            }
            else if (DAT_008ef504 == '\0') {
              if (local_7c < 0x11) goto LAB_0015da90;
LAB_0015da88:
              local_ac = '\x01';
            }
            else {
              local_ac = '\0';
            }
            local_98 = 0xffffffff;
            local_94 = 0xffffffff;
            local_90 = 0;
            local_2c[0] = 0xffffffff;
            iVar3 = fn_0013cc8c();
            puVar7 = local_2c;
            fn_0015097c(*(undefined4 *)(iVar3 + 4),local_40,1,&local_90,&local_98,puVar7);
            if (local_90 < 1) {
              local_c0 = 0;
              local_be = 0;
              local_b8 = 0;
            }
            else {
              local_c0 = local_34;
              local_be = local_32;
              local_b8 = local_40[0];
            }
            local_bc = local_30;
            local_ba = local_2e;
            local_ab = local_7b;
            if ((local_88 & 4) != 0) {
              local_b8 = local_b8 | 0x8000;
            }
            if ((local_88 & 1) != 0) {
              local_b8 = local_b8 | 0x4000;
            }
            if ((local_88 & 2) != 0) {
              local_b8 = local_b8 | 0x100;
            }
            local_b8 = fn_00170584(&local_30,local_b8);
            local_b4 = (local_b8 ^ DAT_008ef4f8) & ~DAT_008ef4f8;
            local_b0 = DAT_008ef4f8 & ~local_b8;
            DAT_008ef4f0 = local_c0;
            DAT_008ef4f2 = local_be;
            DAT_008ef4f4 = local_bc;
            DAT_008ef4f6 = local_ba;
            DAT_008ef504 = local_ac;
            DAT_008ef505 = local_ab;
            if (DAT_008ef410 == 7) {
              DAT_008ef410 = 0;
            }
            else {
              DAT_008ef410 = DAT_008ef410 + 1;
            }
            iVar3 = DAT_008ef410 * 0x18;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef430 + DAT_008ef410 * 6);
            } while (!bVar1);
            DAT_008ef4f8 = local_b8;
            DAT_008ef4fc = local_b4;
            DAT_008ef500 = local_b0;
            (&DAT_008ef430)[DAT_008ef410 * 6] = local_b8;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef434 + DAT_008ef410 * 6);
            } while (!bVar1);
            (&DAT_008ef434)[DAT_008ef410 * 6] = local_b4;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef438 + iVar3);
            } while (!bVar1);
            *(uint *)(&DAT_008ef438 + iVar3) = local_b0;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef43c + iVar3);
            } while (!bVar1);
            (&DAT_008ef43c)[iVar3] = local_ac;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef43d + iVar3);
            } while (!bVar1);
            (&DAT_008ef43d)[iVar3] = local_ab;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef440 + iVar3);
            } while (!bVar1);
            *(ushort *)(&DAT_008ef440 + iVar3) = local_c0;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef442 + iVar3);
            } while (!bVar1);
            *(ushort *)(&DAT_008ef442 + iVar3) = local_be;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef444 + iVar3);
            } while (!bVar1);
            *(ushort *)(&DAT_008ef444 + iVar3) = local_bc;
            do {
              bVar1 = (bool)hasExclusiveAccess(&DAT_008ef446 + iVar3);
            } while (!bVar1);
            *(undefined2 *)(&DAT_008ef446 + iVar3) = local_ba;
            coproc_moveto_Data_Synchronization(0);
            do {
              bVar1 = (bool)hasExclusiveAccess(0x8ef410);
            } while (!bVar1);
            if (DAT_008ef410 == 0) {
              DAT_008ef408 = DAT_008ef400;
              DAT_008ef40c = DAT_008ef404;
              coproc_moveto_Data_Synchronization(0);
              svc_0x28();
              do {
                bVar1 = (bool)hasExclusiveAccess(0x8ef400);
              } while (!bVar1);
            }
            if (bVar2) {
              DAT_008c07e8 = 4;
              fn_0015dfc0(&DAT_008c07b4);
              bVar2 = false;
              if ((0 < DAT_008c07a4) && (iVar3 = fn_0015f738(0x215,0), iVar3 == -0x279f9bf8)) {
                fn_00123b08(0xd8606408,0x15dd1c);
              }
            }
            if ((0 < DAT_008c07a0) && (iVar3 = fn_0015f738(0x216,0), iVar3 == -0x279f9bf8)) {
              fn_00123b08(0xd8606408,0x15dd4c);
            }
            local_70 = local_70 + 1;
          }
          if (local_4c < 1) break;
          fn_0017c8dc(auStack_48,6,&local_50,&local_4c,0,puVar7);
        } while( true );
      }
      goto LAB_0015d670;
    }
    local_a8 = local_a8 + 1;
  } while( true );
}


