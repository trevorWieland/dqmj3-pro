#include "0012a32c_0012a32c.h"



undefined4 fn_0012a32c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  
  DAT_008bf7a4 = param_1;
  fn_00301f50(param_1,0x1774,param_3,param_4,param_4);
  uVar9 = 0;
  DAT_008bf7a0 = 1;
  DAT_008bf7a8 = 0xffffffff;
  DAT_008bf79c = 1;
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 1;
    iVar3 = (&DAT_007e1afc)[iVar4 * 4];
    *(undefined4 *)(&DAT_008e9ae8 + iVar3 * 0xc) = (&DAT_007e1b00)[iVar4 * 4];
    iVar3 = iVar3 * 0xc;
    *(undefined4 *)(&DAT_008e9aec + iVar3) = (&DAT_007e1b04)[iVar4 * 4];
    *(undefined4 *)(&DAT_008e9af0 + iVar3) = (&DAT_007e1b08)[iVar4 * 4];
    iVar4 = iVar2;
  } while ((&DAT_007e1afc)[iVar2 * 4] != -1);
  iVar4 = 0;
  do {
    iVar2 = iVar4 + 1;
    (&DAT_008ea8d4)[(&DAT_007e2d9c)[iVar4 * 2]] = (&DAT_007e2da0)[iVar4 * 2];
    iVar3 = DAT_008bf7a4;
    iVar4 = iVar2;
  } while ((&DAT_007e2d9c)[iVar2 * 2] != -1);
  *(undefined4 *)(DAT_008bf7a4 + 0x13a4) = 0x1000;
  *(undefined1 *)(iVar3 + 0x16da) = 2;
  *(undefined4 *)(iVar3 + 0x13a8) = 0;
  *(undefined1 *)(iVar3 + 0x16db) = 0xf;
  *(undefined4 *)(iVar3 + 0x13ac) = 0;
  *(undefined1 *)(iVar3 + 0x16dc) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b0) = 9;
  *(undefined1 *)(iVar3 + 0x16dd) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b4) = 0;
  *(undefined1 *)(iVar3 + 0x16de) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b8) = 0;
  *(undefined1 *)(iVar3 + 0x16df) = 0xf;
  *(undefined4 *)(iVar3 + 0x13bc) = 0;
  *(undefined1 *)(iVar3 + 0x16e0) = 0xf;
  *(undefined4 *)(iVar3 + 0x13c0) = 0x1c00301;
  *(undefined1 *)(iVar3 + 0x16e1) = 0xf;
  *(undefined4 *)(iVar3 + 0x13c4) = 0xe0c08000;
  *(undefined1 *)(iVar3 + 0x16e2) = 0xf;
  *(undefined4 *)(iVar3 + 0x146c) = 0x3c00;
  *(undefined1 *)(iVar3 + 0x170c) = 0xf;
  *(undefined4 *)(iVar3 + 0x1364) = 0;
  *(undefined1 *)(iVar3 + 0x16ca) = 0xf;
  *(undefined4 *)(iVar3 + 0x1368) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16cb) = 0xf;
  *(undefined4 *)(iVar3 + 0x136c) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16cc) = 0xf;
  *(undefined4 *)(iVar3 + 0x1370) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16cd) = 0xf;
  *(undefined4 *)(iVar3 + 0x1374) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16ce) = 0xf;
  *(undefined4 *)(iVar3 + 0x1378) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16cf) = 0xf;
  uVar7 = 0x5c;
  *(undefined4 *)(iVar3 + 0x137c) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16d0) = 0xf;
  *(undefined4 *)(iVar3 + 0x1380) = 0x1f1f1f1f;
  *(undefined1 *)(iVar3 + 0x16d1) = 0xf;
  *(undefined4 *)(iVar3 + 0x139c) = 1;
  *(undefined1 *)(iVar3 + 0x16d8) = 0xf;
  *(undefined4 *)(iVar3 + 0x135c) = 0xbf0000;
  *(undefined1 *)(iVar3 + 0x16c8) = 0xf;
  *(undefined4 *)(iVar3 + 0x1360) = 0;
  *(undefined1 *)(iVar3 + 0x16c9) = 0xf;
  *(undefined4 *)(iVar3 + 0x1384) = 0;
  *(undefined1 *)(iVar3 + 0x16d2) = 0xf;
  *(undefined4 *)(iVar3 + 5000) = 0;
  *(undefined1 *)(iVar3 + 0x16d3) = 0xf;
  *(undefined4 *)(iVar3 + 0x138c) = 0;
  *(undefined1 *)(iVar3 + 0x16d4) = 0xf;
  *(undefined4 *)(iVar3 + 0x1390) = 0;
  *(undefined1 *)(iVar3 + 0x16d5) = 0xf;
  *(undefined4 *)(iVar3 + 0x1394) = 0;
  *(undefined1 *)(iVar3 + 0x16d6) = 0xf;
  do {
    if (uVar7 == 0x8d) goto LAB_0012a8cc;
    if ((int)uVar7 < 0x8e) {
      if (uVar7 == 0x77) goto LAB_0012a8cc;
      if ((int)uVar7 < 0x78) {
        if (uVar7 != 0x6c) {
          if ((int)uVar7 < 0x6d) {
            if (uVar7 == 0x61) goto LAB_0012a8cc;
            if (uVar7 == 99) goto LAB_0012a8f0;
            if (uVar7 == 100) goto LAB_0012a8f8;
            if (uVar7 == 0x66) goto LAB_0012a8a8;
          }
          else {
            if (uVar7 == 0x6e) goto LAB_0012a8f0;
            if (uVar7 == 0x6f) goto LAB_0012a8f8;
            if (uVar7 == 0x71) goto LAB_0012a8a8;
          }
          goto LAB_0012a6a0;
        }
        goto LAB_0012a8cc;
      }
      if (uVar7 == 0x82) goto LAB_0012a8cc;
      if ((int)uVar7 < 0x83) {
        if (uVar7 == 0x79) goto LAB_0012a8f0;
        if (uVar7 == 0x7a) goto LAB_0012a8f8;
        if (uVar7 != 0x7c) goto LAB_0012a6a0;
LAB_0012a8a8:
        uVar5 = 0x3f000;
      }
      else {
        if (uVar7 != 0x84) {
          if (uVar7 != 0x85) {
            if (uVar7 == 0x87) goto LAB_0012a8a8;
            goto LAB_0012a6a0;
          }
LAB_0012a8f8:
          *(undefined4 *)(iVar3 + uVar7 * 4 + 0x1300) = 1;
          *(undefined1 *)(iVar3 + uVar7 + 0x16b1) = 0xf;
          goto LAB_0012a6c0;
        }
LAB_0012a8f0:
        uVar5 = 0x800;
      }
      *(undefined4 *)(iVar3 + uVar7 * 4 + 0x1300) = uVar5;
      *(undefined1 *)(iVar3 + uVar7 + 0x16b1) = 0xf;
    }
    else {
      if (uVar7 != 0xa3) {
        if ((int)uVar7 < 0xa4) {
          if (uVar7 != 0x98) {
            if ((int)uVar7 < 0x99) {
              if (uVar7 == 0x8f) goto LAB_0012a8f0;
              if (uVar7 == 0x90) goto LAB_0012a8f8;
              if (uVar7 == 0x92) goto LAB_0012a8a8;
            }
            else {
              if (uVar7 == 0x9a) goto LAB_0012a8f0;
              if (uVar7 == 0x9b) goto LAB_0012a8f8;
              if (uVar7 == 0x9d) goto LAB_0012a8a8;
            }
LAB_0012a6a0:
            *(undefined4 *)(iVar3 + uVar7 * 4 + 0x1300) = 0;
            *(undefined1 *)(iVar3 + uVar7 + 0x16b1) = 0xf;
            goto LAB_0012a6c0;
          }
        }
        else if (uVar7 != 0xae) {
          if ((int)uVar7 < 0xaf) {
            if (uVar7 == 0xa5) goto LAB_0012a8f0;
            if (uVar7 == 0xa6) goto LAB_0012a8f8;
            if (uVar7 == 0xa8) goto LAB_0012a8a8;
          }
          else {
            if (uVar7 == 0xb0) goto LAB_0012a8f0;
            if (uVar7 == 0xb1) goto LAB_0012a8f8;
            if (uVar7 == 0xb3) goto LAB_0012a8a8;
          }
          goto LAB_0012a6a0;
        }
      }
LAB_0012a8cc:
      *(undefined4 *)(iVar3 + uVar7 * 4 + 0x1300) = 0x3c00;
      *(undefined1 *)(iVar3 + uVar7 + 0x16b1) = 0xf;
    }
LAB_0012a6c0:
    uVar7 = uVar7 + 1;
    if (0xb3 < uVar7) {
      *(undefined4 *)(iVar3 + 0x1478) = 0xcc330cc;
      *(undefined1 *)(iVar3 + 0x170f) = 0xf;
      *(undefined4 *)(iVar3 + 0x15d0) = 0xa0280a;
      *(undefined1 *)(iVar3 + 0x1765) = 0xf;
      *(undefined4 *)(iVar3 + 0x15d4) = 0;
      *(undefined1 *)(iVar3 + 0x1766) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e0) = 1;
      *(undefined1 *)(iVar3 + 0x1769) = 0xf;
      *(undefined4 *)(iVar3 + 0x15d8) = 0x88000400;
      *(undefined1 *)(iVar3 + 0x1767) = 0xf;
      *(undefined4 *)(iVar3 + 0x15dc) = 0xffffffff;
      *(undefined1 *)(iVar3 + 0x1768) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e8) = 0;
      *(undefined1 *)(iVar3 + 0x176b) = 0xf;
      *(undefined4 *)(iVar3 + 0x15ec) = 0;
      *(undefined1 *)(iVar3 + 0x176c) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e4) = 0x2222222;
      *(undefined1 *)(iVar3 + 0x176a) = 0xf;
      *(undefined4 *)(iVar3 + 0x15f0) = 0;
      *(undefined1 *)(iVar3 + 0x176d) = 0xf;
      *(undefined4 *)(iVar3 + 0x1440) = 0;
      *(undefined1 *)(iVar3 + 0x1701) = 0xf;
      *(undefined4 *)(iVar3 + 0x1444) = 0;
      *(undefined1 *)(iVar3 + 0x1702) = 0xf;
      *(undefined4 *)(iVar3 + 0x1448) = 0x3c00;
      *(undefined1 *)(iVar3 + 0x1703) = 0xf;
      *(undefined4 *)(iVar3 + 0x1454) = 0;
      *(undefined1 *)(iVar3 + 0x1706) = 0xf;
      *(undefined4 *)(iVar3 + 0x1458) = 0;
      *(undefined1 *)(iVar3 + 0x1707) = 0xf;
      *(undefined4 *)(iVar3 + 0x145c) = 0x100;
      *(undefined1 *)(iVar3 + 0x1708) = 0xf;
      *(undefined4 *)(iVar3 + 0x1460) = 0xa00;
      *(undefined1 *)(iVar3 + 0x1709) = 7;
      *(undefined4 *)(iVar3 + 0x144c) = 0x3c00;
      *(undefined1 *)(iVar3 + 0x1704) = 0xf;
      *(undefined4 *)(iVar3 + 0x1464) = 0xe40100;
      *(undefined1 *)(iVar3 + 0x170a) = 0xd;
      *(undefined4 *)(iVar3 + 0x1468) = 0x10;
      *(undefined1 *)(iVar3 + 0x170b) = 0xf;
      iVar4 = 0;
      iVar2 = 0x1e;
      puVar6 = (undefined4 *)(iVar3 + 0x13c8);
      puVar8 = (undefined1 *)(iVar3 + 0x16e3);
LAB_0012aaf0:
      *puVar6 = 0xeee0eee;
      do {
        *puVar8 = 0xf;
        while( true ) {
          iVar2 = iVar2 + -1;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
          iVar4 = iVar4 + 1;
          if (iVar2 == 0) {
            *(undefined4 *)(iVar3 + 0x1450) = 0;
            *(undefined1 *)(iVar3 + 0x1705) = 0xf;
            fn_0017821c(iVar3 + 0x100c,iVar3 + 0x1300,0x2f4);
            fn_00301a9c(DAT_008bf7a4 + 0x15f4,DAT_008bf7a4 + 0x16b1,0xbd);
            iVar4 = 0;
            DAT_008eabc8 = 0;
            DAT_008eabcc = 0;
            DAT_008eabd0 = 0;
            DAT_008eabd4 = 0;
            DAT_008eabd8 = 0;
            DAT_008eabdc = 0;
            iVar3 = DAT_008bf7ac;
            while (iVar3 != 0xbd) {
              puVar1 = (uint *)(&DAT_008bf7ac + iVar4);
              iVar4 = iVar4 + 1;
              iVar3 = (int)*puVar1 >> 5;
              (&DAT_008eabc8)[iVar3] = (&DAT_008eabc8)[iVar3] | 1 << (*puVar1 & 0x1f);
              iVar3 = (&DAT_008bf7ac)[iVar4];
            }
            DAT_008eabe0 = 0;
            DAT_008eabe4 = 0;
            DAT_008eabe8 = 0;
            DAT_008eabec = 0;
            DAT_008eabf0 = 0;
            DAT_008eabf4 = 0;
            iVar4 = 0;
            iVar3 = DAT_008bf80c;
            while (iVar3 != 0xbd) {
              puVar1 = (uint *)(&DAT_008bf80c + iVar4);
              iVar4 = iVar4 + 1;
              iVar3 = (int)*puVar1 >> 5;
              (&DAT_008eabe0)[iVar3] = (&DAT_008eabe0)[iVar3] | 1 << (*puVar1 & 0x1f);
              iVar3 = (&DAT_008bf80c)[iVar4];
            }
            iVar4 = 0;
            iVar3 = DAT_008bf824;
            while (iVar3 != 0xbd) {
              puVar1 = (uint *)(&DAT_008bf824 + iVar4);
              iVar4 = iVar4 + 1;
              iVar3 = (int)*puVar1 >> 5;
              (&DAT_008eabe0)[iVar3] = (&DAT_008eabe0)[iVar3] | 1 << (*puVar1 & 0x1f);
              iVar3 = (&DAT_008bf824)[iVar4];
            }
            DAT_008eabf8 = 0;
            DAT_008eabfc = 0;
            DAT_008eac00 = 0;
            DAT_008eac04 = 0;
            DAT_008eac08 = 0;
            DAT_008eac0c = 0;
            iVar4 = 0;
            iVar3 = DAT_008bf83c;
            while (iVar3 != 0xbd) {
              puVar1 = (uint *)(&DAT_008bf83c + iVar4);
              iVar4 = iVar4 + 1;
              iVar3 = (int)*puVar1 >> 5;
              (&DAT_008eabf8)[iVar3] = (&DAT_008eabf8)[iVar3] | 1 << (*puVar1 & 0x1f);
              iVar3 = (&DAT_008bf83c)[iVar4];
            }
            return uVar9;
          }
          if (iVar4 == 0) goto LAB_0012aaf0;
          if (((iVar4 == 5 || iVar4 == 10) || (iVar4 == 0xf || iVar4 == 0x14)) || (iVar4 == 0x19))
          break;
          *puVar6 = 0;
          *puVar8 = 0xf;
        }
        *puVar6 = 0xfff0fff;
      } while( true );
    }
  } while( true );
}


