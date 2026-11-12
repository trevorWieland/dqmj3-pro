#include "0062ddf0_0062ddf0.h"



undefined1 * fn_0062ddf0(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *local_5328;
  undefined4 *local_5324;
  undefined4 *local_5320;
  undefined1 auStack_531c [5];
  char local_5317;
  char local_530a;
  undefined *local_52e8;
  undefined1 local_52e4;
  char local_52e3;
  undefined1 local_52e2;
  undefined4 local_52e0;
  undefined4 local_52dc;
  byte local_52d6;
  undefined1 local_52d2;
  undefined4 local_52d0;
  undefined4 *local_52cc;
  uint local_52c8;
  undefined4 uStack_52c4;
  undefined4 uStack_52c0;
  undefined4 uStack_52bc;
  undefined4 uStack_52b8;
  uint local_52b4;
  undefined1 auStack_52b0 [20828];
  short local_154;
  char local_150;
  undefined1 auStack_14c [52];
  undefined1 auStack_118 [224];
  int local_38;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  
  local_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  uVar3 = fn_00797194(param_2,param_3);
  fn_00656538(auStack_531c,uVar3);
  fn_0062a40c(local_38,auStack_531c);
  iVar4 = fn_0069217c();
  if (((iVar4 == 0) || (*(char *)(local_38 + 0x18) != '\0')) ||
     (cVar1 = *(char *)(param_5 + 0x5160), (cVar1 != '\0' && cVar1 != '\x03') && cVar1 != '\x05')) {
    return auStack_531c;
  }
  if (local_530a == '\0') {
    uVar3 = fn_00656538(auStack_118,auStack_531c);
    iVar10 = local_2c + 0x180388;
    iVar4 = fn_00626c2c(local_38,iVar10,uVar3);
    if ((*(char *)(iVar4 + 0x59) != '\x04') && (*(char *)(iVar4 + 0x8d) < '\x01')) {
      iVar4 = fn_0061be08((int)local_5317);
      uVar11 = param_3 + 1;
      if (uVar11 < (uint)((param_2[1] - *param_2) / 0x34)) {
        do {
          fn_006228c8(auStack_52b0);
          uVar7 = (param_2[1] - *param_2) / 0x34;
          if (uVar7 <= uVar11) {
            fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar11,uVar7);
          }
          local_52e8 = &DAT_00859628;
          iVar14 = *param_2 + uVar11 * 0x34;
          local_52e4 = *(undefined1 *)(iVar14 + 4);
          local_52e3 = *(char *)(iVar14 + 5);
          local_52e2 = *(undefined1 *)(iVar14 + 6);
          local_52e0 = *(undefined4 *)(iVar14 + 8);
          fn_006f94f4(&local_52dc,iVar14 + 0xc);
          local_52dc = CONCAT22((short)((uint)*(undefined4 *)(iVar14 + 0xc) >> 0x10),
                                *(undefined2 *)(iVar14 + 0xc));
          local_52d2 = *(undefined1 *)(iVar14 + 0x16);
          local_52d0 = *(undefined4 *)(iVar14 + 0x18);
          local_52cc = *(undefined4 **)(iVar14 + 0x1c);
          local_52c8 = *(uint *)(iVar14 + 0x20);
          uStack_52c4 = *(undefined4 *)(iVar14 + 0x24);
          uStack_52c0 = *(undefined4 *)(iVar14 + 0x28);
          uStack_52bc = *(undefined4 *)(iVar14 + 0x2c);
          uStack_52b8 = *(undefined4 *)(iVar14 + 0x30);
          uVar3 = fn_0062a40c(local_38,auStack_531c);
          uVar5 = fn_0062a40c(local_38,&local_52e8);
          uVar6 = fn_00692284(uVar3);
          uVar7 = fn_00692284(uVar5);
          bVar16 = uVar6 == uVar7;
          if (bVar16) {
            uVar7 = (uint)local_52d6;
          }
          if (bVar16 && uVar7 == 0) {
            iVar14 = (int)local_52e3;
            uVar7 = iVar14 - 0x10;
            bVar16 = uVar7 < 4;
            if (!bVar16) {
              uVar7 = iVar14 - 0x18;
            }
            if ((bVar16 || uVar7 < 4) || (iVar14 == 0x20 || iVar14 == 0x22)) {
              iVar14 = 1;
            }
            else {
              iVar14 = 0;
            }
            if (iVar4 != iVar14) {
              uVar3 = fn_00656538(auStack_14c,&local_52e8);
              iVar14 = fn_00626c2c(local_38,iVar10,uVar3);
              iVar8 = fn_006f447c(iVar14);
              cVar1 = '\0';
              if (iVar8 != 0) {
                cVar1 = *(char *)(iVar14 + 0x59);
              }
              if ((iVar8 != 0 && cVar1 != '\x04') && (*(char *)(iVar14 + 0x8d) < '\x01')) {
                fn_00630d4c(local_38,&local_52e8,local_2c,auStack_52b0);
                if (local_150 == '\0' || local_150 == '\x03') {
                  if (uVar11 != 0xffffffff) {
                    local_52b4 = uVar11;
                    iVar4 = fn_00797194(param_2,uVar11);
                    cVar1 = *(char *)(iVar4 + 5);
                    uVar3 = fn_0062a40c(local_38,auStack_531c);
                    fn_0063306c(local_38,uVar3,(int)local_5317,(int)cVar1,
                                 (int)(short)*(undefined4 *)(param_5 + 0x515c),(int)local_154,
                                 local_2c);
                    iVar10 = 0;
                    *(undefined4 *)(param_5 + 0x515c) = 0;
                    iVar4 = fn_00797194(param_2,param_3);
                    uVar7 = (uint)(char)(*(char *)(iVar4 + 0x13) + (char)param_3);
                    iVar4 = fn_00797194(param_2,param_3);
                    fn_0019bc50(&local_52e8,iVar4 + 0xc);
                    local_52e8 = (undefined *)CONCAT22(((unsigned int)(local_52e8) >> 16) & 0xffff,7);
                    iVar4 = fn_00797194(param_2,local_52b4);
                    fn_0019bc50(&local_52e0,iVar4 + 0xc);
                    local_52e0 = CONCAT22(((unsigned int)(local_52e0) >> 16) & 0xffff,7);
                    uVar3 = fn_00797194(param_2,param_3);
                    fn_0065646c(uVar3,&local_52e8,0);
                    uVar3 = fn_00797194(param_2,local_52b4);
                    fn_0065646c(uVar3,&local_52e0,0);
                    iVar4 = fn_00797194(param_2,local_52b4);
                    fn_00655e24(local_38 + 4,(int)*(char *)(iVar4 + 5));
                    local_5328 = (undefined4 *)0x0;
                    local_5324 = (undefined4 *)0x0;
                    local_5320 = (undefined4 *)0x0;
                    iVar4 = fn_00797194(param_2,local_52b4);
                    uVar11 = local_52b4;
                    if ('\0' < *(char *)(iVar4 + 0x13)) {
                      do {
                        uVar6 = local_52b4 + iVar10;
                        uVar11 = (param_2[1] - *param_2) / 0x34;
                        if (uVar11 <= uVar6) {
                          fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar6,uVar11);
                        }
                        puVar13 = local_5324;
                        iVar4 = *param_2 + uVar6 * 0x34;
                        if (local_5324 == local_5320) {
                          uVar11 = ((int)local_5324 - (int)local_5328) / 0x34;
                          if (uVar11 < (uint)(((int)local_5320 - (int)local_5328) / 0x34)) {
                            puVar9 = local_5324 + 0xd;
                            if (local_5324 != (undefined4 *)0x0) {
                              puVar9 = local_5324 + -0xd;
                              local_5324 = local_5324 + 0xd;
                              fn_00656538(puVar13,puVar9);
                              puVar9 = local_5324;
                            }
                            local_5324 = puVar9;
                            fn_007a1c04(puVar13,puVar13 + -0xd,puVar13);
                            fn_006565e0(puVar13,iVar4);
                          }
                          else {
                            local_52c8 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
                            if (local_52c8 < uVar11 + 0x20) {
                              local_52c8 = uVar11 + 0x20;
                            }
                            puVar9 = (undefined4 *)fn_00100fc6(local_52c8 * 0x34,0);
                            local_52cc = puVar9;
                            for (puVar15 = local_5328; puVar15 != puVar13; puVar15 = puVar15 + 0xd)
                            {
                              if (puVar9 != (undefined4 *)0x0) {
                                fn_00656538(puVar9,puVar15);
                              }
                              puVar9 = puVar9 + 0xd;
                            }
                            if (local_52cc + (((int)puVar13 - (int)local_5328) / 0x34) * 0xd !=
                                (undefined4 *)0x0) {
                              fn_00656538(local_52cc +
                                           (((int)puVar13 - (int)local_5328) / 0x34) * 0xd,iVar4);
                            }
                            puVar2 = local_5324;
                            puVar9 = local_52cc + (((int)puVar13 - (int)local_5328) / 0x34) * 0xd;
                            puVar15 = local_5324;
                            for (; local_5324 = puVar15, puVar13 != puVar2; puVar13 = puVar13 + 0xd)
                            {
                              puVar9 = puVar9 + 0xd;
                              if (puVar9 != (undefined4 *)0x0) {
                                fn_00656538(puVar9,puVar13);
                              }
                              puVar15 = local_5324;
                            }
                            iVar4 = (int)puVar15 - (int)local_5328;
                            for (puVar13 = local_5328; puVar13 != puVar15; puVar13 = puVar13 + 0xd)
                            {
                              (**(code **)*puVar13)(puVar13);
                            }
                            fn_001008c4(local_5328,((int)local_5320 - (int)local_5328) / 0x34,0);
                            local_5328 = local_52cc;
                            local_5320 = local_52cc + local_52c8 * 0xd;
                            local_5324 = local_52cc + (iVar4 / 0x34) * 0xd + 0xd;
                          }
                        }
                        else {
                          puVar13 = local_5324 + 0xd;
                          bVar16 = local_5324 != (undefined4 *)0x0;
                          local_5324 = puVar13;
                          if (bVar16) {
                            fn_00656538();
                          }
                        }
                        iVar10 = iVar10 + 1;
                        iVar4 = fn_00797194(param_2,local_52b4);
                        uVar11 = local_52b4;
                      } while (iVar10 < *(char *)(iVar4 + 0x13));
                    }
                    while (uVar11 = uVar11 - 1, (int)uVar7 <= (int)uVar11) {
                      uVar12 = ((int)local_5324 - (int)local_5328) / 0x34 + uVar11;
                      uVar6 = (param_2[1] - *param_2) / 0x34;
                      if (uVar6 <= uVar12) {
                        fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar12,uVar6);
                      }
                      puVar13 = (undefined4 *)(*param_2 + uVar12 * 0x34);
                      uVar6 = (param_2[1] - *param_2) / 0x34;
                      if (uVar6 <= uVar11) {
                        fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar11,uVar6);
                      }
                      puVar9 = (undefined4 *)(*param_2 + uVar11 * 0x34);
                      uVar3 = puVar9[1];
                      uVar5 = puVar9[2];
                      uVar17 = puVar9[3];
                      uVar18 = puVar9[4];
                      uVar19 = puVar9[5];
                      uVar20 = puVar9[6];
                      uVar21 = puVar9[7];
                      *puVar13 = *puVar9;
                      puVar13[1] = uVar3;
                      puVar13[2] = uVar5;
                      puVar13[3] = uVar17;
                      puVar13[4] = uVar18;
                      puVar13[5] = uVar19;
                      puVar13[6] = uVar20;
                      puVar13[7] = uVar21;
                      uVar3 = puVar9[9];
                      uVar5 = puVar9[10];
                      uVar17 = puVar9[0xb];
                      uVar18 = puVar9[0xc];
                      puVar13[8] = puVar9[8];
                      puVar13[9] = uVar3;
                      puVar13[10] = uVar5;
                      puVar13[0xb] = uVar17;
                      puVar13[0xc] = uVar18;
                    }
                    iVar4 = (int)local_5324 - (int)local_5328 >> 0x1f;
                    uVar11 = 0;
                    if (((int)local_5324 - (int)local_5328) / 0x34 + iVar4 != iVar4) {
                      do {
                        uVar12 = uVar7 + uVar11;
                        uVar6 = (param_2[1] - *param_2) / 0x34;
                        if (uVar6 <= uVar12) {
                          fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar12,uVar6);
                        }
                        puVar13 = (undefined4 *)(*param_2 + uVar12 * 0x34);
                        uVar6 = ((int)local_5324 - (int)local_5328) / 0x34;
                        if (uVar6 <= uVar11) {
                          fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar11,uVar6);
                        }
                        uVar6 = uVar11 + 1;
                        puVar9 = local_5328 + uVar11 * 0xd;
                        uVar3 = puVar9[1];
                        uVar5 = puVar9[2];
                        uVar17 = puVar9[3];
                        uVar18 = puVar9[4];
                        uVar19 = puVar9[5];
                        uVar20 = puVar9[6];
                        uVar21 = puVar9[7];
                        *puVar13 = *puVar9;
                        puVar13[1] = uVar3;
                        puVar13[2] = uVar5;
                        puVar13[3] = uVar17;
                        puVar13[4] = uVar18;
                        puVar13[5] = uVar19;
                        puVar13[6] = uVar20;
                        puVar13[7] = uVar21;
                        uVar3 = puVar9[9];
                        uVar5 = puVar9[10];
                        uVar17 = puVar9[0xb];
                        uVar18 = puVar9[0xc];
                        puVar13[8] = puVar9[8];
                        puVar13[9] = uVar3;
                        puVar13[10] = uVar5;
                        puVar13[0xb] = uVar17;
                        puVar13[0xc] = uVar18;
                        uVar11 = uVar6;
                      } while (uVar6 < (uint)(((int)local_5324 - (int)local_5328) / 0x34));
                    }
                    for (; param_3 < (int)uVar7; uVar7 = uVar7 - 1) {
                      uVar11 = (param_2[1] - *param_2) / 0x34;
                      if (uVar11 <= uVar7) {
                        fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar7,uVar11);
                      }
                      uVar6 = uVar7 - 1;
                      puVar13 = (undefined4 *)(*param_2 + uVar7 * 0x34);
                      uVar11 = (param_2[1] - *param_2) / 0x34;
                      if (uVar11 <= uVar6) {
                        fn_002ff628(9,&DAT_008c7640,&DAT_008c7640,uVar6,uVar11);
                      }
                      puVar9 = (undefined4 *)(*param_2 + uVar6 * 0x34);
                      uVar3 = puVar9[1];
                      uVar5 = puVar9[2];
                      uVar17 = puVar9[3];
                      uVar18 = puVar9[4];
                      uVar19 = puVar9[5];
                      uVar20 = puVar9[6];
                      uVar21 = puVar9[7];
                      *puVar13 = *puVar9;
                      puVar13[1] = uVar3;
                      puVar13[2] = uVar5;
                      puVar13[3] = uVar17;
                      puVar13[4] = uVar18;
                      puVar13[5] = uVar19;
                      puVar13[6] = uVar20;
                      puVar13[7] = uVar21;
                      uVar3 = puVar9[9];
                      uVar5 = puVar9[10];
                      uVar17 = puVar9[0xb];
                      uVar18 = puVar9[0xc];
                      puVar13[8] = puVar9[8];
                      puVar13[9] = uVar3;
                      puVar13[10] = uVar5;
                      puVar13[0xb] = uVar17;
                      puVar13[0xc] = uVar18;
                    }
                    puVar13 = (undefined4 *)fn_00797194(param_2,param_3 + 1);
                    puVar9 = (undefined4 *)fn_00797194(&local_5328,0);
                    uVar3 = puVar9[1];
                    uVar5 = puVar9[2];
                    uVar17 = puVar9[3];
                    uVar18 = puVar9[4];
                    uVar19 = puVar9[5];
                    uVar20 = puVar9[6];
                    uVar21 = puVar9[7];
                    *puVar13 = *puVar9;
                    puVar13[1] = uVar3;
                    puVar13[2] = uVar5;
                    puVar13[3] = uVar17;
                    puVar13[4] = uVar18;
                    puVar13[5] = uVar19;
                    puVar13[6] = uVar20;
                    puVar13[7] = uVar21;
                    uVar3 = puVar9[9];
                    uVar5 = puVar9[10];
                    uVar17 = puVar9[0xb];
                    uVar18 = puVar9[0xc];
                    puVar13[8] = puVar9[8];
                    puVar13[9] = uVar3;
                    puVar13[10] = uVar5;
                    puVar13[0xb] = uVar17;
                    puVar13[0xc] = uVar18;
                    fn_007971f8(&local_5328);
                  }
                  break;
                }
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < (uint)((param_2[1] - *param_2) / 0x34));
      }
    }
  }
  return auStack_531c;
}


