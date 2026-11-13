#include "0062f9a4_0062fe14.h"



void fn_0062fe14(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint unaff_r11;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  fn_0062a40c(param_1);
  iVar4 = fn_00163a00();
  if (iVar4 == 1) {
    fn_0062a40c(param_1,param_2);
    iVar4 = fn_001639e4();
    if (iVar4 != 0x1a) {
      cVar3 = *(char *)(param_2 + 5);
      iVar14 = 0;
      iVar13 = param_3 + 0x180388;
      iVar4 = iVar13 + cVar3 * 0x418;
      if (0 < *param_4) {
        do {
          uVar12 = 0;
          if (*(short *)(iVar4 + -0x4080) < 1) {
            return;
          }
          cVar1 = *(char *)(iVar4 + -0x4019);
          bVar17 = cVar1 == '\0';
          if (bVar17) {
            cVar1 = *(char *)(iVar4 + -0x400a);
          }
          bVar18 = bVar17 && cVar1 == '\0';
          if (bVar17 && cVar1 == '\0') {
            bVar18 = *(char *)(iVar4 + -0x4018) == '\0';
          }
          if (!bVar18) {
            return;
          }
          iVar9 = iVar14 * 0x1a0 + 8;
          if (*(char *)((int)param_4 + iVar14 * 0x1a0 + 0x186) == '\0') {
            cVar1 = *(char *)((int)param_4 + iVar14 * 0x1a0 + 9);
            iVar5 = (int)cVar1;
            if (iVar5 - 0x10U < 8) {
              iVar6 = iVar13 + iVar5 * 0x418;
              if (0 < *(short *)(iVar6 + -0x4080)) {
                cVar2 = *(char *)(iVar6 + -0x4019);
                bVar17 = cVar2 == '\0';
                if (bVar17) {
                  cVar2 = *(char *)(iVar6 + -0x400a);
                }
                bVar18 = bVar17 && cVar2 == '\0';
                if (bVar17 && cVar2 == '\0') {
                  bVar18 = *(char *)(iVar6 + -0x4018) == '\0';
                }
                if ((bVar18) && (iVar6 = fn_006f44fc((short *)(iVar6 + -0x4080),0x50), iVar6 != 0))
                {
                  uVar16 = 0x62ff50;
                  iVar5 = fn_00624edc(param_1,0x50,iVar5,iVar13,0);
                  if (iVar5 != 0) {
                    uVar10 = (uint)(short)param_4[iVar14 * 0x68 + 8];
                    uVar7 = 1;
                    if (0 < (int)(uVar10 - 1)) {
                      puVar11 = (uint *)(param_4 + iVar14 * 0x68 + 7);
                      if ((uVar10 & 1) == 0) {
                        puVar11 = (uint *)(param_4 + iVar14 * 0x68 + 9);
                        uVar12 = *puVar11;
                        uVar7 = *(byte *)((int)param_4 + iVar14 + iVar9 + 8) & 1;
                      }
                      iVar5 = (int)(uVar10 - 1) >> 1;
                      bVar17 = iVar5 != 0;
                      if (bVar17) {
                        unaff_r11 = (int)param_4 + iVar14 + iVar9;
                      }
                      uVar15 = puVar11[2];
                      if (bVar17) {
                        uVar16 = (uint)*(char *)(unaff_r11 + 8);
                      }
                      iVar6 = 0;
                      while (bVar17) {
                        unaff_r11 = puVar11[4];
                        uVar12 = uVar12 + uVar15;
                        uVar15 = puVar11[6];
                        iVar5 = iVar5 + -1;
                        bVar17 = iVar5 != 0;
                        uVar7 = uVar7 & uVar16;
                        iVar6 = iVar6 + unaff_r11;
                        puVar11 = puVar11 + 4;
                      }
                      uVar12 = uVar12 + iVar6;
                    }
                    if (-1 < (int)(uVar10 - 1)) {
                      uVar12 = uVar12 + param_4[iVar14 * 0x68 + (uVar10 - 1) * 2 + 9];
                      uVar7 = uVar7 & (int)*(char *)((int)param_4 + iVar14 + iVar9 + 8);
                    }
                    if ((uVar7 - 1 & uVar12) != 0) {
                      pcVar8 = (char *)fn_006228ac(param_4);
                      param_4[1] = param_4[1] + 1;
                      pcVar8[0x18] = '\x01';
                      pcVar8[0x19] = '\0';
                      *pcVar8 = cVar1;
                      pcVar8[1] = cVar3;
                      pcVar8[2] = '\x03';
                      pcVar8[4] = 'P';
                      pcVar8[5] = '\0';
                      pcVar8[6] = '\x03';
                      pcVar8[7] = '\b';
                      iVar9 = fn_00169f1c(uVar12 + 2);
                      *(int *)(pcVar8 + 0x1c) = (iVar9 * 3) / 3;
                      fn_0062187c(param_1,pcVar8,iVar13);
                      fn_0062abdc(param_1,iVar13,pcVar8,param_3);
                      *(int *)(pcVar8 + 0x194) = *(int *)(pcVar8 + 0x194) << 1;
                      *(int *)(pcVar8 + 0x198) = *(int *)(pcVar8 + 0x198) << 1;
                      fn_00654c08(param_1,pcVar8,iVar13);
                    }
                  }
                }
              }
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < *param_4);
      }
    }
  }
  return;
}



void fn_0062f9a4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_208;
  undefined2 local_204;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 local_1fe;
  undefined2 local_1fc;
  undefined2 local_1f0;
  int local_1ec;
  undefined2 local_1e8;
  int local_1d4;
  int local_1d0;
  undefined1 auStack_e6 [134];
  int local_60;
  undefined1 auStack_5c [56];
  
  local_208 = (undefined1 *)(param_3 + 0x180388);
  if ((7 < (int)*(char *)(param_2 + 5) - 0x10U) ||
     (*(char *)((int)local_208 + *(char *)(param_2 + 5) * 0x418 + -0x3ff9) < '\x01')) {
    local_60 = (int)local_208;
    iVar2 = fn_00620708();
    if (iVar2 != 0) {
      puVar3 = (undefined1 *)fn_006228ac(param_4);
      puVar3[2] = 4;
      *(undefined2 *)(puVar3 + 4) = 1;
      *puVar3 = *(undefined1 *)(param_2 + 5);
      puVar3[1] = *(undefined1 *)(param_2 + 5);
      puVar3[6] = 3;
      puVar3[7] = 8;
      *(int *)(puVar3 + 0x1c) = iVar2;
      *(undefined2 *)(puVar3 + 0x18) = 1;
      fn_0062187c(param_1,puVar3,local_208);
      fn_0062abdc(param_1,local_208,puVar3);
      fn_00654c08(param_1,puVar3,local_208);
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
    }
    uVar4 = fn_00656538(&local_208,param_2);
    local_1d0 = local_60;
    local_1d4 = fn_00626c2c(param_1,local_60,uVar4);
    if (*(char *)(local_1d4 + 0x66) != 0) {
      uVar5 = 0;
      do {
        iVar7 = (&DAT_007e18bc)[uVar5 * 3];
        iVar2 = (&DAT_007e18c0)[uVar5 * 3];
        if ((&DAT_007e18b8)[uVar5 * 3] == (int)*(char *)(local_1d4 + 0x66)) {
          iVar6 = fn_00176e70(local_1d4);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          iVar7 = fn_00169f1c(iVar6 * iVar7 + iVar2 + -1,iVar2);
          uVar4 = fn_00300f74(iVar7 * iVar2,iVar2);
          puVar3 = (undefined1 *)fn_006228ac(param_4);
          puVar3[2] = 4;
          *(undefined2 *)(puVar3 + 4) = 2;
          *puVar3 = *(undefined1 *)(param_2 + 5);
          puVar3[1] = *(undefined1 *)(param_2 + 5);
          puVar3[6] = 4;
          puVar3[7] = 8;
          *(undefined4 *)(puVar3 + 0x1c) = uVar4;
          *(undefined2 *)(puVar3 + 0x18) = 1;
          fn_0062187c(param_1,puVar3,local_1d0);
          *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
    }
    uVar4 = fn_00656538(auStack_5c,param_2);
    iVar2 = local_60;
    iVar7 = fn_00626c2c(param_1,local_60,uVar4);
    iVar7 = fn_00620dec((int)*(char *)(param_2 + 5),iVar2,(int)*(char *)(iVar7 + 0x8a),0);
    if (iVar7 != 0) {
      fn_00301f50(&local_208,0x1a0);
      local_208 = (undefined1 *)CONCAT13(((unsigned int)(local_208) >> 24) & 0xff,0x40000);
      local_204 = 6;
      local_202 = 3;
      local_201 = 8;
      local_208 = (local_208 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(*(undefined1 *)(param_2 + 5),*(undefined1 *)(param_2 + 5))) & 0xffff);
      local_1f0 = 1;
      local_1ec = iVar7;
      fn_0062187c(param_1,&local_208,iVar2);
      if (local_1ec != 0) {
        fn_0062abdc(param_1,iVar2,&local_208,param_3);
        fn_00654c08(param_1,&local_208,iVar2);
        fn_0017821c(param_4 + *(int *)(param_4 + 4) * 0x1a0 + 0x2088,&local_208,0x1a0);
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
    }
    iVar2 = local_60;
    iVar7 = fn_00620f7c((int)*(char *)(param_2 + 5),local_60,0);
    if (iVar7 != 0) {
      fn_00301f50(&local_208,0x1a0);
      local_208 = (undefined1 *)CONCAT13(((unsigned int)(local_208) >> 24) & 0xff,0x40000);
      local_204 = 7;
      local_202 = 4;
      local_201 = 8;
      local_208 = (local_208 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(*(undefined1 *)(param_2 + 5),*(undefined1 *)(param_2 + 5))) & 0xffff);
      local_1f0 = 1;
      local_1ec = iVar7;
      fn_0062187c(param_1,&local_208,iVar2);
      if (local_1ec != 0) {
        fn_00654c08(param_1,&local_208,iVar2);
        fn_0017821c(param_4 + *(int *)(param_4 + 4) * 0x1a0 + 0x2088,&local_208,0x1a0);
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
    }
    uVar1 = *(undefined1 *)(param_2 + 5);
    fn_00301f50(&local_200,0x1a0);
    local_1e8 = 1;
    local_1fe = 4;
    local_1fc = 4;
    local_208 = auStack_e6;
    local_200 = uVar1;
    local_1ff = uVar1;
    iVar2 = fn_006295f4(param_1,(int)*(char *)(param_2 + 5),param_3,1);
    if (iVar2 != 0) {
      fn_0017821c(param_4 + *(int *)(param_4 + 4) * 0x1a0 + 0x2088,&local_200,0x1a0);
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
    }
    fn_00626660(param_1,param_4,param_3);
    iVar2 = fn_0062285c(param_1,param_3);
    if (iVar2 == 0) {
      fn_006267fc(param_1,local_60,param_3,param_4);
      return;
    }
  }
  return;
}


