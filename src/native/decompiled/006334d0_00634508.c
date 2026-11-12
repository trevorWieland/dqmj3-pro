#include "006334d0_00634508.h"



void fn_00634508(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_r1;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 local_5c [4];
  undefined1 local_58 [16];
  undefined1 auStack_48 [20];
  undefined4 local_34;
  int iStack_30;
  int local_2c;
  int *piStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  piStack_28 = param_4;
  iVar4 = fn_0062a40c(param_1);
  cVar2 = *(char *)(param_2 + 5);
  iVar10 = (int)cVar2;
  iVar12 = local_2c + 0x180388;
  iVar5 = iVar12 + iVar10 * 0x418;
  if (0 < *(short *)(iVar5 + -0x4080)) {
    cVar1 = *(char *)(iVar5 + -0x4019);
    bVar14 = cVar1 == '\0';
    if (bVar14) {
      cVar1 = *(char *)(iVar5 + -0x400a);
    }
    bVar15 = bVar14 && cVar1 == '\0';
    if (bVar14 && cVar1 == '\0') {
      bVar15 = *(char *)(iVar5 + -0x4018) == '\0';
    }
    if (bVar15) {
      iVar5 = 0;
      if (*param_4 < 1) {
        return;
      }
      while (*(char *)((int)param_4 + iVar5 * 0x1a0 + 0x186) == '\0') {
        iVar5 = iVar5 + 1;
        if (*param_4 <= iVar5) {
          return;
        }
      }
      iVar5 = fn_00692448(iVar4);
      if (iVar5 != 0) {
        fn_00655c40(auStack_48,iVar12);
      }
      puVar6 = (undefined1 *)fn_006228ac(param_4);
      param_4[1] = param_4[1] + 1;
      *(undefined2 *)(puVar6 + 0x18) = 1;
      *puVar6 = 0;
      puVar6[1] = cVar2;
      puVar6[2] = 4;
      *(undefined2 *)(puVar6 + 4) = 5;
      uVar3 = fn_00691d5c(iVar4);
      puVar6[6] = uVar3;
      uVar3 = fn_00163a00(iVar4);
      puVar6[7] = uVar3;
      fn_0062c158(iVar4,local_5c,local_58);
      if (iVar4 == 0xa5 || iVar4 == 0xa6) {
        *(undefined4 *)(puVar6 + 0x1c) = 0;
        puVar6[8] = 1;
      }
      else {
        iVar5 = 0;
        iVar11 = 0;
        if (0 < *param_4) {
          do {
            cVar2 = *(char *)((int)param_4 + iVar11 * 0x1a0 + 0x186);
            if (cVar2 != '\0') {
              if (cVar2 == '\x01') {
                fn_006325fc(local_34,iVar4,iVar10,iVar10,1,local_5c[0],local_58[0],
                             (int)(short)param_4[0x1457],auStack_48,iVar12,puVar6);
LAB_0063480c:
                iVar5 = iVar5 + 1;
              }
              else if (cVar2 == '\x02') {
                iVar9 = (int)*(char *)((int)param_4 + iVar11 * 0x1a0 + 9);
                iVar13 = 0;
                iVar7 = iVar12 + iVar9 * 0x418 + -0x4080;
                iVar8 = fn_00163a00(iVar4);
                if (iVar8 == 1) {
                  iVar8 = fn_00163c9c(iVar4);
                  if (iVar8 == 0) {
                    iVar4 = fn_00660ab8(iVar7);
                  }
                }
                else {
                  iVar8 = fn_001639e4();
                  if (iVar8 == 0x1b) {
                    iVar13 = (int)*(short *)(iVar7 + 0x1e);
                  }
                }
                fn_006325fc(local_34,iVar4,iVar9,iVar10,2,local_5c[0],local_58[0],iVar13,auStack_48
                             ,iVar12,puVar6);
                iVar5 = iVar5 + 1;
              }
              else if (cVar2 == '\x03') {
                iVar4 = 0x283;
                cVar2 = *(char *)((int)param_4 + iVar11 * 0x1a0 + 9);
                fn_0062c158(0x283,local_5c,local_58);
                fn_006325fc(local_34,0x283,(int)cVar2,iVar10,3,local_5c[0],local_58[0],0,auStack_48
                             ,iVar12,puVar6);
                *(undefined2 *)(puVar6 + 4) = 0x11;
                goto LAB_0063480c;
              }
            }
            iVar9 = fn_001639e4(iVar4);
          } while (((iVar9 != 0x28) || (iVar5 < 1)) && (iVar11 = iVar11 + 1, iVar11 < *param_4));
        }
        uVar3 = fn_00691df0(iVar4);
        puVar6[0x17] = uVar3;
        fn_0062187c(local_34,puVar6,iVar12);
        iVar5 = fn_006f4868(local_2c + 0x180470,extraout_r1,0x100,0);
        if (((iVar5 != 0) && (iVar4 = fn_0069235c(iVar4), iVar4 != 0)) &&
           (iVar4 = fn_0061be08((int)(char)puVar6[1]), iVar4 == 0)) {
          iVar4 = 3;
          while (iVar5 = iVar4, iVar4 = iVar5 + 2, iVar4 < 0x61) {
            if ((((iVar4 == 6 || iVar4 == 7) || (iVar4 == 8 || iVar4 == 9)) ||
                ((iVar4 == 10 || iVar4 == 0xb ||
                 ((((iVar4 == 0xc || iVar4 == 0xe || (iVar4 == 0xf || iVar4 == 0x10)) ||
                   (iVar4 == 0x12 || iVar4 == 0x15)) ||
                  ((iVar4 == 0x19 || iVar4 == 0x2b || (iVar4 == 0x54 || iVar4 == 0x55)))))))) ||
               ((iVar4 == 0x56 || iVar4 == 0x57 ||
                ((iVar4 == 0x58 || iVar4 == 0x59) || iVar4 == 0x5a)))) {
              puVar6[iVar5 + 0xbb] = 0;
            }
            if (((iVar4 == 5 || iVar4 == 6) || (iVar4 == 7 || iVar4 == 8)) ||
               ((((iVar4 == 9 || iVar4 == 10 ||
                  (((iVar4 == 0xb || iVar4 == 0xd || (iVar4 == 0xe || iVar4 == 0xf)) ||
                   (iVar4 == 0x11 || iVar4 == 0x14)))) ||
                 (((iVar4 == 0x18 || iVar4 == 0x2a || (iVar4 == 0x53 || iVar4 == 0x54)) ||
                  (iVar4 == 0x55 || iVar4 == 0x56)))) ||
                ((iVar4 == 0x57 || iVar4 == 0x58) || iVar4 == 0x59)))) {
              puVar6[iVar5 + 0xbc] = 0;
            }
          }
        }
        fn_0062454c(local_34,puVar6,iVar12,1,1);
        fn_0062abdc(local_34,iVar12,puVar6,local_2c);
        *(int *)(puVar6 + 0x194) = *(int *)(puVar6 + 0x194) << 1;
        *(int *)(puVar6 + 0x198) = *(int *)(puVar6 + 0x198) << 1;
        fn_00654c08(local_34,puVar6,iVar12);
      }
    }
  }
  fn_00626660(local_34,param_4,local_2c);
  iVar4 = fn_0062285c(local_34,local_2c);
  if (iVar4 == 0) {
    fn_006267fc(local_34,iVar12,local_2c,param_4);
    return;
  }
  return;
}



void fn_0063372c(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined1 auStack_90 [118];
  undefined1 local_1a [10];
  
  if (*(char *)(param_3 + 0x180384) != '\0') {
    bVar1 = false;
    if ((((*(char *)(param_3 + 0x18089c) != '\0') || (*(char *)(param_3 + 0x180cb4) != '\0')) ||
        (*(char *)(param_3 + 0x1810cc) != '\0')) || ("typeof"[param_3] != '\0')) {
      bVar1 = true;
    }
    if (((*(char *)(param_3 + 0x18295c) != '\0') || (*(char *)(param_3 + 0x182d74) != '\0')) ||
       ((*(char *)(param_3 + 0x18318c) != '\0' || (*(char *)(param_3 + 0x1835a4) != '\0' || bVar1)))
       ) {
      fn_00301a9c(auStack_90,param_2,0x7a);
      local_1a[0] = 1;
      fn_0063adb4(local_1a,param_3);
      fn_0062c1c8(param_3 + 0x180388,local_1a,param_3);
    }
  }
  return;
}



void fn_006334d0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r1_00;
  int iVar7;
  char *pcVar8;
  int iVar9;
  short *psVar10;
  char cVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uStack_36178;
  undefined4 uStack_36174;
  undefined4 uStack_36170;
  undefined4 uStack_3616c;
  undefined4 uStack_36168;
  undefined4 uStack_36164;
  undefined1 auStack_36160 [221440];
  undefined1 auStack_60 [48];
  int local_30;
  int local_2c;
  int local_28;
  
  uStack_36178 = *(undefined4 *)(param_2 + 0x58);
  uStack_36174 = *(undefined4 *)(param_2 + 0x5c);
  uStack_36170 = *(undefined4 *)(param_2 + 0x60);
  uStack_3616c = *(undefined4 *)(param_2 + 100);
  uStack_36168 = *(undefined4 *)(param_2 + 0x68);
  uStack_36164 = *(undefined4 *)(param_2 + 0x6c);
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  fn_00619504(auStack_36160);
  iVar2 = local_28;
  iVar7 = 0x20;
  iVar9 = local_28 + 0x180388;
  uVar6 = extraout_r1;
  do {
    cVar1 = (char)iVar7;
    if (*(char *)(iVar2 + 0x180483) != '\0') {
      uVar5 = iVar7 - 0x10;
      if (uVar5 >= 8) {
        uVar6 = iVar7 - 0x18;
      }
      if (uVar5 < 8 || uVar6 < 8) {
        bVar12 = uVar5 < 4;
        if (!bVar12) {
          uVar5 = iVar7 - 0x18;
        }
        if ((bVar12 || uVar5 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
          cVar3 = cVar1 + '\x04';
        }
        else {
          cVar3 = cVar1 + -4;
        }
        iVar7 = (int)cVar3;
      }
      else if (iVar7 - 0x20U < 2) {
        if (iVar7 == 0x20 || iVar7 == 0x22) {
          iVar7 = 0x21;
        }
        else {
          iVar7 = 0x20;
        }
      }
      else if (iVar7 - 0x22U < 2) {
        if (iVar7 == 0x20 || iVar7 == 0x22) {
          iVar7 = 0x23;
        }
        else {
          iVar7 = 0x22;
        }
      }
      else {
        iVar7 = 0;
      }
    }
    psVar10 = (short *)(iVar9 + iVar7 * 8 + 0x4180);
    uVar13 = fn_0069ccf8((int)*psVar10);
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20);
    if ((int)uVar13 != 0) {
      fn_0061ddd8(auStack_60,iVar7,iVar9,local_30 + 4,local_2c,auStack_36160);
      uVar6 = iVar7 - 0x10;
      bVar12 = uVar6 < 4;
      if (!bVar12) {
        uVar6 = iVar7 - 0x18;
      }
      if ((bVar12 || uVar6 < 4) || (iVar7 == 0x20 || iVar7 == 0x22)) {
        pcVar8 = (char *)&uStack_36178;
        cVar11 = '\x10';
        cVar3 = '\x18';
      }
      else {
        pcVar8 = (char *)&uStack_3616c;
        cVar11 = '\x14';
        cVar3 = '\x1c';
      }
      iVar7 = fn_0061dd0c(auStack_60);
      cVar4 = '\0';
      if (iVar7 != 0) {
        pcVar8[4] = cVar3;
        *pcVar8 = '\x01';
        cVar4 = cVar3 + '\x01';
        pcVar8[8] = cVar11;
        pcVar8[5] = cVar4;
        pcVar8[9] = cVar11 + '\x01';
        pcVar8[6] = cVar3 + '\x02';
        pcVar8[10] = cVar11 + '\x02';
        pcVar8[7] = cVar3 + '\x03';
        pcVar8[0xb] = cVar11 + '\x03';
      }
      if (pcVar8 != (char *)0x0) {
        cVar4 = *pcVar8;
      }
      if (pcVar8 != (char *)0x0 && cVar4 != '\0') {
        fn_00619720(psVar10);
      }
      fn_0061de0c(auStack_60);
      uVar6 = extraout_r1_00;
    }
    iVar7 = (int)(char)(cVar1 + '\x01');
  } while (iVar7 < 0x22);
  fn_0061d498(iVar9,&uStack_36178,local_28);
  return;
}


