#include "002b84f0_002b84f0.h"



undefined1 fn_002b84f0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_82 [6];
  char local_7c [8];
  undefined1 auStack_74 [2];
  undefined1 auStack_72 [6];
  char acStack_6c [8];
  undefined4 local_64;
  undefined1 auStack_60 [2];
  undefined1 auStack_5e [4];
  undefined1 auStack_5a [2];
  undefined1 auStack_58 [2];
  undefined1 auStack_56 [8];
  undefined1 auStack_4e [18];
  undefined1 local_3c [4];
  int local_38 [5];
  
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x38c) != '\0') {
    iVar3 = fn_00182988(DAT_008977e4);
    fn_002a19f8(iVar3 + 0x38c);
  }
  local_3c[0] = 0x1a;
  iVar3 = fn_001c2374(DAT_008977e4);
  local_64 = *(undefined4 *)(iVar3 + 8);
  iVar14 = *(int *)(*(int *)(param_1 + 4) + 0x48) + 4;
  iVar3 = fn_006a7b78(DAT_008977e4);
  if (*(char *)(iVar3 + 0x36) == '\0') {
    iVar3 = *(int *)(param_1 + 4);
    if (*(char *)(iVar3 + 0x41) == '\0') {
      if (*(char *)(iVar3 + 0x42) == '\0') {
        if (*(char *)(iVar3 + 0x43) == '\0') {
          fn_003398e4(auStack_60,*(int *)(param_1 + 8) + 0x58);
          fn_002a1b0c(local_64,auStack_60,iVar14);
        }
        else {
          iVar3 = fn_006a7b78(DAT_008977e4);
          fn_003399e0(auStack_74);
          cVar2 = '\x10';
          do {
            piVar7 = (int *)fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,(int)(char)(cVar2 + -0x10));
            if ((uint)(*piVar7 >> 0x18) < 0x80000000) {
              auStack_82[cVar2] = (char)((uint)*piVar7 >> 0x18);
            }
            cVar2 = cVar2 + '\x01';
          } while (cVar2 < '\x14');
          fn_003399fc(auStack_74,iVar3 + 0x76);
          fn_002a1bbc(local_64,auStack_74,iVar14);
        }
      }
      else {
        iVar3 = fn_006a7b78(DAT_008977e4);
        fn_001a4a3c(auStack_74);
        cVar2 = '\x10';
        do {
          piVar7 = (int *)fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,(int)(char)(cVar2 + -0x10));
          if ((uint)(*piVar7 >> 0x18) < 0x80000000) {
            local_7c[cVar2] = (char)((uint)*piVar7 >> 0x18);
          }
          cVar2 = cVar2 + '\x01';
        } while (cVar2 < '\x14');
        fn_003398b0(auStack_74,iVar3 + 0x70,*(int *)(param_1 + 8) + 0x58);
        fn_002a1ad0(local_64,auStack_74,iVar14);
      }
    }
    else {
      iVar3 = fn_006a7b78(DAT_008977e4);
      fn_00339980(auStack_60);
      cVar2 = '\x10';
      do {
        piVar7 = (int *)fn_001d4e7c(*(int *)(param_1 + 8) + 0x58,(int)(char)(cVar2 + -0x10));
        if ((uint)(*piVar7 >> 0x18) < 0x80000000) {
          auStack_5e[cVar2] = (char)((uint)*piVar7 >> 0x18);
        }
        cVar2 = cVar2 + '\x01';
      } while (cVar2 < '\x14');
      fn_003399ac(auStack_60,iVar3 + 0x58);
      fn_002a1b80(local_64,auStack_60,iVar14);
    }
  }
  else {
    local_7c[0] = *(char *)(iVar3 + 0x36);
    fn_002a1af4(local_64,local_7c,iVar14);
  }
  iVar3 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar3 + 0x3a3) == '\0') {
    iVar3 = *(int *)(param_1 + 4);
    uVar11 = *(uint *)(iVar3 + 4);
    bVar17 = *(char *)(uVar11 + 0x9a) == '\0';
    if (bVar17) {
      uVar11 = (uint)*(byte *)(uVar11 + 0x98);
    }
    if (!bVar17 || uVar11 != 0) {
      cVar2 = *(char *)(iVar3 + 0x41);
      bVar17 = cVar2 == '\0';
      if (bVar17) {
        cVar2 = *(char *)(iVar3 + 0x42);
      }
      bVar18 = bVar17 && cVar2 == '\0';
      if (bVar17 && cVar2 == '\0') {
        bVar18 = *(char *)(iVar3 + 0x43) == '\0';
      }
      if (bVar18) {
        fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
        fn_003a7cf0(param_1,local_3c,0x11);
      }
      else {
        uVar5 = fn_001603f8(auStack_82 + 2,0xff);
        fn_00163988(DAT_00897808,uVar5,0xf);
        uVar5 = fn_001603f8(auStack_82 + 2,0xff);
        fn_00163988(DAT_0089780c,uVar5,0xf);
        local_3c[0] = 0x14;
      }
      fn_002d46cc(*(undefined4 *)(param_1 + 8));
      iVar3 = fn_00174828(DAT_008977e4);
      *(undefined1 *)(iVar3 + 0x428c) = 1;
      return local_3c[0];
    }
  }
  else {
    fn_003a58c8(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),1);
    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x98) != '\0') {
      fn_002d4a9c();
      *(undefined1 *)(DAT_00897840 + 0x36) = 4;
      return 0x19;
    }
  }
  if (((*(int *)(DAT_00898840 + 0x34) == 2) ||
      (iVar3 = fn_00174828(DAT_008977e4), *(char *)(iVar3 + 0xe8) != '\x05')) ||
     (iVar3 = fn_0066e158(DAT_00898840), iVar3 != 0)) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x9a) == '\0') {
      iVar3 = fn_00182988(DAT_008977e4);
      iVar3 = fn_0066e5b4(DAT_00898840,*(undefined4 *)(iVar3 + 0x3ac));
      pcVar4 = (char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x98);
      *pcVar4 = iVar3 != 1 || *pcVar4 != '\0';
      iVar3 = fn_00182988(DAT_008977e4);
      iVar3 = fn_0066e5b4(DAT_00898840,*(undefined4 *)(iVar3 + 0x3a8));
      pcVar4 = (char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x98);
      *pcVar4 = iVar3 != 1 || *pcVar4 != '\0';
    }
    else {
      iVar3 = fn_00182988(DAT_008977e4);
      bVar1 = fn_0066e5b4(DAT_00898840,*(undefined4 *)(iVar3 + 0x3a8));
      *(byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x98) = bVar1 ^ 1;
    }
  }
  iVar3 = fn_00182988(DAT_008977e4);
  if ((*(char *)(iVar3 + 0x3a3) == '\0') ||
     (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x9a) == '\0')) {
    uVar5 = fn_001c2374(DAT_008977e4);
    iVar3 = fn_0077f550(uVar5,iVar14);
  }
  else {
    iVar3 = fn_00182988(DAT_008977e4);
    uVar12 = *(undefined4 *)(iVar3 + 0x3a8);
    uVar5 = fn_001c2374(DAT_008977e4);
    iVar3 = fn_0077f4ac(uVar5,iVar14,uVar12);
  }
  if (iVar3 != 0) {
    puVar6 = (undefined4 *)fn_001c2374(DAT_008977e4);
    iVar3 = (**(code **)*puVar6)();
    piVar7 = (int *)fn_001c2374(DAT_008977e4);
    local_38[1] = (**(code **)(*piVar7 + 4))();
    local_38[0] = iVar3;
    iVar14 = 0;
    if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x9a) == '\0') {
      iVar15 = 2;
    }
    else {
      iVar15 = 1;
    }
    do {
      iVar13 = local_38[iVar14];
      bVar17 = iVar13 == iVar3;
      uVar5 = fn_006b8a50(local_64,iVar13);
      switch(uVar5) {
      case 2:
        uVar5 = fn_006b8a80(local_64,iVar13);
        puVar9 = (undefined2 *)fn_00101a1c(auStack_5a,&LAB_001d4e64,4);
        puVar9[8] = 0;
        *(undefined1 *)(puVar9 + 9) = 0;
        *(undefined1 *)((int)puVar9 + 0x13) = 0xff;
        puVar9[10] = 0;
        *(undefined1 *)(puVar9 + 0xb) = 0;
        *(undefined1 *)((int)puVar9 + 0x17) = 0xff;
        *puVar9 = 0;
        *(undefined1 *)(puVar9 + 1) = 0;
        puVar9[2] = 0;
        *(undefined1 *)(puVar9 + 3) = 0;
        puVar9[4] = 0;
        *(undefined1 *)(puVar9 + 5) = 0;
        puVar9[6] = 0;
        *(undefined1 *)(puVar9 + 7) = 0;
        puVar9[8] = 0;
        *(undefined1 *)(puVar9 + 9) = 0;
        puVar9[10] = 0;
        *(undefined1 *)(puVar9 + 0xb) = 0;
        *(undefined1 *)(puVar9 + -1) = 0;
        *(undefined1 *)((int)puVar9 + -1) = 0;
        fn_001d4cc0(uVar5,auStack_5e + 2,bVar17);
        fn_002d4480(*(undefined4 *)(param_1 + 8),auStack_5e + 2,bVar17);
        break;
      case 3:
        iVar13 = fn_006b8a90(local_64,iVar13);
        iVar10 = fn_00182988(DAT_008977e4);
        if ((bVar17 & ~(*(byte *)(iVar10 + 0x3a3) & bVar17)) == 0) {
          if (bVar17) {
            bVar1 = 0x10;
            bVar16 = 0x14;
          }
          else {
            bVar1 = 0x14;
            bVar16 = 0x18;
          }
          if (bVar1 < bVar16) {
            do {
              if (bVar17) {
                cVar2 = bVar1 - 0x10;
              }
              else {
                cVar2 = bVar1 - 0x14;
              }
              if (-1 < *(char *)(cVar2 + iVar13 + 0x12)) {
                fn_002d3f68(*(undefined4 *)(param_1 + 8),(int)(char)bVar1,
                             *(undefined1 *)(cVar2 + iVar13 + 0x12),bVar17);
              }
              bVar1 = bVar1 + 1;
            } while ((char)bVar1 < (char)bVar16);
          }
          iVar10 = fn_006a7b78(DAT_008977e4);
          fn_006c1108(iVar13,iVar10 + 0x58,bVar17);
        }
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x41) = 1;
        break;
      case 4:
        puVar8 = (undefined1 *)fn_006b8a70(local_64,iVar13);
        iVar13 = fn_006a7b78(DAT_008977e4);
        if (bVar17) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x21;
        }
        *(undefined1 *)(iVar13 + iVar10 * 10 + -0x10a) = *puVar8;
        break;
      case 5:
        iVar13 = fn_006b8a60(local_64,iVar13);
        iVar10 = fn_00182988(DAT_008977e4);
        if ((bVar17 & ~(*(byte *)(iVar10 + 0x3a3) & bVar17)) == 0) {
          if (bVar17) {
            bVar1 = 0x10;
            bVar16 = 0x14;
          }
          else {
            bVar1 = 0x14;
            bVar16 = 0x18;
          }
          if (bVar1 < bVar16) {
            do {
              if (bVar17) {
                cVar2 = bVar1 - 0x10;
              }
              else {
                cVar2 = bVar1 - 0x14;
              }
              if (-1 < *(char *)(cVar2 + iVar13 + 8)) {
                fn_002d3f68(*(undefined4 *)(param_1 + 8),(int)(char)bVar1,
                             *(undefined1 *)(cVar2 + iVar13 + 8),bVar17);
              }
              bVar1 = bVar1 + 1;
            } while ((char)bVar1 < (char)bVar16);
          }
          iVar10 = fn_006a7b78(DAT_008977e4);
          puVar9 = (undefined2 *)fn_00101a1c(auStack_56,&LAB_001d4e64,4);
          puVar9[8] = 0;
          *(undefined1 *)(puVar9 + 9) = 0;
          *(undefined1 *)((int)puVar9 + 0x13) = 0xff;
          puVar9[10] = 0;
          *(undefined1 *)(puVar9 + 0xb) = 0;
          *(undefined1 *)((int)puVar9 + 0x17) = 0xff;
          *puVar9 = 0;
          *(undefined1 *)(puVar9 + 1) = 0;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
          puVar9[4] = 0;
          *(undefined1 *)(puVar9 + 5) = 0;
          puVar9[6] = 0;
          *(undefined1 *)(puVar9 + 7) = 0;
          puVar9[8] = 0;
          *(undefined1 *)(puVar9 + 9) = 0;
          puVar9[10] = 0;
          *(undefined1 *)(puVar9 + 0xb) = 0;
          *(undefined1 *)(puVar9 + -1) = 0;
          *(undefined1 *)((int)puVar9 + -1) = 0;
          fn_006c0f40(iVar13,iVar10 + 0x70,auStack_58,bVar17);
          fn_002d4480(*(undefined4 *)(param_1 + 8),auStack_58,bVar17);
        }
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x42) = 1;
        break;
      case 6:
        iVar13 = fn_006b8aa0(local_64,iVar13);
        iVar10 = fn_00182988(DAT_008977e4);
        if ((bVar17 & ~(*(byte *)(iVar10 + 0x3a3) & bVar17)) == 0) {
          if (bVar17) {
            bVar1 = 0x10;
            bVar16 = 0x14;
          }
          else {
            bVar1 = 0x14;
            bVar16 = 0x18;
          }
          if (bVar1 < bVar16) {
            do {
              if (bVar17) {
                cVar2 = bVar1 - 0x10;
              }
              else {
                cVar2 = bVar1 - 0x14;
              }
              if (-1 < *(char *)(cVar2 + iVar13 + 2)) {
                fn_002d3f68(*(undefined4 *)(param_1 + 8),(int)(char)bVar1,
                             *(undefined1 *)(cVar2 + iVar13 + 2),bVar17);
              }
              bVar1 = bVar1 + 1;
            } while ((char)bVar1 < (char)bVar16);
          }
          iVar10 = fn_006a7b78(DAT_008977e4);
          fn_006c13f8(iVar13,iVar10 + 0x76,bVar17);
        }
        *(undefined1 *)(*(int *)(param_1 + 4) + 0x43) = 1;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar15);
    iVar3 = *(int *)(param_1 + 4);
    cVar2 = *(char *)(iVar3 + 0x41);
    bVar17 = cVar2 == '\0';
    if (bVar17) {
      cVar2 = *(char *)(iVar3 + 0x42);
    }
    bVar18 = bVar17 && cVar2 == '\0';
    if (bVar17 && cVar2 == '\0') {
      bVar18 = *(char *)(iVar3 + 0x43) == '\0';
    }
    if (bVar18) {
      fn_00376bec(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x4c) + 0xc));
      fn_003a7cf0(param_1,local_3c,0x11);
    }
    else {
      uVar5 = fn_001603f8(auStack_82 + 2,0xff);
      fn_00163988(DAT_00897808,uVar5,0xf);
      uVar5 = fn_001603f8(auStack_82 + 2,0xff);
      fn_00163988(DAT_0089780c,uVar5,0xf);
      local_3c[0] = 0x14;
    }
  }
  return local_3c[0];
}


