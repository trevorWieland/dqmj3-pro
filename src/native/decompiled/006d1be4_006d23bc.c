#include "006d1be4_006d23bc.h"



undefined4 fn_006d23bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  (**(code **)(DAT_008e69b0 + 8))();
  piVar2 = (int *)**(int **)(DAT_008aec6c + 0x10);
  while( true ) {
    if (piVar2 == (int *)*(int *)(DAT_008aec6c + 0x10)) {
      (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
      return 0;
    }
    (**(code **)(*(int *)piVar2[2] + 0xc))(auStack_20);
    iVar1 = fn_004b626c(local_1c,*(undefined4 *)(param_2 + 4));
    fn_00170f54(auStack_20);
    if (iVar1 != 0) break;
    piVar2 = (int *)*piVar2;
  }
  uVar3 = piVar2[2];
  (**(code **)(DAT_008e69b0 + 0xc))(&DAT_008e69b0);
  return uVar3;
}



void fn_006d210c(int param_1,int param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_48 [4];
  int *local_44;
  int *local_40;
  int *piStack_3c;
  int local_38;
  int local_34;
  undefined1 auStack_30 [4];
  undefined *local_2c;
  undefined1 auStack_28 [4];
  undefined *local_24;
  
  bVar2 = false;
  iVar8 = 0;
  piVar7 = (int *)**(int **)(param_2 + 0x18);
  do {
    if (!(bool)(piVar7 != (int *)*(int *)(param_2 + 0x18) & ~bVar2)) {
      if (iVar8 != 0) {
        fn_004b4c44(auStack_48);
        if (bVar2) {
          for (piVar7 = (int *)**(int **)(param_2 + 0x18); piVar7 != (int *)*(int *)(param_2 + 0x18)
              ; piVar7 = (int *)*piVar7) {
            uVar3 = fn_006d0810(piVar7 + 2,L"type",0);
            iVar8 = local_38;
            if ((uVar3 & 2) == 0) {
              if (local_44 == (int *)0x0) {
                if (local_40 == piStack_3c) {
                  fn_0078638c(auStack_48,0);
                }
                piVar6 = local_40;
                local_40 = local_40 + 0x1c;
              }
              else {
                piVar6 = local_44;
                local_44 = (int *)*local_44;
              }
              if (piVar6 + 2 != (int *)0x0) {
                fn_0013cd7c(piVar6 + 2,piVar7 + 2);
              }
              *piVar6 = iVar8;
              piVar6[1] = *(int *)(iVar8 + 4);
              **(undefined4 **)(iVar8 + 4) = piVar6;
              *(int **)(iVar8 + 4) = piVar6;
              local_34 = local_34 + 1;
            }
          }
        }
        for (piVar7 = (int *)**(int **)(param_2 + 0x18); piVar7 != (int *)*(int *)(param_2 + 0x18);
            piVar7 = (int *)*piVar7) {
          uVar3 = fn_006d0810(piVar7 + 2,L"type",0);
          iVar8 = local_38;
          if ((uVar3 & 2) != 0) {
            if (local_44 == (int *)0x0) {
              if (local_40 == piStack_3c) {
                fn_0078638c(auStack_48,0);
              }
              piVar6 = local_40;
              local_40 = local_40 + 0x1c;
            }
            else {
              piVar6 = local_44;
              local_44 = (int *)*local_44;
            }
            if (piVar6 + 2 != (int *)0x0) {
              fn_0013cd7c(piVar6 + 2,piVar7 + 2);
            }
            *piVar6 = iVar8;
            piVar6[1] = *(int *)(iVar8 + 4);
            **(undefined4 **)(iVar8 + 4) = piVar6;
            *(int **)(iVar8 + 4) = piVar6;
            local_34 = local_34 + 1;
          }
        }
        fn_00786550(param_2 + 8,auStack_48);
        fn_00786480(auStack_48);
      }
      return;
    }
    uVar3 = fn_006d0810(piVar7 + 2,L"type",0);
    if ((uVar3 & 2) != 0) {
      piVar6 = (int *)**(int **)(param_1 + 0x18);
      while ((bool)(piVar6 != (int *)*(int *)(param_1 + 0x18) & ~bVar2)) {
        fn_006d0734(auStack_30,piVar6 + 2);
        fn_006d0734(auStack_28,piVar7 + 2);
        if (local_2c == local_24) {
LAB_006d2200:
          iVar4 = 1;
        }
        else {
          if (local_2c == (undefined *)0x0) {
            puVar5 = local_24;
            puVar1 = &DAT_007db524;
          }
          else {
            if (local_24 != (undefined *)0x0) {
              iVar4 = fn_00101d80();
              if (iVar4 == 0) goto LAB_006d2200;
              iVar4 = 0;
              goto LAB_006d21d0;
            }
            puVar5 = &DAT_007db524;
            puVar1 = local_2c;
          }
          iVar4 = fn_004b626c(puVar1,puVar5);
        }
LAB_006d21d0:
        fn_00170f54(auStack_28);
        fn_00170f54(auStack_30);
        piVar6 = (int *)*piVar6;
        if (iVar4 != 0) {
          bVar2 = true;
        }
      }
      iVar8 = iVar8 + 1;
    }
    piVar7 = (int *)*piVar7;
  } while( true );
}



bool fn_006d2054(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = fn_004b7748();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x90);
  }
  iVar1 = (**(code **)(*piVar2 + 0x2c))();
  if ((((*(char *)(iVar1 + 8) == '\0') ||
       (iVar1 = fn_004b626c(*(undefined4 *)(param_1 + 0x114),&DAT_007db524), iVar1 != 0)) ||
      (*(short *)(param_1 + 0x118) == 0)) ||
     ((param_3 != 0 &&
      ((iVar1 = fn_006d0810(param_2,&DAT_007d9c48,0), iVar1 != 0 ||
       (uVar3 = fn_006d0810(param_2,L"type",0), (uVar3 & 2) == 0)))))) {
    return false;
  }
  return *(char *)(param_1 + 0x11a) != '\0';
}



bool fn_006d2030(int param_1)

{
  return *(short *)(*(int *)(param_1 + 0x18) + 0x1c) == 0x40;
}



void fn_006d1f98(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_2 + 0x1050);
  if (iVar2 < 0) {
    iVar3 = *(int *)(param_2 + 0x1054);
    param_1[2] = *(int *)(param_2 + 0x1058);
    *param_1 = iVar2;
    param_1[1] = iVar3;
  }
  else {
    if (*(char *)(param_2 + 0x1088) == '\0') {
      puVar4 = &DAT_80010001;
    }
    else {
      puVar4 = (undefined1 *)0x10001;
    }
    param_1[2] = 0x71;
    param_1[1] = (int)&DAT_007dba44;
    *param_1 = (int)puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x006d1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



uint fn_006d1ce4(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  int local_34 [3];
  int local_28;
  
  piVar1 = param_1 + 0x417;
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*param_1 + 0x40))(local_34,param_1);
  if ((-1 < local_34[0]) && (*(char *)((int)param_1 + 0x10ce) == '\0')) {
    iVar2 = fn_003035b0(param_2,(char *)&DAT_006d1f40);
    if (iVar2 == 0) {
      param_1 = param_1 + 0x424;
      iVar2 = fn_003035b0(param_1,&LAB_006d1f50);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_3 + 4);
        bVar6 = iVar2 == 0;
        if (!bVar6) {
          iVar2 = iVar2 + -4;
          bVar6 = iVar2 == 0;
        }
        if (!bVar6) {
          if (*(code **)(iVar2 + -8) == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (**(code **)(iVar2 + -8))();
          }
        }
        if (param_1 == (int *)0x0) {
          *(undefined4 *)(param_3 + 4) = 0;
        }
        else {
          iVar2 = fn_002febd8(param_1);
          iVar2 = iVar2 + 1;
          piVar4 = (int *)fn_0015ece0(iVar2 * 2 + 4);
          *piVar4 = iVar2;
          *(int **)(param_3 + 4) = piVar4 + 1;
          fn_0017fe44(param_1,piVar4 + 1,iVar2);
        }
        (**(code **)(*piVar1 + 0xc))(piVar1);
        return 1;
      }
    }
    else {
      local_28 = 0;
      iVar2 = fn_006dc488(param_1 + 0xe,param_2,0,0,&local_28);
      if ((-1 < iVar2) && (uVar5 = local_28 + 1, uVar5 < 0x1001)) {
        iVar2 = fn_0015ece0(uVar5);
        fn_00158f6c(iVar2,uVar5);
        uVar5 = fn_006dc488(param_1 + 0xe,param_2,iVar2,uVar5,0);
        uVar5 = uVar5 >> 0x1f ^ 1;
        if (uVar5 != 0) {
          iVar3 = *(int *)(param_3 + 4);
          bVar6 = iVar3 == 0;
          if (!bVar6) {
            iVar3 = iVar3 + -4;
            bVar6 = iVar3 == 0;
          }
          if (!bVar6) {
            if (*(code **)(iVar3 + -8) == (code *)0x0) {
              fn_0030233c();
            }
            else {
              (**(code **)(iVar3 + -8))();
            }
          }
          if (iVar2 == 0) {
            *(undefined4 *)(param_3 + 4) = 0;
          }
          else {
            iVar3 = fn_002febd8(iVar2);
            iVar3 = iVar3 + 1;
            piVar4 = (int *)fn_0015ece0(iVar3 * 2 + 4);
            *piVar4 = iVar3;
            *(int **)(param_3 + 4) = piVar4 + 1;
            fn_0017fe44(iVar2,piVar4 + 1,iVar3);
          }
        }
        if (iVar2 != 0) {
          if (*(code **)(iVar2 + -8) == (code *)0x0) {
            fn_0030233c(iVar2 + -8);
          }
          else {
            (**(code **)(iVar2 + -8))();
          }
        }
        (**(code **)(*piVar1 + 0xc))(piVar1);
        return uVar5;
      }
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 0;
}



int fn_006d1c78(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  if (*(char *)(param_1 + 0x1086) == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x10b4) + 0x18);
    iVar3 = *(int *)(*(int *)(param_1 + 0x10b4) + 0x1c);
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return iVar3 - iVar2;
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 0;
}



undefined4 fn_006d1be4(int *param_1,int *param_2)

{
  int *piVar1;
  int local_20 [4];
  
  piVar1 = param_1 + 0x417;
  (**(code **)(*piVar1 + 8))();
  (**(code **)(*param_1 + 0x40))(local_20,param_1);
  if (local_20[0] < 0) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  *param_2 = param_1[0x423];
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return 1;
}


