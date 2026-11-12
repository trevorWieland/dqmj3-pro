#include "0045ddd4_00460784.h"



void fn_00460784(int param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  uint local_28;
  undefined4 uStack_24;
  
  uVar8 = 0;
  if (((*(ushort *)(param_2 + 0x3c) & 0xf) == 3) &&
     (iVar6 = 0, *(ushort *)(param_1 + 0x104) != 0xffffffff)) {
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x9c) + iVar6 * 4);
      iVar3 = fn_001249d0();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      piVar4 = (int *)(iVar3 + 0x50);
      (**(code **)(*piVar4 + 8))();
      bVar9 = *(int *)(iVar7 + 0x3c) != 0;
      if (bVar9) {
        iVar7 = 1;
      }
      if (!bVar9) {
        iVar7 = 0;
      }
      (**(code **)(*piVar4 + 0xc))(piVar4);
      if (iVar7 != 0) {
        *(int *)(param_1 + 0x2ac) = *(int *)(param_1 + 0x2ac) + 1;
        fn_004722b4(*(int *)(param_1 + 4) + 0x14,param_2);
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(*(ushort *)(param_1 + 0x104) + 1));
  }
  uVar2 = *(short *)(param_2 + 0x120) + 1;
  *(ushort *)(param_2 + 0x120) = uVar2;
  if (*(uint *)(param_1 + 0x318) < (uint)uVar2) {
    *(uint *)(param_1 + 0x318) = (uint)uVar2;
  }
  if (1 < *(ushort *)(param_2 + 0x120)) {
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
    if (*(int *)(param_2 + 0xd8) != 0) {
      uVar8 = *(uint *)(*(int *)(param_2 + 0xd8) + 0x10) & 0xffff;
    }
    *(uint *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + uVar8;
  }
  iVar6 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
  if (DAT_008b649c == (code *)0x0) {
    if ((*(ushort *)(param_2 + 0x3c) & 0xf) == 0) {
      iVar3 = *(int *)(iVar6 + 0x88);
    }
    else {
      local_28 = *(uint *)(param_1 + 0xcc) & 0xfffffffc;
      puVar5 = &DAT_007d9c3c;
      if (0x20 < local_28) {
        puVar5 = &local_28;
      }
      iVar3 = (*(uint *)(param_1 + 200) >> 3) + *puVar5;
    }
    if ((uint)*(ushort *)(param_2 + 0x120) < *(uint *)(iVar6 + 0x80)) {
      fVar10 = *(float *)(iVar6 + 0x78);
    }
    else {
      fVar10 = *(float *)(iVar6 + 0x7c);
    }
    fVar11 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(param_2 + 0x120) * iVar3,
                               (byte)(in_fpscr >> 0x16) & 3);
    uVar8 = VectorFloatToUnsigned(fVar10 * fVar11,3);
    if (*(uint *)(iVar6 + 0x90) < uVar8) {
      uVar8 = *(uint *)(iVar6 + 0x90);
    }
  }
  else {
    local_28 = *(uint *)(param_1 + 0xcc) & 0xfffffffc;
    puVar5 = &DAT_007d9c3c;
    if (0x20 < local_28) {
      puVar5 = &local_28;
    }
    uVar8 = (*DAT_008b649c)(*puVar5 + (*(uint *)(param_1 + 200) >> 3),
                            *(undefined2 *)(param_2 + 0x120));
  }
  *(uint *)(*(int *)(param_2 + 0x118) + 4) = uVar8;
  fn_004722b4(*(int *)(param_1 + 4) + 0x14,param_2);
  iVar6 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
  if (*(char *)(iVar6 + 0x68) != '\0') {
    fn_0013d0fc(&local_28);
    *(uint *)(param_1 + 0xd8) = local_28;
    *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  }
  uVar1 = fn_006d0810(param_1 + 8,&DAT_007d9e30,0);
  local_28 = param_1 + 0x220;
  iVar6 = fn_004591b0(*(undefined4 *)(param_1 + 4),*(undefined2 *)(param_1 + 0x8e),uVar1,param_2);
  if (iVar6 == 0) {
    *(int *)(param_1 + 0x30c) = *(int *)(param_1 + 0x30c) + 1;
  }
  return;
}



undefined4 fn_0045ddd4(int param_1,int param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  wchar16 *pwVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_2d0 [4];
  char *local_2c0;
  undefined1 auStack_2bc [4];
  undefined1 auStack_2b8 [4];
  undefined4 local_2b4;
  undefined1 auStack_2a0 [8];
  undefined4 local_298 [4];
  undefined1 auStack_288 [456];
  undefined *local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 auStack_a8 [64];
  char *local_68;
  undefined1 local_64;
  undefined1 local_5c [4];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  
  uVar12 = 0;
  if (param_4 != 0) {
    uVar15 = 0;
    local_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    do {
      iVar5 = DAT_008b63dc;
      if (*(char *)(local_34 + 4) == '\0') {
LAB_0045deb8:
        puVar11 = auStack_a8;
        local_c0 = &DAT_0085238c;
        local_2d0[0] = *(int *)(local_2c + uVar12 * 4);
        local_bc = uVar15;
        local_b8 = uVar15;
        local_b4 = uVar15;
        local_b0 = uVar15;
        local_ac = uVar15;
        fn_00102908(puVar11,0x40,(char *)&DAT_0045e284,DAT_0089a94c);
        local_58 = uVar15;
        local_54 = uVar15;
        fn_00102388(&local_58);
        piVar9 = local_2d0;
        while ((iVar5 = fn_0010239a(puVar11,0x105,&local_58), iVar5 != 0 &&
               (iVar10 = fn_00101ce8(piVar9,puVar11,iVar5,&local_58), iVar10 != 0))) {
          piVar9 = (int *)((int)piVar9 + 2);
          puVar11 = puVar11 + iVar5;
        }
        *(undefined2 *)piVar9 = 0;
        local_b8 = uVar15;
        local_b4 = uVar15;
        local_b0 = uVar15;
        local_ac = uVar15;
        uVar17 = fn_0014d6cc(&local_bc,local_2d0,1);
        pwVar6 = (wchar16 *)((ulonglong)uVar17 >> 0x20);
        if ((int)uVar17 < 0) {
joined_r0x0045e0f4:
          if ((local_bc & 0xfffffffe) == 0) {
            return 0;
          }
joined_r0x0045e020:
          if ((local_bc & 1) != 0) {
            fn_00146594(local_bc,pwVar6);
          }
          fn_0015cf8c(local_bc & 0xfffffffe);
          return 0;
        }
        local_50 = 0;
        local_4c = 0;
        local_48 = uVar15;
        iVar5 = fn_001560d8(&local_bc,&local_50);
        if (iVar5 < 0) {
          pwVar6 = L"Could not get file size of shared content. 32bit nn::Result value is %x";
          if ((local_bc & 0xfffffffe) == 0) {
            return 0;
          }
          goto joined_r0x0045e020;
        }
        uVar1 = 0;
        piVar9 = (int *)(local_30 + uVar12 * 0xc);
        iVar5 = *piVar9;
        iVar10 = piVar9[1];
        uVar7 = iVar10 - iVar5;
        local_44[0] = uVar1;
        if (uVar7 < local_50) {
          fn_0079b86c(piVar9,iVar10,local_50 - uVar7,local_44);
        }
        else if ((uVar7 != local_50) && (iVar5 != iVar10)) {
          piVar9[1] = local_50 + iVar5;
        }
        iVar5 = *(int *)(local_30 + uVar12 * 0xc);
        iVar5 = fn_0014d9ec(&local_bc,&local_48,iVar5,piVar9[1] - iVar5);
        if ((local_bc & 0xfffffffe) != 0) {
          if ((local_bc & 1) != 0) {
            fn_00146594();
          }
          fn_0015cf8c(local_bc & 0xfffffffe);
          local_bc = uVar15;
        }
        if (iVar5 < 0) {
          pwVar6 = L"Could not read shared content. 32bit nn::Result value is %x";
          goto joined_r0x0045e0f4;
        }
        iVar5 = piVar9[1];
        iVar10 = *piVar9;
        uVar7 = iVar5 - iVar10;
        local_5c[0] = uVar1;
        if (uVar7 < local_48) {
          fn_0079b86c(piVar9,iVar5,local_48 - uVar7,local_5c);
        }
        else if ((uVar7 != local_48) && (iVar10 != iVar5)) {
          piVar9[1] = local_48 + iVar10;
        }
        iVar5 = DAT_008b63dc;
        if (*(char *)(local_34 + 4) != '\0') {
          iVar4 = DAT_008b63dc + 0x110;
          uVar3 = fn_004b6318(auStack_288,*(undefined4 *)(local_2c + uVar12 * 4));
          iVar10 = fn_004b637c(auStack_2a0,uVar3);
          fn_004b9334(iVar10 + 8,piVar9);
          iVar10 = fn_004b637c(auStack_2bc,auStack_2a0);
          iVar8 = fn_004b9334(iVar10 + 8,local_298);
          iVar8 = iVar8 + -8;
          iVar10 = 1;
          pcVar2 = *(char **)(iVar5 + 0x120);
          pcVar13 = *(char **)(*(char **)(iVar5 + 0x120) + 4);
          while (pcVar13 != (char *)0x0) {
            iVar10 = fn_00190ef0(iVar8,pcVar13 + 0x10);
            pcVar2 = pcVar13;
            if (iVar10 == 0) {
              pcVar13 = *(char **)(pcVar13 + 0xc);
            }
            else {
              pcVar13 = *(char **)(pcVar13 + 8);
            }
          }
          if (*(char *)(iVar5 + 0x128) == '\0') {
            pcVar13 = pcVar2;
            if (iVar10 == 0) {
LAB_0045e30c:
              iVar5 = fn_00190ef0(pcVar13 + 0x10,iVar8);
              if (iVar5 != 0) goto LAB_0045e328;
              local_68 = pcVar13;
              local_64 = uVar1;
            }
            else {
              if (pcVar2 != *(char **)(*(int *)(iVar5 + 0x120) + 8)) {
                if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
                  pcVar13 = *(char **)(pcVar2 + 0xc);
                }
                else {
                  pcVar13 = *(char **)(pcVar2 + 8);
                  if (pcVar13 == (char *)0x0) {
                    pcVar13 = *(char **)(pcVar2 + 4);
                    pcVar14 = pcVar13;
                    if (pcVar2 == *(char **)(pcVar13 + 8)) {
                      do {
                        pcVar13 = *(char **)(pcVar14 + 4);
                        bVar16 = pcVar14 == *(char **)(pcVar13 + 8);
                        pcVar14 = pcVar13;
                      } while (bVar16);
                    }
                  }
                  else {
                    for (pcVar14 = *(char **)(pcVar13 + 0xc); pcVar14 != (char *)0x0;
                        pcVar14 = *(char **)(pcVar14 + 0xc)) {
                      pcVar13 = pcVar14;
                    }
                  }
                }
                goto LAB_0045e30c;
              }
              local_2d0[0] = iVar8;
              fn_0076b3fc(&local_2c0,iVar4,0,pcVar2);
              local_68 = local_2c0;
              local_64 = 1;
            }
          }
          else {
LAB_0045e328:
            local_2d0[0] = iVar8;
            fn_0076b3fc(&local_2c0,iVar4,0,pcVar2);
            local_68 = local_2c0;
            local_64 = 1;
          }
          fn_0014f1bc(local_2b4);
          fn_00170f54(auStack_2bc);
          fn_0014f1bc(local_298[0]);
          fn_00170f54(auStack_2a0);
          fn_00170f54(auStack_288);
        }
        if ((local_bc & 0xfffffffe) != 0) {
          if ((local_bc & 1) != 0) {
            fn_00146594();
          }
          fn_0015cf8c(local_bc & 0xfffffffe);
          local_bc = uVar15;
        }
      }
      else {
        uVar3 = fn_004b6318(auStack_2b8,*(undefined4 *)(local_2c + uVar12 * 4));
        iVar10 = *(int *)(iVar5 + 0x120);
        iVar8 = *(int *)(*(int *)(iVar5 + 0x120) + 4);
        while (iVar8 != 0) {
          iVar4 = fn_00190ef0(iVar8 + 0x10,uVar3);
          if (iVar4 == 0) {
            iVar10 = iVar8;
            iVar8 = *(int *)(iVar8 + 8);
          }
          else {
            iVar8 = *(int *)(iVar8 + 0xc);
          }
        }
        if ((iVar10 == *(int *)(iVar5 + 0x120)) ||
           (iVar8 = fn_00190ef0(uVar3,iVar10 + 0x10), iVar8 != 0)) {
          iVar10 = *(int *)(iVar5 + 0x120);
        }
        fn_00170f54(auStack_2b8);
        if (iVar10 == *(int *)(DAT_008b63dc + 0x120)) goto LAB_0045deb8;
        fn_0079c5b8(local_30 + uVar12 * 0xc,iVar10 + 0x18);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_28);
  }
  return 1;
}


