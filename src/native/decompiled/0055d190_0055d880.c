#include "0055d190_0055d880.h"



void fn_0055d880(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_r6;
  uint uVar6;
  undefined1 local_90 [4];
  uint local_8c;
  undefined4 local_88;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x224) != 0) {
      do {
        iVar5 = param_1 + uVar6 * 0x24;
        if (*(char *)(iVar5 + 0x2068) != '\0') {
          local_90[0] = *(undefined1 *)(param_1 + 0x88);
          iVar3 = 0;
          local_8c = (uint)*(byte *)(iVar5 + 0x2074);
          local_88 = *(undefined4 *)(param_1 + 0x8c);
          if (*(char *)(iVar5 + 0x2074) != '\0') {
            do {
              iVar1 = *(int *)((char *)(iVar5 + 0x2068) + iVar3 * 4 + 4);
              if (iVar1 != 0) {
                unaff_r6 = *(int *)(iVar1 + 4);
              }
              if (iVar1 != 0 && unaff_r6 != 0) {
                fn_0055a0a4(unaff_r6,local_90,0);
                fn_0055a29c(unaff_r6);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)(uint)*(byte *)(iVar5 + 0x2074));
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x224));
    }
    uVar6 = (uint)(*(char *)(param_1 + 0xe) != '\0');
    if (*(char *)(param_1 + 0x55) != '\0') {
      uVar6 = 1;
    }
    if ((int)*(char *)(param_1 + 0x54) != uVar6) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0x220) != 0) {
        do {
          iVar5 = *(int *)(param_1 + uVar4 * 0x3c8 + 0x22c);
          if (iVar5 != 0) {
            fn_0055a27c(iVar5,uVar6);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x220));
      }
      *(char *)(param_1 + 0x54) = (char)uVar6;
    }
    uVar2 = fn_00172fc4();
    fn_00195e04(uVar2,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



void fn_0055d800(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    param_3 = 1;
  }
  *(char *)(param_1 + 0xe) = (char)param_2;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x55) = param_3;
  }
  uVar3 = (uint)(param_2 != 0);
  if (*(char *)(param_1 + 0x55) != '\0') {
    uVar3 = 1;
  }
  if ((int)*(char *)(param_1 + 0x54) != uVar3) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x220) != 0) {
      do {
        iVar1 = *(int *)(param_1 + uVar2 * 0x3c8 + 0x22c);
        if (iVar1 != 0) {
          fn_0055a27c(iVar1,uVar3);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x220));
    }
    *(char *)(param_1 + 0x54) = (char)uVar3;
  }
  return;
}



void fn_0055d790(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  fn_0055bee4(*(undefined4 *)(param_1 + 0x60));
  uVar2 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    do {
      if (*(int *)(param_1 + uVar2 * 0x3c8 + 0x22c) != 0) {
        fn_0017ea58();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x220));
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    uVar1 = fn_00172fc4();
    fn_001a071c(uVar1,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}



void fn_0055d490(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_5c [15];
  
  if (*param_2 != '\0') {
    VectorUnsignedToFloat((uint)(byte)param_2[0xd],(byte)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((uint)(byte)param_2[0x13],(byte)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((uint)(byte)param_2[0x15],(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = (uint)(byte)param_2[0xe];
    if (uVar1 < 2) {
      VectorSignedToFloat(uVar1 - 0x3f,(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      VectorSignedToFloat(uVar1 - 0x40,(byte)(in_fpscr >> 0x16) & 3);
    }
    uVar1 = (uint)(byte)param_2[0xf];
    if (uVar1 < 0x40) {
      VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      VectorUnsignedToFloat(uVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
    }
    fVar9 = 0.0;
    uVar1 = 0;
    VectorUnsignedToFloat((uint)(byte)param_2[0x10],(byte)(in_fpscr >> 0x16) & 3);
    local_5c[0] = (float)VectorUnsignedToFloat
                                   ((uint)(byte)param_2[0x11],(byte)(in_fpscr >> 0x16) & 3);
    local_5c[0] = local_5c[0] * 0.007874016;
    local_5c[1] = (float)VectorUnsignedToFloat
                                   ((uint)(byte)param_2[0x12],(byte)(in_fpscr >> 0x16) & 3);
    local_5c[1] = local_5c[1] * 0.007874016;
    fVar7 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0x30);
    iVar6 = (int)param_2[0x14];
    if (*(char *)(param_1 + 0x2c) != -1) {
      iVar6 = (int)*(char *)(param_1 + 0x2c);
    }
    do {
      pfVar3 = local_5c + uVar1 + 3;
      *pfVar3 = fVar9;
      fn_001a8754(param_1,uVar1 & 0xff);
      fVar8 = *pfVar3;
      uVar2 = uVar1 + 1;
      *pfVar3 = fVar7 + fVar8;
      fVar7 = fVar7 + fVar8 + *(float *)(param_1 + uVar1 * 4 + 0x104);
      *pfVar3 = fVar7;
      fVar7 = fVar7 + local_5c[uVar1];
      *pfVar3 = fVar7;
      uVar1 = uVar2;
    } while ((int)uVar2 < 2);
    iVar4 = 0;
    if (param_2[0xc] != '\0') {
      do {
        iVar5 = *(int *)(*(int *)(param_2 + iVar4 * 4 + 4) + 4);
        if (iVar5 != 0) {
          fn_0018b1c4(iVar5);
          fn_0018b164(iVar5);
          fn_0018af1c(iVar5);
          fn_0018afa8(iVar5,iVar6);
          fn_0018af40(iVar5);
          uVar1 = 0;
          do {
            fn_0018b188(iVar5,uVar1 & 0xff);
            uVar1 = uVar1 + 1;
          } while ((int)uVar1 < 2);
          if (param_2[0xc] == '\x01') {
            fn_0018b078(iVar5);
          }
          else if (param_2[0xc] == '\x02') {
            fn_0018b078(iVar5);
          }
          fn_0018af84(iVar5);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)(byte)param_2[0xc]);
    }
  }
  return;
}



void fn_0055d190(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar5;
  int unaff_r5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_40 [9];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    bVar8 = *(char *)(param_1 + 0x2068) != '\0';
    if (bVar8) {
      unaff_r5 = *(int *)(param_1 + 0x22c);
    }
    if ((bVar8 && unaff_r5 != 0) && (iVar2 = fn_006e4560(unaff_r5), iVar2 != 0)) {
      while (iVar2 = param_1 + *(int *)(param_1 + 0x70) * 0x18, *(char *)(iVar2 + 0x241) == '\x03')
      {
        fn_001a3c68(iVar2 + 0x230);
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x20fc) + *(int *)(param_1 + 0x58);
        uVar4 = 0;
        if (*(int *)(param_1 + 0x220) != 0) {
          do {
            local_40[uVar4] =
                 *(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x6c) +
                 *(int *)(param_1 + uVar4 * 0x3c8 + 0x228);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x220));
        }
        param_4 = 0;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          param_4 = *(uint *)(param_1 + 0x80);
        }
        else if (*(char *)(param_1 + 0x7c) == '\x01') {
          uVar7 = *(uint *)(param_1 + 0x80);
          uVar4 = *(uint *)(param_1 + 0x8c);
          fn_00169c20((int)((ulonglong)uVar4 * (ulonglong)uVar7),
                       ((int)uVar7 >> 0x1f) * uVar4 +
                       (int)((ulonglong)uVar4 * (ulonglong)uVar7 >> 0x20),1000,0);
          if (extraout_r1 == 0) {
            param_4 = fn_00169c20((int)((ulonglong)uVar4 * (ulonglong)uVar7),
                                   ((int)uVar7 >> 0x1f) * uVar4 +
                                   (int)((ulonglong)uVar4 * (ulonglong)uVar7 >> 0x20),1000,0);
          }
          else {
            param_4 = 0xffffffff;
          }
        }
        uVar3 = *(undefined4 *)(param_1 + 0x21c);
        *(undefined4 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x21c) = 0;
        if (*(char *)(param_1 + 0xd) == '\0') {
          uVar5 = 1;
        }
        else {
          uVar5 = 2;
        }
        fn_00196118(*(undefined4 *)(param_1 + 0x60),local_40,*(undefined4 *)(param_1 + 0x6c),
                     param_4,uVar3,uVar5,(int)*(char *)(param_1 + 0x84));
        uVar4 = *(int *)(param_1 + 0x6c) + 1;
        *(uint *)(param_1 + 0x6c) = uVar4;
        if (*(uint *)(param_1 + 0x68) <= uVar4) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
        uVar4 = *(int *)(param_1 + 0x70) + 1;
        *(uint *)(param_1 + 0x70) = uVar4;
        if (*(uint *)(param_1 + 0x68) <= uVar4) {
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
      if ((*(char *)(param_1 + 0x55) != '\0') ||
         (iVar2 = fn_006e4594(*(undefined4 *)(param_1 + 0x60)), iVar2 == 0)) {
LAB_0055d404:
        iVar2 = fn_006e454c(unaff_r5);
        uVar4 = *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x20f8) + iVar2;
        *(uint *)(param_1 + 0x74) = uVar4;
        bVar8 = *(char *)(param_1 + 0x90) != '\0';
        if (bVar8) {
          param_4 = *(uint *)(param_1 + 0xa0);
        }
        if (bVar8 && param_4 < uVar4) {
          iVar6 = *(int *)(param_1 + 0x9c);
          iVar2 = 0xe;
          if (*(char *)(param_1 + 0x88) == '\0') {
            iVar2 = 8;
          }
          else if (*(char *)(param_1 + 0x88) == '\x01') {
            iVar2 = 4;
          }
          if (param_4 - iVar6 < (uint)(iVar2 << 0xb)) {
            fn_00169f1c(uVar4 - iVar6);
            uVar4 = extraout_r1_00 + iVar6;
          }
          else {
            uVar4 = (uVar4 - param_4) + iVar6;
          }
        }
        *(uint *)(param_1 + 0x78) = uVar4;
        return;
      }
      uVar4 = 0;
      if (*(uint *)(param_1 + 0x68) != 0) {
        do {
          param_4 = uVar4 * 3;
          cVar1 = *(char *)(param_1 + uVar4 * 0x18 + 0x241);
          if (cVar1 == '\x02' || cVar1 == '\x01') goto LAB_0055d404;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x68));
      }
      *(undefined1 *)(param_1 + 0x57) = 1;
      *(undefined1 *)(param_1 + 0x55) = 1;
      if (*(char *)(param_1 + 0x54) != '\x01') {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x220) != 0) {
          do {
            iVar2 = *(int *)(param_1 + uVar4 * 0x3c8 + 0x22c);
            if (iVar2 != 0) {
              fn_0055a27c(iVar2,1);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x220));
        }
        *(undefined1 *)(param_1 + 0x54) = 1;
      }
    }
  }
  return;
}


