#include "0018b848_0018c93c.h"



void fn_0018c93c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (((DAT_008c3cc0 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c3cc0), iVar2 != 0)) {
    DAT_008f3500 = &DAT_008f3500;
    DAT_008f3504 = &DAT_008f3500;
    DAT_008f34fc = 0;
  }
  puVar1 = DAT_008f3500;
  if (((DAT_008c3cc0 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c3cc0), iVar2 != 0)) {
    DAT_008f3500 = &DAT_008f3500;
    DAT_008f3504 = &DAT_008f3500;
    DAT_008f34fc = 0;
  }
  while ((undefined4 **)puVar1 != &DAT_008f3500) {
    puVar3 = (undefined4 *)*puVar1;
    (**(code **)(puVar1[-1] + 8))(puVar1 + -1,param_2,param_2 + param_3);
    puVar1 = puVar3;
    if (((DAT_008c3cc0 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c3cc0), iVar2 != 0)) {
      DAT_008f3500 = &DAT_008f3500;
      DAT_008f3504 = &DAT_008f3500;
      DAT_008f34fc = 0;
    }
  }
  return;
}



undefined4 * fn_0018c8e8(void)

{
  int iVar1;
  
  if (((DAT_008c3cc0 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3cc0), iVar1 != 0)) {
    DAT_008f3500 = &DAT_008f3500;
    DAT_008f34fc = 0;
    DAT_008f3504 = &DAT_008f3500;
  }
  return &DAT_008f34fc;
}



/* WARNING: Removing unreachable block (ram,0x0018c4f4) */

undefined4 fn_0018c48c(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + param_3 * 0xc + 0x13c) == '\0') {
    uVar1 = 0;
  }
  else {
    iVar3 = 0;
    do {
      if (param_2 == 0) break;
      if ((((param_2 & 1) != 0) && (iVar3 < 0x10)) &&
         (iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x90), iVar2 != 0)) {
        fn_0055a368(iVar2,param_3);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 >> 1;
    } while (iVar3 < 0x10);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_0018c388(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x10) {
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0018c1ac(int param_1,undefined1 *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0x50) != '\0';
  iVar1 = 0;
  if (bVar2) {
    iVar1 = *(int *)(param_2 + 0x10);
  }
  if (bVar2 && iVar1 != 0) {
    *(int *)(param_1 + 0x60) = iVar1;
    *(undefined1 *)(param_1 + 0x7c) = *param_2;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined1 *)(param_1 + 0x57) = 0;
    *(short *)(param_1 + 0x21f8) = DAT_008c3cc8;
    DAT_008c3cc8 = DAT_008c3cc8 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x30) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x34) = *(undefined4 *)(param_2 + 0xc);
    *(int *)(*(int *)(param_1 + 0x60) + 0x10) = param_1;
    *(int *)(*(int *)(param_1 + 0x60) + 0x18) = param_1 + 0x88;
    *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x1c) = *(undefined1 *)(param_1 + 0xf0);
    *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x26) = *(undefined1 *)(param_1 + 0xf1);
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x28) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x2c) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined2 *)(*(int *)(param_1 + 0x60) + 0x24) = *(undefined2 *)(param_1 + 0x21f8);
    fn_001a0354(*(undefined4 *)(param_1 + 0x60));
    return 1;
  }
  return 0;
}



undefined4 fn_0018c080(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)((int)param_2 + 10);
  *(undefined1 *)(param_1 + 0xf1) = *(undefined1 *)((int)param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xf4) = param_2[0x10];
  *(undefined4 *)(param_1 + 0xf8) = param_2[0x11];
  *(undefined4 *)(param_1 + 0xfc) = param_2[0x12];
  fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_2 + 0x13),(byte)(in_fpscr >> 0x16) & 3)
  ;
  *(float *)(param_1 + 0x100) = fVar6 * 0.007874016 - 1.0;
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)((int)param_2 + 0x4d),(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x104) = fVar6 * 0.007874016;
  uVar3 = 0;
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)((int)param_2 + 0x4e),(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 0x108) = fVar6 * 0.007874016;
  for (uVar4 = (uint)*(ushort *)(param_2 + 2); uVar4 != 0; uVar4 = uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      if (3 < uVar3) break;
      *(undefined1 *)(param_1 + uVar3 * 0x24 + 0x2068) = 1;
    }
    uVar3 = uVar3 + 1;
  }
  if (4 < uVar3) {
    uVar3 = 4;
  }
  *(uint *)(param_1 + 0x224) = uVar3;
  if (uVar3 == 0) {
    uVar2 = 2;
  }
  else {
    uVar4 = 0;
    do {
      iVar1 = uVar4 * 0xd;
      iVar5 = iVar1 + param_1;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar5 + 0xbc) = *(undefined4 *)((int)param_2 + iVar1 + 0xc);
      *(undefined4 *)(iVar5 + 0xc0) = *(undefined4 *)((int)param_2 + iVar1 + 0x10);
      *(undefined4 *)(iVar5 + 0xc4) = *(undefined4 *)((int)param_2 + iVar1 + 0x14);
      *(undefined1 *)(iVar5 + 200) = *(undefined1 *)((int)param_2 + iVar1 + 0x18);
    } while (uVar4 < 4);
    *(undefined4 *)(param_1 + 100) = *param_2;
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_0018b848(int *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  undefined4 unaff_r7;
  undefined4 uVar6;
  uint uVar7;
  int local_48 [9];
  
  if (((char)param_1[0x14] != '\0') && (*(ushort *)(param_1 + 0x87e) == param_4)) {
    if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0xf) = 1;
      (**(code **)(*param_1 + 0x14))(param_1);
    }
    else {
      uVar2 = param_1[0x2d];
      if (8 < uVar2) {
        uVar2 = 8;
      }
      param_1[0x88] = uVar2;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          iVar3 = fn_00195f44(param_1[0x19]);
          if (iVar3 == 0) {
            uVar2 = 0;
            if (uVar5 != 0) {
              do {
                fn_00195f04(param_1[0x19],param_1[uVar2 * 0xf2 + 0x8a]);
                uVar7 = uVar2 + 1;
                param_1[uVar2 * 0xf2 + 0x8a] = 0;
                uVar2 = uVar7;
              } while (uVar7 < uVar5);
            }
            (**(code **)(*param_1 + 0xc))(param_1);
            *(undefined1 *)(param_1 + 4) = 1;
            return 0;
          }
          uVar2 = uVar5 + 1;
          param_1[uVar5 * 0xf2 + 0x8a] = iVar3;
          uVar5 = uVar2;
        } while (uVar2 < (uint)param_1[0x88]);
      }
      iVar3 = fn_00196604(param_1,param_1 + 0x22);
      if (iVar3 != 0) {
        if (*(char *)((int)param_1 + 0x53) != '\0') {
LAB_0018bbf0:
          uVar2 = 0;
          if (param_1[0x89] != 0) {
            do {
              iVar3 = 0;
              if ((char)param_1[uVar2 * 9 + 0x81d] != '\0') {
                do {
                  cVar1 = *(char *)((int)param_1 + uVar2 * 0x24 + 0x207e);
                  uVar6 = *(undefined4 *)(param_1[uVar2 * 9 + iVar3 + 0x81b] + 4);
                  if (cVar1 == '\0') {
                    fn_00195d80(uVar6,0);
                    fn_00195dc4(uVar6,0);
                  }
                  else if (cVar1 == '\x01') {
                    fn_00195d80(uVar6,1);
                    fn_00195dc4(uVar6,0);
                  }
                  else if (cVar1 == '\x02') {
                    fn_00195d80(uVar6,0);
                    fn_00195dc4(uVar6,1);
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < (int)(uint)*(byte *)(param_1 + uVar2 * 9 + 0x81d));
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < (uint)param_1[0x89]);
          }
          uVar2 = 0;
          if (param_1[0x88] != 0) {
            do {
              if (*(int *)(param_3 + uVar2 * 4) != 0) {
                fn_001a3c8c(param_1[uVar2 * 0xf2 + 0x8b],0);
              }
              uVar2 = uVar2 + 1;
            } while (uVar2 < (uint)param_1[0x88]);
          }
          return 1;
        }
        if ((uint)param_1[0x2a] < 0x2001) {
          uVar2 = fn_00169f1c(*(undefined4 *)(param_1[0x19] + 8));
          param_1[0x1a] = uVar2;
          if (3 < uVar2) {
            if (0x20 < uVar2) {
              uVar2 = 0x20;
            }
            param_1[0x1a] = uVar2;
            param_1[0x1b] = 0;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
            param_1[0x1e] = 0;
            iVar3 = fn_0018b794();
            uVar2 = param_1[0x88];
            if (uVar2 <= *(uint *)(iVar3 + 0x20)) {
              if (uVar2 != 0) {
                unaff_r7 = 0x7fff;
              }
              uVar5 = 0;
              if (uVar2 != 0) {
                do {
                  uVar6 = fn_0018b794();
                  iVar3 = fn_00195ff8(uVar6,1,unaff_r7,fn_0019622c,param_1 + uVar5 * 0xf2 + 0x8a);
                  if (iVar3 == 0) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      do {
                        if (param_1[uVar2 * 0xf2 + 0x8b] != 0) {
                          fn_0018b010();
                          param_1[uVar2 * 0xf2 + 0x8b] = 0;
                        }
                        uVar2 = uVar2 + 1;
                      } while (uVar2 < uVar5);
                    }
                    goto LAB_0018badc;
                  }
                  param_1[uVar5 * 0xf2 + 0x8b] = iVar3;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < (uint)param_1[0x88]);
              }
              param_1[0x17] = 0;
              uVar2 = 0;
              if (param_1[0x1a] != 0) {
                do {
                  uVar5 = 0;
                  if (param_1[0x88] != 0) {
                    do {
                      local_48[uVar5] = param_1[0x2a] * param_1[0x1b] + param_1[uVar5 * 0xf2 + 0x8a]
                      ;
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < (uint)param_1[0x88]);
                  }
                  iVar3 = 0;
                  if ((char)param_1[0x1f] == '\0') {
                    iVar3 = param_1[0x20];
                  }
                  else if ((char)param_1[0x1f] == '\x01') {
                    uVar7 = param_1[0x20];
                    uVar5 = param_1[0x23];
                    fn_00169c20((int)((ulonglong)uVar5 * (ulonglong)uVar7),
                                 ((int)uVar7 >> 0x1f) * uVar5 +
                                 (int)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x20),1000,0);
                    if (extraout_r1 == 0) {
                      iVar3 = fn_00169c20((int)((ulonglong)uVar5 * (ulonglong)uVar7),
                                           ((int)uVar7 >> 0x1f) * uVar5 +
                                           (int)((ulonglong)uVar5 * (ulonglong)uVar7 >> 0x20),1000,0
                                          );
                    }
                    else {
                      iVar3 = -1;
                    }
                  }
                  iVar4 = param_1[0x87];
                  param_1[0x20] = 0;
                  param_1[0x87] = 0;
                  if (*(char *)((int)param_1 + 0xd) == '\0') {
                    uVar6 = 1;
                  }
                  else {
                    uVar6 = 2;
                  }
                  fn_00196118(param_1[0x18],local_48,param_1[0x1b],iVar3,iVar4,uVar6,
                               (int)(char)param_1[0x21]);
                  iVar3 = param_1[0x1b];
                  uVar2 = uVar2 + 1;
                  param_1[0x1b] = iVar3 + 1U;
                  if ((uint)param_1[0x1a] <= iVar3 + 1U) {
                    param_1[0x1b] = 0;
                  }
                  param_1[0x17] = param_1[0x17] + 1;
                } while (uVar2 < (uint)param_1[0x1a]);
              }
              goto LAB_0018bbf0;
            }
LAB_0018badc:
            uVar2 = 0;
            if (param_1[0x88] != 0) {
              do {
                if (param_1[uVar2 * 0xf2 + 0x8a] != 0) {
                  fn_00195f04(param_1[0x19]);
                  param_1[uVar2 * 0xf2 + 0x8a] = 0;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)param_1[0x88]);
            }
          }
        }
      }
    }
  }
  return 0;
}


