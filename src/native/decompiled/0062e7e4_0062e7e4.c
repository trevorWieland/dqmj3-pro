#include "0062e7e4_0062e7e4.h"



void fn_0062e7e4(int param_1,int param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  char local_e8 [2];
  undefined1 local_e6;
  char local_e4;
  undefined1 auStack_d4 [5];
  char local_cf;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined2 local_7c;
  char local_79;
  undefined1 local_78;
  short *local_74;
  char local_70 [8];
  char acStack_68 [16];
  char local_58 [8];
  int local_50;
  short *local_4c;
  char *local_48;
  int local_3c;
  int local_34;
  int iStack_30;
  int local_2c;
  int *local_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_0062a40c(param_1);
  iVar6 = fn_00163a00();
  if (iVar6 == 1) {
    fn_0062a40c(local_34,param_2);
    iVar6 = fn_001639e4();
    if (iVar6 != 0x1a) {
      local_8c = (int)*(char *)(param_2 + 5);
      iVar6 = local_2c + 0x180388;
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_4c = (short *)(iVar6 + local_8c * 0x418 + -0x4080);
      local_90 = 0;
      if (0 < *local_28) {
        do {
          if (*local_4c < 1) {
            return;
          }
          cVar2 = *(char *)((int)local_4c + 0x67);
          bVar15 = cVar2 == '\0';
          if (bVar15) {
            cVar2 = (char)local_4c[0x3b];
          }
          bVar16 = bVar15 && cVar2 == '\0';
          if (bVar15 && cVar2 == '\0') {
            bVar16 = (char)local_4c[0x34] == '\0';
          }
          if (!bVar16) {
            return;
          }
          if (*(char *)((int)local_28 + local_90 * 0x1a0 + 0x186) == '\0') {
            cVar2 = *(char *)((int)local_28 + local_90 * 0x1a0 + 9);
            iVar7 = (int)cVar2;
            local_48 = acStack_68 + iVar7 + 0x10;
            if (acStack_68[iVar7] == '\0') {
              iVar8 = iVar6 + iVar7 * 0x418;
              local_74 = (short *)(iVar8 + -0x4080);
              if (0 < *local_74) {
                cVar4 = *(char *)(iVar8 + -0x4019);
                bVar15 = cVar4 == '\0';
                if (bVar15) {
                  cVar4 = *(char *)(iVar8 + -0x400a);
                }
                bVar16 = bVar15 && cVar4 == '\0';
                if (bVar15 && cVar4 == '\0') {
                  bVar16 = *(char *)(iVar8 + -0x4018) == '\0';
                }
                if (bVar16) {
                  iVar8 = fn_006f44fc(local_4c,0x1e0);
                  if ((iVar8 == 0) && (iVar8 = fn_006f44fc(local_74,0x90), iVar8 != 0)) {
                    sVar13 = 0x90;
                  }
                  else {
                    iVar8 = fn_006f44fc(local_4c,0x1e0);
                    if ((iVar8 != 0) || (iVar8 = fn_006f44fc(local_74,0x91), iVar8 == 0))
                    goto LAB_0062ee3c;
                    sVar13 = 0x91;
                  }
                  iVar8 = fn_006f447c(local_74);
                  if (((iVar8 != 0) && (local_74[0x140] == 0)) &&
                     (iVar8 = fn_00624edc(local_34,sVar13,iVar7,iVar6,0), iVar8 != 0)) {
                    bVar3 = *(byte *)((int)local_74 + 0x59);
                    if (bVar3 < 3) {
                      local_9c = 1;
LAB_0062ea18:
                      local_50 = 1;
                    }
                    else {
                      if (bVar3 == 3) {
                        local_9c = 2;
                        goto LAB_0062ea18;
                      }
                      if (bVar3 == 4) {
                        local_50 = 1;
                        local_9c = 2;
                      }
                    }
                    local_a0 = fn_00660ab8(local_74);
                    fn_006565b8(auStack_d4);
                    local_7c = (undefined2)local_a0;
                    local_78 = (undefined1)local_8c;
                    local_79 = cVar2;
                    fn_006564f4(auStack_d4,&local_7c,0,1,0);
                    local_84 = 1;
                    if (*(char *)((int)local_74 + 0x59) < '\x04') {
                      local_70[0] = (char)local_8c;
                      local_88 = 0;
LAB_0062ead4:
                      do {
                        pcVar9 = (char *)fn_006228ac(local_28);
                        local_28[1] = local_28[1] + 1;
                        uVar5 = fn_0061dbbc(local_a0,iVar7,local_8c,iVar6);
                        *(undefined2 *)(pcVar9 + 0x18) = uVar5;
                        *pcVar9 = cVar2;
                        pcVar9[1] = local_70[local_88];
                        pcVar9[2] = '\x03';
                        *(short *)(pcVar9 + 4) = sVar13;
                        pcVar9[6] = '\x03';
                        pcVar9[7] = '\x01';
                        fn_00655a48(local_e8,(int)(char)uVar5,0);
                        local_e6 = 1;
                        bVar15 = true;
                        if ((char)local_74[0x44] == '\0') {
                          bVar15 = *(char *)((int)local_74 + 0x87) != '\0';
                          if (bVar15) goto LAB_0062eb70;
                        }
                        else {
                          pcVar9[0x147] = '\x01';
LAB_0062eb70:
                          pcVar9[0x18e] = '\x01';
                        }
                        local_3c = fn_006f44fc(local_4c,0x4f);
                        iVar8 = local_90;
                        iVar14 = 0;
                        iVar12 = 0;
                        if (0 < *(short *)(pcVar9 + 0x18)) {
                          do {
                            iVar10 = fn_006259a4(local_34,auStack_d4,iVar6);
                            local_e8[0] = (char)iVar10;
                            pcVar9[iVar8 + 0xf] = local_e8[0];
                            local_e4 = local_e4 + '\x01';
                            if ((iVar10 == 0) || (iVar10 = fn_006f44fc(local_4c,0xe8), iVar10 == 0)
                               ) {
                              if (!bVar15) {
                                fn_00616c50(local_a0,(int)*(short *)(pcVar9 + 0x18),iVar12,
                                             (int)*pcVar9,(int)pcVar9[1],iVar6,local_e8,
                                             pcVar9 + iVar12 * 8 + 0x1c,0);
                                if (sVar13 == 0x90) {
                                  uVar11 = fn_00300f74((*(int *)(pcVar9 + iVar12 * 8 + 0x1c) / 2) *
                                                        local_50,local_9c);
                                  *(undefined4 *)(pcVar9 + iVar12 * 8 + 0x1c) = uVar11;
                                }
                                else if (sVar13 == 0x91) {
                                  cVar4 = fn_0063a54c(1,3);
                                  uVar11 = fn_00300f74(((int)(*(int *)(pcVar9 + iVar12 * 8 + 0x1c)
                                                               * (int)cVar4 +
                                                              ((uint)(*(int *)(pcVar9 + iVar12 * 8 +
                                                                                        0x1c) *
                                                                      (int)cVar4 >> 0x1f) >> 0x1e))
                                                        >> 2) * local_50,local_9c);
                                  *(undefined4 *)(pcVar9 + iVar12 * 8 + 0x1c) = uVar11;
                                }
                                if ((local_3c == 0) ||
                                   (iVar10 = fn_00624edc(local_34,0x4f,(int)pcVar9[1],iVar6,0),
                                   iVar10 == 0)) {
                                  iVar14 = iVar14 + *(int *)(pcVar9 + iVar12 * 8 + 0x1c);
                                }
                                else {
                                  pcVar1 = pcVar9 + iVar12 * 8 + 0x1c;
                                  pcVar1[0] = '\0';
                                  pcVar1[1] = '\0';
                                  pcVar1[2] = '\0';
                                  pcVar1[3] = '\0';
                                  pcVar9[iVar12 + 0x186] = '\x01';
                                }
                              }
                            }
                            else {
                              pcVar9[0x18d] = '\x01';
                            }
                            iVar12 = iVar12 + 1;
                          } while (iVar12 < *(short *)(pcVar9 + 0x18));
                          if (0 < iVar14) {
                            fn_00629840(local_34,pcVar9,iVar6);
                            fn_006558e4(local_e8,local_a0,(int)local_cf,(int)pcVar9[1],
                                         local_34 + 0x24,iVar6,0);
                            fn_00618b44(local_a0,(int)*pcVar9,(int)pcVar9[1],iVar6,local_e8,
                                         pcVar9 + 0x58,0);
                          }
                        }
                        fn_00629840(local_34,pcVar9,iVar6);
                        cVar4 = fn_00691df0(local_a0);
                        pcVar9[0x17] = cVar4;
                        fn_0062187c(local_34,pcVar9,iVar6);
                        fn_0062454c(local_34,pcVar9,iVar6,1,1);
                        fn_0062abdc(local_34,iVar6,pcVar9,local_2c);
                        *(int *)(pcVar9 + 0x198) = *(int *)(pcVar9 + 0x198) << 1;
                        *(int *)(pcVar9 + 0x194) = *(int *)(pcVar9 + 0x194) << 1;
                        fn_00654c08(local_34,pcVar9,iVar6);
                        local_88 = local_88 + 1;
                      } while (local_88 < local_84);
                    }
                    else {
                      cVar4 = fn_00624030(local_34,auStack_d4,iVar6,local_70,0x14,0);
                      local_84 = (int)cVar4;
                      local_88 = 0;
                      if (0 < local_84) goto LAB_0062ead4;
                    }
                    local_48[-0x10] = '\x01';
                  }
                }
              }
            }
          }
LAB_0062ee3c:
          local_90 = local_90 + 1;
        } while (local_90 < *local_28);
      }
    }
  }
  return;
}


