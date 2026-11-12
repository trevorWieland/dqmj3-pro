#include "006358d0_006358d0.h"



void fn_006358d0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined2 unaff_r11;
  bool bVar14;
  int *local_5430;
  char *local_542c;
  int *local_5428;
  undefined4 local_5298;
  undefined4 local_5294;
  undefined4 local_5290;
  undefined4 local_528c;
  undefined4 local_5288;
  undefined4 local_5284;
  undefined4 local_5280;
  undefined4 local_527c;
  undefined4 local_5278;
  undefined4 local_5274;
  undefined4 local_5270;
  undefined4 local_526c;
  undefined4 local_5268;
  int local_5264;
  int local_5260;
  int local_525c;
  undefined4 local_5258;
  undefined4 uStack_5254;
  int *local_5250;
  char *pcStack_524c;
  int local_5248 [2];
  char acStack_523f [3];
  undefined4 uStack_523c;
  undefined1 auStack_5238 [14];
  byte abStack_522a [2];
  undefined2 auStack_5228 [2];
  undefined4 auStack_5224 [92];
  undefined1 auStack_50b3 [16];
  undefined1 auStack_50a3 [20415];
  char local_e4 [180];
  int local_30;
  int local_2c;
  
  iVar9 = 0;
  local_5260 = param_2 + 0x180000;
  piVar11 = (int *)(param_2 + 0x180388);
  bVar14 = *(char *)(param_2 + 0x180460) != '\0';
  if (bVar14) {
    unaff_r11 = 1;
  }
  local_5264 = 0;
  local_30 = param_1;
  local_2c = param_2;
  if (bVar14) {
    do {
      iVar3 = local_5264;
      piVar12 = piVar11 + local_5264 * 3 + 6;
      if (iVar9 == 0) {
        local_525c = (int)(short)*piVar12;
        iVar9 = fn_006f4888((int)piVar11 + local_5264 * 0xc + 0x23,0);
        local_542c = local_e4;
        local_5430 = piVar11;
        if (iVar9 == 0) {
          iVar9 = fn_006270b0(local_30,0x10,0x14,local_525c);
        }
        else {
          iVar9 = fn_006270b0(local_30,0x14,0x18,local_525c);
        }
        fn_00301f50(local_5248,0x5164);
        fn_006565b8(&local_5298);
        local_5298 = 0;
        local_5294 = 0;
        local_5290 = 0;
        local_5284 = 0;
        local_528c = 0;
        local_5288 = 0;
        local_5280 = 0;
        local_527c = 0;
        local_5270 = 0;
        local_5278 = 0;
        local_5274 = 0;
        local_526c = 0;
        local_5268 = 0;
        fn_006564d8(&local_5298,local_525c);
        iVar13 = 0;
        if (0 < iVar9) {
          do {
            cVar2 = local_e4[iVar13];
            fn_00655a88(&local_5258);
            local_5430 = piVar11;
            fn_0065578c(&local_5258,local_525c,(int)cVar2,local_30 + 0x24);
            fn_006209c4(&local_5258,piVar12);
            iVar4 = local_5248[0];
            iVar1 = local_5248[0] * 0x1a0;
            piVar10 = local_5248 + local_5248[0] * 0x68 + 2;
            *(undefined1 *)piVar10 = 0;
            auStack_50a3[iVar1] = *(undefined1 *)((int)piVar11 + iVar3 * 0xc + 0x1e);
            *(char *)((int)local_5248 + iVar1 + 9) = cVar2;
            *(undefined1 *)((int)local_5248 + iVar1 + 10) = 0x10;
            *(short *)(auStack_5238 + iVar1 + -4) = (short)local_525c;
            local_5248[0] = local_5248[0] + 1;
            uVar5 = fn_00691d5c(local_525c);
            auStack_5238[iVar1 + -2] = uVar5;
            uVar5 = fn_00163a00(local_525c);
            auStack_5238[iVar1 + -1] = uVar5;
            bVar6 = fn_006f4888((int)piVar11 + iVar3 * 0xc + 0x23,1);
            abStack_522a[iVar1] = bVar6;
            auStack_5228[iVar4 * 0xd0] = unaff_r11;
            iVar7 = fn_00629700(local_30,&local_5298,piVar11,piVar10);
            auStack_5238[iVar1] = (char)iVar7;
            if (iVar7 == 0) {
              iVar7 = fn_00627160(local_30,&local_5298,piVar11,piVar10);
              auStack_5238[iVar1] = (char)iVar7;
              if (iVar7 == 0) {
                fn_0017821c(&local_5430,auStack_5238 + iVar1,0x198);
                uVar8 = fn_00628308(local_30,piVar11,*piVar10,
                                     *(undefined4 *)(auStack_5238 + iVar1 + -4));
                iVar7 = fn_006f44fc(uVar8,0xe8);
                bVar6 = 0;
                if (iVar7 != 0) {
                  bVar6 = abStack_522a[iVar1];
                }
                if (iVar7 != 0 && bVar6 != 0) {
                  auStack_5224[iVar4 * 0x68] = 0;
                  auStack_50b3[iVar1] = (char)unaff_r11;
                }
                else {
                  local_5430 = local_5250;
                  local_542c = pcStack_524c;
                  local_5428 = piVar12;
                  uVar8 = fn_0061f72c((int)cVar2,piVar11,local_5258,uStack_5254);
                  auStack_5224[iVar4 * 0x68] = uVar8;
                }
                fn_0062187c(local_30,piVar10,piVar11);
                fn_0062abdc(local_30,piVar11,piVar10,local_2c);
                fn_00654c08(local_30,piVar10,piVar11);
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar9);
        }
        local_5430 = local_5248;
        fn_006276cc(local_30,1,piVar11,local_2c);
        iVar9 = fn_0062285c(local_30,local_2c);
        if (iVar9 == 0) {
          fn_006267fc(local_30,piVar11,local_2c,local_5248);
        }
        fn_00622928(local_30,&local_5298,local_5248,local_2c);
        fn_0011a604(piVar12);
        fn_00620924(local_30 + 4,4,0);
      }
      else {
        fn_0011a604(piVar12);
      }
      local_5264 = local_5264 + 1;
    } while (local_5264 < (int)(uint)*(byte *)(local_5260 + 0x460));
  }
  *(undefined1 *)(param_2 + 0x180460) = 0;
  return;
}


