#include "0024e350_0024ec28.h"



/* WARNING: Removing unreachable block (ram,0x0024eca0) */
/* WARNING: Removing unreachable block (ram,0x0024ecac) */

void fn_0024ec28(uint *param_1,int param_2)

{
  uint uVar1;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 0) {
    local_20 = *param_1;
    local_1c = (int)(short)param_1[1];
    local_18 = (uint)*(byte *)((int)param_1 + 6);
    local_14 = (int)(short)param_1[2];
    local_10 = (int)*(short *)((int)param_1 + 10);
    local_c = (int)(short)param_1[3];
    uVar1 = fn_005f5c50(0x259be9d4,&local_20,0x18);
    *(byte *)((int)param_1 + 7) = (byte)((uVar1 >> 0x10) >> (((byte)*param_1 & 1) << 3));
    *(byte *)((int)param_1 + 0xe) = (byte)((uVar1 >> 0x10) >> ((~*param_1 & 1) << 3));
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0024eba4) */
/* WARNING: Removing unreachable block (ram,0x0024eb94) */
/* WARNING: Removing unreachable block (ram,0x0024eb4c) */

undefined4 fn_0024eafc(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  cVar1 = (char)param_1[1];
  uVar5 = (uint)*(byte *)((int)param_1 + 6) << ((uVar2 & 1) << 3) & 0xffff;
  if (cVar1 == '\x01') {
    uVar2 = ~uVar2 & 1;
    uVar4 = (uint)*(byte *)((int)param_1 + 9);
  }
  else if (cVar1 == '\x02') {
    uVar2 = ~uVar2 & 1;
    uVar4 = (uint)(byte)param_1[2];
  }
  else {
    if (cVar1 != '\x03') goto LAB_0024eb64;
    uVar2 = ~uVar2 & 1;
    uVar4 = (uint)(byte)param_1[3];
  }
  uVar5 = (uVar4 << (uVar2 << 3)) + uVar5 & 0xffff;
LAB_0024eb64:
  uVar2 = fn_0024e0d4(param_1);
  if (uVar5 != uVar2) {
    return 1;
  }
  if ((char)param_1[1] == '\x02') {
    iVar3 = fn_002ea524((int)*(short *)((int)param_1 + 0xe));
    uVar2 = *(uint *)(DAT_0088fcd8 + iVar3 * 4);
    if (uVar2 == 0) {
      uVar2 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    if (uVar2 == 0) {
      iVar3 = fn_0014ccb4((int)(short)param_1[3],param_1[6],
                           *(undefined4 *)(DAT_0088fcdc + (short)param_1[3] * 4));
      if (iVar3 == 0) {
        return 1;
      }
    }
    else if (param_1[6] != uVar2) {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0024e934) */
/* WARNING: Removing unreachable block (ram,0x0024e914) */
/* WARNING: Removing unreachable block (ram,0x0024e920) */
/* WARNING: Removing unreachable block (ram,0x0024e954) */
/* WARNING: Removing unreachable block (ram,0x0024e960) */
/* WARNING: Removing unreachable block (ram,0x0024e940) */

void fn_0024e8c4(uint *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    return;
  }
  uVar2 = fn_0024e0d4();
  bVar1 = (byte)param_1[1];
  *(byte *)((int)param_1 + 6) = (byte)(uVar2 >> (((byte)*param_1 & 1) << 3));
  if (bVar1 == 1) {
    *(byte *)((int)param_1 + 9) = (byte)(uVar2 >> ((~*param_1 & 1) << 3));
    return;
  }
  if (bVar1 == 2) {
    *(byte *)(param_1 + 2) = (byte)(uVar2 >> ((~*param_1 & 1) << 3));
    return;
  }
  if (bVar1 == 3) {
    *(byte *)(param_1 + 3) = (byte)(uVar2 >> ((~*param_1 & 1) << 3));
  }
  return;
}



undefined4 fn_0024e350(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  bVar1 = false;
  fn_0017821c(auStack_120,param_1,0xf0);
  fn_0020bbc4(auStack_30,auStack_120);
  uVar5 = *(uint *)(DAT_0088fcd8 + *(short *)(param_1 + 0x1c) * 4);
  if (uVar5 == 0) {
    uVar5 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  uVar6 = fn_002500b8(param_1);
  uVar7 = fn_0024e96c(param_1);
  if (uVar5 == 0) {
    uVar5 = uVar6 ^ uVar7;
    iVar8 = fn_0014ccb4((int)*(short *)(param_1 + 0x1c),uVar5,
                         *(undefined4 *)(DAT_0088fcdc + *(short *)(param_1 + 0x1c) * 4));
    if (iVar8 == 0) {
      return 1;
    }
    iVar8 = (int)*(short *)(param_1 + 0x1c);
    if (((*(int *)(DAT_0088fcd8 + iVar8 * 4) == 0) &&
        (iVar9 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc)), iVar9 == 0)) &&
       (iVar9 = fn_0014ccb4(iVar8,uVar5,*(undefined4 *)(DAT_0088fcdc + iVar8 * 4)), iVar9 != 0)) {
      fn_0028ad34(*(undefined4 *)(DAT_00897804 + 0xc),iVar8,uVar5);
    }
  }
  uVar10 = uVar6 ^ uVar7;
  bVar13 = uVar10 == uVar5;
  if (bVar13) {
    uVar10 = uVar6 ^ uVar5;
  }
  if ((((bVar13 && uVar10 == uVar7) &&
       (iVar8 = fn_00661308((int)*(short *)(param_1 + 0x1c)), iVar8 != 0)) &&
      ((iVar8 = fn_001a46f4((int)*(short *)(param_1 + 0x1c)), iVar8 != 0 &&
       ((*(byte *)(param_1 + 0x3c) < 0x65 && (*(char *)(param_1 + 0x2e) != '\0')))))) &&
     (uVar5 = fn_00246824(param_1), *(byte *)(param_1 + 0x2e) <= uVar5)) {
    uVar3 = fn_00661570((int)*(short *)(param_1 + 0x1c));
    iVar8 = fn_002467b4(*(undefined1 *)(param_1 + 0x2e),uVar3);
    if (iVar8 <= *(int *)(param_1 + 0x30)) {
      if (*(byte *)(param_1 + 0x2e) < 0x78) {
        uVar3 = fn_00661570((int)*(short *)(param_1 + 0x1c));
        iVar8 = fn_002467b4(*(char *)(param_1 + 0x2e) + '\x01',uVar3);
        if (iVar8 < *(int *)(param_1 + 0x30)) {
          return 1;
        }
        uVar5 = fn_00246824(param_1);
        if ((uVar5 != *(byte *)(param_1 + 0x2e)) && (*(int *)(param_1 + 0x30) == iVar8)) {
          return 1;
        }
      }
      if (0 < *(short *)(param_1 + 0x22)) {
        iVar9 = fn_006c0028(auStack_2c);
        iVar12 = (int)*(short *)(param_1 + 0x22);
        iVar8 = iVar9;
        if (iVar12 <= iVar9) {
          iVar8 = (int)*(short *)(param_1 + 0x24);
        }
        iVar2 = iVar9 - iVar12;
        if (iVar9 >= iVar12) {
          iVar2 = iVar8;
        }
        if ((iVar2 < 0 == (iVar9 < iVar12 && SBORROW4(iVar9,iVar12))) &&
           (iVar8 = fn_006c0114(auStack_2c), *(short *)(param_1 + 0x24) <= iVar8)) {
          iVar8 = fn_005fe128(auStack_120,0);
          if ((iVar8 < *(short *)(param_1 + 0x1e)) || (*(short *)(param_1 + 0x1e) < 1)) {
            bVar1 = true;
          }
          iVar8 = fn_0020ddfc(auStack_120,0);
          if ((iVar8 < *(short *)(param_1 + 0x20)) || (*(short *)(param_1 + 0x20) < 1)) {
            bVar1 = true;
          }
          iVar8 = fn_0020fd10(auStack_120,0);
          if ((iVar8 < *(short *)(param_1 + 0x26)) || (*(short *)(param_1 + 0x26) < 1)) {
            bVar1 = true;
          }
          iVar8 = fn_00210174(auStack_120,0);
          if ((iVar8 < *(short *)(param_1 + 0x28)) || (*(short *)(param_1 + 0x28) < 1)) {
            bVar1 = true;
          }
          iVar8 = fn_0020e628(auStack_120,0);
          if ((iVar8 < *(short *)(param_1 + 0x2a)) || (*(short *)(param_1 + 0x2a) < 1)) {
            bVar1 = true;
          }
          iVar9 = fn_0020e3a4(auStack_120,0);
          iVar12 = (int)*(short *)(param_1 + 0x2c);
          bVar14 = SBORROW4(iVar9,iVar12);
          iVar8 = iVar9 - iVar12;
          bVar13 = iVar9 == iVar12;
          if (iVar12 <= iVar9) {
            bVar14 = SBORROW4(iVar12,1);
            iVar8 = iVar12 + -1;
            bVar13 = iVar12 == 1;
          }
          if (iVar8 < 0 == bVar14) {
            bVar13 = !bVar1;
          }
          if (bVar13) {
            iVar8 = fn_0020e5dc(auStack_120,0);
            if ((iVar8 < *(short *)(param_1 + 0x84)) || (*(short *)(param_1 + 0x84) < 0)) {
              bVar1 = true;
            }
            iVar8 = fn_0020e5dc(auStack_120,1);
            if ((iVar8 < *(short *)(param_1 + 0x86)) || (*(short *)(param_1 + 0x86) < 0)) {
              bVar1 = true;
            }
            iVar8 = fn_0020e5dc(auStack_120,2);
            if ((iVar8 < *(short *)(param_1 + 0x88)) || (*(short *)(param_1 + 0x88) < 0)) {
              bVar1 = true;
            }
            iVar8 = fn_0020e5dc(auStack_120,3);
            if ((iVar8 < *(short *)(param_1 + 0x8a)) || (*(short *)(param_1 + 0x8a) < 0)) {
              bVar1 = true;
            }
            iVar8 = fn_0020e5dc(auStack_120,4);
            if ((iVar8 < *(short *)(param_1 + 0x8c)) || (*(short *)(param_1 + 0x8c) < 0)) {
              bVar1 = true;
            }
            iVar9 = fn_0020e5dc(auStack_120,5);
            iVar12 = (int)*(short *)(param_1 + 0x8e);
            bVar13 = iVar9 == iVar12;
            iVar8 = iVar9 - iVar12;
            if (iVar9 >= iVar12) {
              bVar13 = iVar12 == 0;
              iVar8 = iVar12;
            }
            if (iVar8 < 0 == (iVar9 < iVar12 && SBORROW4(iVar9,iVar12))) {
              bVar13 = !bVar1;
            }
            if (bVar13) {
              sVar4 = fn_006bf148(auStack_2c);
              iVar8 = fn_0024fda4(param_1,(int)sVar4);
              if (iVar8 == 0) {
                uVar11 = fn_006bfe90(auStack_2c);
                iVar8 = fn_0024f16c(param_1,uVar11);
                if ((iVar8 == 0) &&
                   (((iVar8 = fn_0020ccc8((int)*(short *)(param_1 + 0x1c)), iVar8 != 0 ||
                     (((iVar8 = fn_0024ecc0((int)*(short *)(param_1 + 0x1c),
                                             (int)*(short *)(param_1 + 0x90),
                                             *(undefined1 *)(param_1 + 0xae),
                                             (int)*(short *)(param_1 + 0xaa),
                                             (int)*(short *)(param_1 + 0xac),
                                             (int)*(short *)(param_1 + 0xb0),
                                             *(undefined1 *)(param_1 + 0xce),
                                             (int)*(short *)(param_1 + 0xca),
                                             (int)*(short *)(param_1 + 0xcc)), iVar8 != 0 &&
                       ((*(short *)(param_1 + 0x90) != 0 ||
                        (iVar8 = fn_0024ecc0(0,(int)*(short *)(param_1 + 0xaa),0,0,0,
                                              (int)*(short *)(param_1 + 0xac),0,0,0), iVar8 != 0))))
                      && ((*(short *)(param_1 + 0xb0) != 0 ||
                          (iVar8 = fn_0024ecc0(0,(int)*(short *)(param_1 + 0xca),0,0,0,
                                                (int)*(short *)(param_1 + 0xcc),0,0,0), iVar8 != 0))
                         )))) &&
                    ((*(int *)(param_1 + 0xe0) == 0 ||
                     ((iVar8 = fn_0024e1b8(param_1 + 0xe0), iVar8 == 0 &&
                      (iVar8 = fn_00250168(param_1 + 0xe0), iVar8 == 0)))))))) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


