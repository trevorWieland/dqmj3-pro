#include "0022bd1c_002311c4.h"



void fn_002311c4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = fn_00661094(param_3);
  uVar1 = fn_00230e40(uVar1,param_5);
  fn_0018a618(param_1,param_2,param_2 + -1,L"%ls%ls",uVar1,param_4);
  return;
}



void fn_00231128(undefined2 *param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    puVar1 = (undefined2 *)(int)*(short *)(param_3 + 0x1c);
  }
  if (param_3 == 0 || puVar1 == (undefined2 *)0x0) {
    if (0 < (int)param_2) {
      puVar1 = param_1 + -1;
      if ((param_2 & 1) != 0) {
        *param_1 = 0;
        puVar1 = param_1;
      }
      iVar3 = (int)param_2 >> 1;
      if (iVar3 != 0) {
        do {
          puVar1[1] = 0;
          iVar3 = iVar3 + -1;
          puVar1 = puVar1 + 2;
          *puVar1 = 0;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else {
    uVar2 = fn_00661094();
    uVar2 = fn_00230e40(uVar2,param_4);
    fn_0018a618(param_1,param_2,param_2 - 1,L"%ls%ls",uVar2,param_3 + 4);
  }
  return;
}



void fn_00231074(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = param_1;
  if (param_2 != 0) {
    iVar1 = (int)*(short *)(param_2 + 0x1c);
  }
  puVar3 = &local_40;
  if (param_2 == 0 || iVar1 == 0) {
    iVar1 = 8;
    local_40 = 0;
    do {
      *(undefined2 *)((int)puVar3 + 2) = 0;
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 1;
      *(undefined2 *)puVar3 = 0;
    } while (iVar1 != 0);
  }
  else {
    uVar2 = fn_00661094();
    uVar2 = fn_00230e40(uVar2,param_3);
    fn_0018a618(puVar3,0x11,0x10,L"%ls%ls",uVar2,param_2 + 4);
  }
  fn_00168a24(param_1,&local_40,auStack_1c);
  return;
}



void fn_0022bd1c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int iVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  uint in_r12;
  undefined4 in_lr;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(char *)(param_1 + 0x25a) != '\0') {
    return;
  }
  iVar1 = fn_006896fc(param_1,0x4b);
  if (iVar1 != 0) {
    return;
  }
  uVar2 = fn_006f6a5c(param_1);
  uVar3 = fn_006f6a38(param_1);
  iVar1 = fn_006f6a50(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_0022a42c();
    if (iVar1 != 0) {
      fn_0022b430(param_1);
      fn_0022ba9c(param_1,1);
    }
    uVar4 = fn_006f6ac0(param_1);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x24c) = uVar4;
    uVar4 = fn_006f6acc(param_1);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x250) = uVar4;
    return;
  }
  iVar1 = fn_006f6a44(param_1);
  uVar5 = 6;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x23c);
    fVar13 = *(float *)(param_1 + 0x24c);
    fVar11 = *(float *)(iVar1 + 0x1c);
    fVar12 = *(float *)(iVar1 + 0x20);
    if (fVar13 <= fVar11) {
      return;
    }
    fVar14 = fVar11 + *(float *)(iVar1 + 0x3c) * 4.0;
    bVar8 = fVar14 < fVar13;
    bVar9 = fVar14 == fVar13;
    bVar10 = NAN(fVar14) || NAN(fVar13);
    if (!bVar9 && !bVar8) {
      fVar14 = *(float *)(param_1 + 0x250);
      bVar8 = fVar12 < fVar14;
      bVar9 = fVar12 == fVar14;
      bVar10 = NAN(fVar12) || NAN(fVar14);
    }
    if (bVar9 || bVar8 != bVar10) {
      return;
    }
    if (fVar14 <= fVar12 - *(float *)(iVar1 + 0x40)) {
      return;
    }
    if ((int)(ABS(fVar11 - fVar13) / *(float *)(iVar1 + 0x3c)) != 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x88) = 3;
    *(undefined4 *)(param_1 + 0x8c) = 6;
    iVar1 = *(int *)(param_1 + 0x84);
    if (iVar1 != 0) {
      iVar7 = unaff_r6;
      if (-1 < iVar1) {
        iVar7 = *(int *)(param_1 + 0x9c);
      }
      bVar8 = true;
      iVar6 = 0;
      if (-1 < iVar1) {
        in_r12 = 0x3000;
      }
      if (0 < iVar1) {
        do {
          if (**(ushort **)(*(int *)(param_1 + (iVar7 + iVar6) * 4 + 0xb8) + 0xa4) != in_r12) {
            bVar8 = false;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      if ((((iVar1 == *(int *)(param_1 + 0x98)) &&
           (iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar1) * 4 + 0xb8),
           *(short *)(iVar1 + 0xce) != 0)) && (**(short **)(iVar1 + 0xa4) != 0x3000)) || (!bVar8)) {
        fn_0022ae30(param_1);
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + -4) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe | 1;
    fn_0022b7e8(param_1,0);
    if (*(char *)(*(int *)(param_1 + 100) + 0x48) == '\x01') {
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x48) = 0;
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 1;
      fn_006898b8(param_1,0x4b,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,in_lr);
      *(undefined1 *)(param_1 + 0x25a) = 5;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    fn_0022b2d8(param_1,0,1);
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  if ((uVar3 & 0x10000) != 0) {
    fn_0022ba9c(param_1,0);
LAB_0022c228:
    iVar1 = *(int *)(*(int *)(param_1 + 100) + 0x44);
    if (iVar1 != 0) {
      uVar2 = fn_006f6a5c(param_1);
      if ((uVar2 & 0x100000) == 0) {
        uVar2 = fn_006f6a5c(param_1);
        if ((uVar2 & 0x200000) != 0) {
          *(undefined1 *)(iVar1 + 0x18) = 2;
        }
        return;
      }
      *(undefined1 *)(iVar1 + 0x18) = 1;
    }
    return;
  }
  if ((uVar2 & 0x20000) != 0) {
    fn_0022c310(param_1);
    goto LAB_0022c228;
  }
  if ((uVar3 & 0x40000) != 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 != 6) {
      uVar5 = iVar1 + 1;
    }
    if (iVar1 == 6) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + 0x8c) == 0) {
      *(uint *)(param_1 + 0x88) = uVar5;
    }
    if (uVar5 < 7) {
      *(uint *)(param_1 + 0x90) = uVar5;
      fn_0022afdc();
    }
    fn_0022b430(param_1);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((uVar3 & 0x80000) != 0) {
    iVar1 = fn_0022a308(param_1,&PTR_s_name_hira_size_checksp_00894a78,9,0);
    if ((((iVar1 == 0) &&
         (iVar1 = fn_0022a308(param_1,&PTR_s_name_hira_size_check1_008948b8,10,0), iVar1 == 0)) &&
        ((iVar1 = fn_0022a308(param_1,&PTR_s_name_kata_size_check1_008948e0,0xc,0), iVar1 == 0 &&
         ((iVar1 = fn_0022a308(param_1,&PTR_s_name_alphabet_size_check1_00894910,0x31,0),
          iVar1 == 0 &&
          (iVar1 = fn_0022a308(param_1,&PTR_s_name_hira_dakuten_check1_008949d4,0x14,0), iVar1 == 0
          )))))) &&
       (iVar1 = fn_0022a308(param_1,&PTR_s_name_kata_dakuten_check1_00894a24,0x15,0), iVar1 == 0))
    {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    goto LAB_0022c228;
  }
  if ((uVar3 & 0x400000) != 0) {
    *(undefined4 *)(param_1 + 0x8c) = 6;
    *(undefined4 *)(param_1 + 0x88) = 3;
    fn_0022b430(param_1);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((uVar2 & 1) == 0) {
    iVar1 = 0;
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) == 0) {
        if ((uVar2 & 8) == 0) goto LAB_0022c228;
        if (*(int *)(param_1 + 0x8c) == 0) {
          iVar7 = 6;
        }
        else if (*(int *)(param_1 + 0x8c) == 6) {
          iVar7 = 3;
        }
        else {
          iVar7 = 9;
        }
        if (*(int *)(param_1 + 0x88) != iVar7) {
          iVar1 = *(int *)(param_1 + 0x88) + 1;
        }
        *(int *)(param_1 + 0x88) = iVar1;
        fn_0022b430(param_1);
        if (*(int *)(param_1 + 0x8c) != 0) goto code_r0x0022c1f4;
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      else {
        if (*(int *)(param_1 + 0x8c) == 0) {
          uVar4 = 6;
        }
        else if (*(int *)(param_1 + 0x8c) == 6) {
          uVar4 = 3;
        }
        else {
          uVar4 = 9;
        }
        if (*(int *)(param_1 + 0x88) == 0) {
          *(undefined4 *)(param_1 + 0x88) = uVar4;
        }
        else {
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
        }
        fn_0022b430(param_1);
        if (*(int *)(param_1 + 0x8c) != 0) {
code_r0x0022c1f4:
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      if (uVar2 < 7) {
        *(uint *)(param_1 + 0x90) = uVar2;
        fn_0022afdc();
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 0) {
LAB_0022c09c:
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    else if (iVar1 == 5) {
      iVar1 = *(int *)(param_1 + 0x88);
      if (iVar1 < 3) goto LAB_0022c09c;
      if (iVar1 < 5) {
        *(undefined4 *)(param_1 + 0x88) = 1;
      }
      else if (iVar1 < 7) {
        *(undefined4 *)(param_1 + 0x88) = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 3;
      }
    }
    else if (iVar1 == 6) {
      uVar4 = *(undefined4 *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0xa4) = uVar4;
      goto code_r0x0022c0b0;
    }
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    goto code_r0x0022c0b0;
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xa4);
  }
  else {
    if (iVar1 == 1) {
      iVar7 = *(int *)(param_1 + 0x90);
LAB_0022c054:
      *(int *)(param_1 + 0x88) = iVar7;
    }
    else if (iVar1 == 6) {
      iVar7 = *(int *)(param_1 + 0x88) * 2 + 1;
      goto LAB_0022c054;
    }
    uVar5 = iVar1 - 1;
  }
  *(uint *)(param_1 + 0x8c) = uVar5;
code_r0x0022c0b0:
  fn_0022b430();
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


