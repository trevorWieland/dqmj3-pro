#include "00691f44_006923f4.h"



undefined1 fn_006923f4(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x25);
}



uint fn_006923d0(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x7fffff) >> 0x16;
}



uint fn_006923ac(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3f) >> 5;
}



uint fn_006923a4(undefined4 param_1,int param_2)

{
  return (*(byte *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0x3f) >> 5;
}



uint fn_00692380(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3ffff) >> 0x11;
}



uint fn_0069235c(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0xffffff) >> 0x17;
}



undefined4 fn_00692320(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_008994a4 + param_1 * 0x60;
  if (((*(ushort *)(iVar1 + 0x40) & 0xfff) >> 0xb == 0) || (*(char *)(iVar1 + 2) != '\x02')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined1 fn_00692304(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x29);
}



undefined1 fn_006922e8(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x24);
}



int fn_00692284(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while( true ) {
    if (((int)uVar1 < 0) || (6 < uVar1)) {
      iVar2 = 0x2a9;
    }
    else {
      iVar2 = (int)(short)(&DAT_007d5e6a)[uVar1];
    }
    if (iVar2 == param_1) break;
    uVar1 = uVar1 + 1;
    if (6 < (int)uVar1) {
      return param_1;
    }
  }
  return 0x275;
}



uint fn_0069223c(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x3ff) >> 9;
}



uint fn_00692218(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0xfff) >> 0xb;
}



uint fn_006921f4(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1f) >> 4;
}



uint fn_006921ec(undefined4 param_1,int param_2)

{
  return (*(byte *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0x1f) >> 4;
}



undefined1 fn_006921d0(int param_1)

{
  return *(undefined1 *)(DAT_008994a4 + param_1 * 0x60 + 0x26);
}



int fn_006921a0(uint param_1)

{
  if (((int)param_1 < 0) || (6 < param_1)) {
    return 0x2a9;
  }
  return (int)(short)(&DAT_007d5e6a)[param_1];
}



uint fn_0069217c(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1ffffff) >> 0x18;
}



uint fn_00692158(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x7f) >> 6;
}



uint fn_00692150(undefined4 param_1,int param_2)

{
  return (*(byte *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0x7f) >> 6;
}



uint fn_0069212c(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0xf) >> 3;
}



uint fn_00692124(undefined4 param_1,int param_2)

{
  return (*(byte *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0xf) >> 3;
}



uint fn_00692100(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x7fff) >> 0xe;
}



uint fn_00692098(int param_1)

{
  return (*(ushort *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1fff) >> 0xc;
}



uint fn_00692074(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1fffffff) >> 0x1c;
}



uint fn_00692050(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1fffff) >> 0x14;
}



uint fn_00692048(undefined4 param_1,int param_2)

{
  return (*(uint *)(DAT_008994a4 + param_2 * 0x60 + 0x40) & 0x1fffff) >> 0x14;
}



uint fn_00692024(int param_1)

{
  return (*(byte *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 7) >> 2;
}



int fn_00692008(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x14);
}



int fn_00691fec(int param_1)

{
  return (int)*(short *)(DAT_008994a4 + param_1 * 0x60 + 0x16);
}



int fn_00691f8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_008994a4 + param_1 * 0x60;
  iVar1 = *(int *)(iVar3 + 0x3a);
  if ((short)iVar1 != param_2) {
    iVar2 = 0;
    while (iVar1 = *(int *)(iVar3 + iVar2 * 4 + 0x2a), (short)iVar1 != param_2) {
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      if (3 < iVar2) {
        return 0;
      }
    }
  }
  return iVar1 >> 0x10;
}



uint fn_00691f68(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0xfffffff) >> 0x1b;
}



uint fn_00691f44(int param_1)

{
  return (*(uint *)(DAT_008994a4 + param_1 * 0x60 + 0x40) & 0x1ffff) >> 0x10;
}


