#include "003cf304_003d1908.h"

static void svc_0x3(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x3 }
#endif
}


void fn_003d1908(int param_1)

{
  uint in_fpscr;
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x7d) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
  }
  if (((*(int *)(param_1 + 0x68) <= *(int *)(param_1 + 0x6c)) || (*(char *)(param_1 + 0x7c) != '\0')
      ) || (*(int *)(DAT_0089780c + 0x14) != *(int *)(DAT_0089780c + 0xc))) {
    return;
  }
  iVar1 = VectorSignedToFloat(*(int *)(param_1 + 0x70),(byte)(in_fpscr >> 0x16) & 3);
  if (0x429fffff < iVar1) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    fn_003d10c4();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x70) = iVar1;
  iVar2 = VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  if (iVar2 < 0x42a00001) {
    VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fn_003d10c4();
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x50;
  fn_003d10c4();
  return;
}



/* WARNING: Removing unreachable block (ram,0x0052654c) */
/* WARNING: Removing unreachable block (ram,0x00526538) */
/* WARNING: Removing unreachable block (ram,0x0052653c) */
/* WARNING: Removing unreachable block (ram,0x00526550) */

uint fn_003cf304(uint param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x78);
  switch(uVar5) {
  case 1:
    if (*(char *)(param_1 + 0x84) == '\0') {
      if (*(int *)(param_1 + 0x9c) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_0011dda8();
      }
      uVar5 = *(int *)(param_1 + 0x9c) - 1;
      *(uint *)(param_1 + 0x9c) = uVar5;
    }
    else {
      *(undefined1 *)(param_1 + 0x84) = 0;
      fn_003ce684(param_1);
      uVar5 = *(uint *)(param_1 + 0x5c);
      *(undefined1 *)(uVar5 + 0x30) = 0;
    }
    break;
  case 2:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    iVar6 = fn_00335a7c(*(undefined4 *)(param_1 + 100));
    uVar4 = DAT_00898bd0;
    if (iVar6 == 0) {
      iVar6 = fn_00335cb4(*(undefined4 *)(param_1 + 100));
      uVar2 = DAT_00898bd0;
      uVar4 = DAT_00898bcc;
      if (iVar6 == 2) {
        *(undefined1 *)(param_1 + 0x79) = 0x12;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
        uVar4 = fn_0022f584(uVar2,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      }
      else {
        *(undefined1 *)(param_1 + 0x79) = 8;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
        uVar4 = fn_0022f584(uVar4,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 100) + 4);
      }
      *(undefined1 *)(param_1 + 0x78) = 6;
    }
    else if (iVar6 == 2) {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar4 = fn_0022f584(uVar4,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      *(undefined1 *)(param_1 + 0x78) = 6;
    }
    else if (*(char *)(param_1 + 0x78) == '\x02') {
      return 2;
    }
    uVar5 = fn_001076bc(8);
    return uVar5;
  case 3:
  case 4:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    uVar5 = fn_003cdf08(param_1);
    return uVar5;
  case 5:
    uVar5 = fn_006b7584(*(undefined4 *)(param_1 + 0x74));
    if ((1 < uVar5) && (uVar5 == 2)) {
      iVar6 = fn_006b7578(*(undefined4 *)(param_1 + 0x74));
      uVar3 = DAT_00898bfc;
      uVar2 = DAT_00898bf0;
      uVar4 = DAT_00898bbc;
      if (iVar6 == -6) {
        *(undefined1 *)(param_1 + 0x79) = 0x12;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
        uVar4 = fn_0022f584(uVar2,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      }
      else if (iVar6 == 0) {
        *(undefined1 *)(param_1 + 0x79) = 0xf;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000955;
        uVar4 = fn_0022f584(uVar4,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      }
      else {
        if (*(char *)(param_1 + 0x95) == '\0') {
          uVar4 = fn_006b7590(*(undefined4 *)(param_1 + 0x74));
          fn_001930b8();
          fn_0044d6e4(uVar4);
          fn_0026db48(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
          uVar4 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
          local_28 = 0;
          uStack_24 = 0;
          uVar5 = fn_0026e33c(*(undefined4 *)(param_1 + 0x70),uVar4,*(undefined4 *)(param_1 + 0x8c)
                               ,20000);
          *(uint *)(param_1 + 0x74) = uVar5;
          *(undefined1 *)(param_1 + 0x95) = 1;
          return uVar5;
        }
        *(undefined1 *)(param_1 + 0x79) = 0x12;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
        uVar4 = fn_0022f584(uVar3,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
      }
      fn_0026d6bc(*(undefined4 *)(param_1 + 0x70));
      uVar5 = fn_001076bc(8);
      *(undefined1 *)(param_1 + 0x78) = 6;
      return uVar5;
    }
    break;
  case 6:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    uVar5 = *(int *)(param_1 + 0x7c) + 1;
    *(uint *)(param_1 + 0x7c) = uVar5;
    if (0x3b < (int)uVar5) {
      if (*(char *)(*(int *)(param_1 + 0x5c) + 0x48) != '\0') {
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined1 *)(param_1 + 0x78) = 1;
        *(undefined4 *)(param_1 + 0x9c) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x48) = 0;
        if (*(char *)(param_1 + 0x84) == '\0') {
          *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
        }
        uVar4 = DAT_00898ba8;
        bVar1 = *(byte *)(param_1 + 0x79);
        if (bVar1 != 0xe) {
          if (bVar1 < 0xf) {
            if (bVar1 != 7) {
              if (bVar1 == 8) {
                *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
                uVar4 = DAT_00898bd4;
                *(undefined1 *)(param_1 + 0x79) = 9;
                *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
                uVar4 = fn_0022f584(uVar4,0);
                uVar5 = fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
                return uVar5;
              }
              if (bVar1 == 10) {
                fn_002d1e58(*(undefined4 *)(param_1 + 0x88),1);
                fn_001c4578(auStack_30);
                iVar6 = fn_006a7b90(auStack_30,&DAT_007ce538);
                uVar4 = DAT_00898bb0;
                if (iVar6 == -0xc) {
                  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
                  uVar4 = DAT_00898bac;
                  *(undefined1 *)(param_1 + 0x79) = 0xb;
                  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
                  uVar4 = fn_0022f584(uVar4,0);
                  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
                }
                else if (iVar6 == -0xb) {
                  *(undefined1 *)(param_1 + 0x79) = 0xc;
                  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
                  uVar4 = fn_0022f584(uVar4,0);
                  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
                }
                else {
                  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
                  uVar4 = DAT_00898bb8;
                  *(undefined1 *)(param_1 + 0x79) = 0xe;
                  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
                  uVar4 = fn_0022f584(uVar4,0);
                  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
                }
                param_1 = fn_001c4648(auStack_30);
              }
            }
          }
          else {
            if (bVar1 == 0xf) {
              *(undefined1 *)(param_1 + 0x79) = 0x10;
              *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
              uVar4 = fn_0022f584(uVar4,0);
              fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
              uVar5 = fn_002d1e58(*(undefined4 *)(param_1 + 0x88),1);
              return uVar5;
            }
            if (bVar1 == 0x12) {
              fn_001076bc(8);
              uVar4 = DAT_00898c00;
              *(undefined1 *)(param_1 + 0x79) = 0x12;
              *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
              uVar4 = fn_0022f584(uVar4,0);
              uVar5 = fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar4);
              return uVar5;
            }
          }
        }
        return param_1;
      }
      fn_0036c340();
      uVar5 = (uint)*(byte *)(param_1 + 0x84);
      if (uVar5 == 0) {
        uVar5 = *(uint *)(param_1 + 0x5c);
        *(undefined1 *)(uVar5 + 0x5e) = 0;
        return uVar5;
      }
    }
    break;
  case 7:
    uVar5 = *(uint *)(DAT_0089780c + 0xc);
    if (*(uint *)(DAT_0089780c + 0x14) == uVar5) {
      uVar5 = 8;
      *(undefined1 *)(param_1 + 0x78) = 8;
    }
    return uVar5;
  case 8:
    fn_005f3c30(8);
    fn_00526460(0);
    uVar5 = fn_00526660(2,0x300,0xffffffff,0xffffffff);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    fn_00114818(0x12);
    fn_00525e70();
    iVar6 = fn_00189e18();
    if (iVar6 != 0) {
      fn_00123a2c();
      DAT_0089a544 = 1;
    }
    fn_001150b0(0);
    fn_00125d60();
    while( true ) {
      fn_00125694();
      uVar5 = fn_005267b8(0,0,0,0);
      fn_001257a8();
      if ((uVar5 != 0xc8a0cff0 && uVar5 != 0xe0a0cc08) && uVar5 != 0xc8a0cc02) break;
      fn_0012d6a4(10000000,0);
    }
    if ((int)uVar5 < 0) {
      fn_00123b08(uVar5,0x5265a4);
    }
    fn_0011509c();
    fn_0010ba74(1);
    svc_0x3();
    return uVar5;
  }
  return uVar5;
}


