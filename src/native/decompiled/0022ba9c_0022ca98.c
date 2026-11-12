#include "0022ba9c_0022ca98.h"



bool fn_0022ca98(int param_1)

{
  return 0 < *(int *)(*(int *)(param_1 + 0x78) + 0x1c);
}



undefined4 * fn_0022c93c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0081cc00;
  puVar1[0x19] = 0;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1a] = uVar2;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0x14;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x95] = 0;
  *(undefined1 *)(puVar1 + 0x96) = 0;
  *(undefined1 *)((int)puVar1 + 0x259) = 0;
  *(undefined1 *)((int)puVar1 + 0x25a) = 0;
  fn_00121838(DAT_00897800,DAT_008987b0,1);
  return puVar1;
}



void fn_0022c45c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x25a)) {
  case 1:
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_0022c4dc;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0022c4dc:
    if (*(char *)((int)puVar1 + 0x31) == '\x01') {
      *(undefined1 *)((int)puVar1 + 0x31) = 0;
LAB_0022c674:
      fn_006898b8(param_1,0x4b,0);
      *(undefined1 *)(param_1 + 0x25a) = 0;
    }
    break;
  case 2:
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_0022c53c;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0022c53c:
    bVar6 = *(char *)(param_1 + 0x259) != '\0';
    uVar5 = 0;
    if (bVar6) {
      uVar5 = puVar1[0x16];
    }
    if (bVar6 && 0x1e < uVar5) {
      *(undefined1 *)((int)puVar1 + 0x31) = 0;
      *(undefined1 *)(puVar1 + 0xc) = 1;
      *(undefined1 *)((int)puVar1 + 0x51) = 0;
      *(undefined1 *)((int)puVar1 + 0x5e) = 0;
      fn_0022b63c(param_1,(int)*(char *)(param_1 + 600));
    }
    break;
  case 3:
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_0022c5c8;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0022c5c8:
    if (*(char *)((int)puVar1 + 0x31) == '\x03') {
      if (*(int *)(*(int *)(param_1 + 100) + 0x30) == 0) {
        fn_006898b8(param_1,0x4b,0);
        *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 1;
        fn_006898b8(param_1,0x4b,0);
        *(undefined1 *)(param_1 + 0x25a) = 0;
      }
      else {
        fn_0036c658(puVar1,0);
        fn_0036c13c(puVar1,*(undefined4 *)(*(int *)(param_1 + 100) + 0x30));
        puVar1[0xe] = 0;
        fn_006897a8(param_1);
        *(undefined1 *)(param_1 + 0x25a) = 4;
      }
    }
    else if (*(char *)((int)puVar1 + 0x31) == '\x02') goto LAB_0022c674;
    break;
  case 4:
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_0022c6d4;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_0022c6d4:
    if (*(char *)((int)puVar1 + 0x31) == '\x01') {
      *(undefined1 *)((int)puVar1 + 0x31) = 0;
      *(undefined1 *)(param_1 + 0x25a) = 0;
      fn_006898b8(param_1,0x4b,0);
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 1;
      fn_006898b8(param_1,0x4b,0);
      *(undefined1 *)(param_1 + 0x25a) = 5;
    }
    break;
  case 5:
    iVar3 = fn_006896fc(param_1,0x4b);
    if (iVar3 != 0) break;
    fn_00689bd0(param_1,0,0,(int)*(char *)(*(int *)(param_1 + 100) + 0x24));
    *(undefined1 *)(param_1 + 0x25a) = 0;
    goto LAB_0022c78c;
  }
  if (*(char *)(param_1 + 0x25a) == '\0') {
LAB_0022c78c:
    fn_0028f944(*(undefined4 *)(param_1 + 0x48));
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
    (**(code **)(*piVar4 + 0xc))();
  }
  else {
    fn_0028fb24(*(undefined4 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x0022c76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x80) + 0x14))();
  return;
}



void fn_0022c310(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 < 1) &&
     (*(short *)(*(int *)(param_1 + (iVar1 + *(int *)(param_1 + 0x9c)) * 4 + 0xb8) + 0xce) == 0)) {
    switch(*(undefined1 *)(*(int *)(param_1 + 100) + 8)) {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      uVar2 = fn_006f6a38(param_1);
      if ((uVar2 & 0x20000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 2;
        fn_006898b8(param_1,0x4b,0);
        *(undefined1 *)(param_1 + 0x25a) = 5;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
    return;
  }
  if (0 < iVar1) {
    if ((iVar1 == *(int *)(param_1 + 0x98)) &&
       (*(short *)(*(int *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar1) * 4 + 0xb8) + 0xce) != 0))
    {
      *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe | 1;
    }
    else {
      fn_0022b7e8(param_1,iVar1 + -1);
    }
  }
  fn_00190d50(*(undefined4 *)
                (param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0xb8),"");
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_0022ba9c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  short sVar5;
  
  sVar5 = 1;
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar4 = *(uint *)(param_1 + 0x88);
  if (iVar2 == 0) {
    if (uVar4 < 7) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x8c) = 1;
        fn_0022b430();
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
      *(uint *)(param_1 + 0x90) = uVar4;
      fn_0022afdc(param_1,uVar4);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  else {
    if (iVar2 != 6) {
      fn_0022c260(param_1,*(undefined4 *)
                            (*(int *)(param_1 + iVar2 * 0x28 + uVar4 * 4 + 0x130) + 0xa4),param_2);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (uVar4 == 0) {
      if (1 < *(uint *)(param_1 + 0x90)) goto code_r0x0022bc50;
      iVar2 = fn_0022a308(param_1,&PTR_s_name_hira_dakuten_check1_008949d4,0x14,0);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = fn_0022a308(param_1,&PTR_s_name_kata_dakuten_check1_00894a24,0x15,0);
    }
    else {
      if (uVar4 != 1) {
        if (uVar4 == 2) {
          iVar2 = *(int *)(param_1 + 0x84);
          if (0 < iVar2) {
            if ((iVar2 == *(int *)(param_1 + 0x98)) &&
               (*(short *)(*(int *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar2) * 4 + 0xb8) + 0xce)
                != 0)) {
              *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) =
                   *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe | 1;
            }
            else {
              fn_0022b7e8(param_1,iVar2 + -1);
            }
          }
          fn_00190d50(*(undefined4 *)
                        (param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0xb8)
                       ,"");
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        if (uVar4 != 3 || param_2 != 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x84);
        if (iVar2 != 0) {
          if (-1 < iVar2) {
            unaff_r6 = *(int *)(param_1 + 0x9c);
          }
          bVar1 = true;
          iVar3 = 0;
          if (-1 < iVar2) {
            sVar5 = 0x3000;
          }
          if (0 < iVar2) {
            do {
              if (**(short **)(*(int *)(param_1 + (unaff_r6 + iVar3) * 4 + 0xb8) + 0xa4) != sVar5) {
                bVar1 = false;
                break;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar2);
          }
          if ((((iVar2 == *(int *)(param_1 + 0x98)) &&
               (iVar2 = *(int *)(param_1 + (*(int *)(param_1 + 0x9c) + iVar2) * 4 + 0xb8),
               *(short *)(iVar2 + 0xce) != 0)) && (**(short **)(iVar2 + 0xa4) != 0x3000)) ||
             (!bVar1)) {
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
          fn_006898b8(param_1,0x4b,0);
          *(undefined1 *)(param_1 + 0x25a) = 5;
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        fn_0022b2d8(param_1,0,1);
        return;
      }
      if (1 < *(uint *)(param_1 + 0x90) && *(uint *)(param_1 + 0x90) != 5) goto code_r0x0022bc50;
      iVar2 = fn_0022a308(param_1,&PTR_s_name_hira_size_check1_008948b8,10,0);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = fn_0022a308(param_1,&PTR_s_name_kata_size_check1_008948e0,0xc,0);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = fn_0022a308(param_1,&PTR_s_name_alphabet_size_check1_00894910,0x31,0);
    }
    if (iVar2 == 0) {
code_r0x0022bc50:
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}



void fn_0022c260(int param_1,undefined4 param_2,int param_3)

{
  if ((*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0x98)) ||
     (*(short *)(*(int *)(param_1 + (*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x84)) * 4 + 0xb8
                         ) + 0xce) == 0)) {
    fn_00190d50();
  }
  if (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x98)) {
    fn_0022b7e8(param_1,*(int *)(param_1 + 0x84) + 1);
  }
  else {
    *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 0xfe;
  }
  if ((param_3 == 0) && ((*(byte *)(*(int *)(param_1 + 0xa8) + 0x44) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x88) = 3;
    *(undefined4 *)(param_1 + 0x8c) = 6;
    fn_0022b430(param_1);
    return;
  }
  return;
}


