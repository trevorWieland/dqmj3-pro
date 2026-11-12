#include "005fc714_005fcc2ca.h"



void fn_005fc96c(int param_1,int param_2)

{
  *(char *)(param_1 + 0xb00) = (char)param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xb02) = 0;
  }
  return;
}



void fn_005fc968(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00844298;
  if (param_1[0x4c] != 0) {
    fn_00251ec8();
    fn_002feef8();
  }
  if ((int *)param_1[0x4b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4b] + 4))();
  }
  if ((int *)param_1[0x4a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4a] + 4))();
  }
  fn_00749820(param_1);
  return;
}



void fn_005fc914(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00763b10();
  puVar1[0x4e] = 900;
  *puVar1 = &DAT_0084ea6c;
  *(undefined1 *)(puVar1 + 0x4f) = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  *(undefined1 *)((int)puVar1 + 0x14d) = 0;
  *(undefined1 *)((int)puVar1 + 0x14e) = 0;
  return;
}



void fn_005fc714(int *param_1)

{
  int iVar1;
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined4 local_170;
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fn_00763700();
  iVar1 = fn_00251dd8(param_1[0x4c]);
  if (iVar1 == 0) {
    if (param_1[0x51] != 3) {
      if (*(char *)((int)param_1 + 0x14d) != '\0') {
        fn_0040f564(*(undefined4 *)(param_1[0x48] + 0x3c),(char)param_1[0x4f]);
        *(undefined1 *)((int)param_1 + 0x14d) = 0;
      }
      goto LAB_005fc76c;
    }
LAB_005fc77c:
    if (*(char *)(DAT_00898840 + 0x59) != '\0') {
      param_1[0x51] = 0;
      return;
    }
    iVar1 = param_1[0x51];
    if (iVar1 == 3) {
      fn_0066de6c(param_1[0x4a]);
      fn_0066e6f0(DAT_00897850,0);
      param_1[0x51] = 4;
      goto LAB_005fc7a8;
    }
  }
  else {
LAB_005fc76c:
    iVar1 = param_1[0x51];
    if (iVar1 == 2 || iVar1 == 3) goto LAB_005fc77c;
  }
  if (iVar1 != 4 && iVar1 != 5) {
    return;
  }
LAB_005fc7a8:
  iVar1 = (**(code **)(*(int *)param_1[0x4a] + 0x14))();
  if ((iVar1 == 0) && (param_1[0x52] != 0x15)) {
    if (*(int *)(param_1[0x4a] + 0x44) == 0) {
      iVar1 = fn_001296d0(DAT_00898840);
      if (iVar1 == 0) {
        iVar1 = param_1[0x51];
        param_1[0x51] = 0;
        if (iVar1 == 5) {
          iVar1 = param_1[0x53];
          local_174 = 0;
          local_172 = 1;
          local_178 = 0;
          local_170 = 0;
          local_5c = 0;
          fn_00301f50(auStack_16c,0x100);
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = 0;
          local_58 = 0;
          local_48 = 0;
          local_54 = 0;
          local_44 = 0;
          local_50 = 0;
          local_4c = 0;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_2c = 0;
          local_1c = 0;
          (**(code **)(*param_1 + 0x1dc))(param_1,&local_178,(int)(char)iVar1);
          if (param_1[0x51] != 5) {
            fn_00675cc4(*(undefined4 *)(param_1[0x48] + 0x44),&local_178);
            param_1[0x51] = 1;
          }
        }
        *(undefined1 *)(param_1[0x47] + 0xc) = 1;
        fn_0066e620(DAT_00898840,0);
        return;
      }
    }
    else {
      param_1[0x51] = 0;
      param_1[0x52] = 0;
    }
  }
  return;
}


