#include "0073acbc_00740638bab.h"



char * fn_00740550(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    pcVar1 = "SIL_ERR_OK";
  }
  else {
    iVar2 = 1;
    while ((&DAT_007f0a64)[iVar2 * 2] != param_1) {
      if ((&DAT_007f0a6c)[iVar2 * 2] == param_1) {
        return (char *)(&DAT_007f0a70)[iVar2 * 2];
      }
      iVar2 = iVar2 + 2;
      if (0x18 < iVar2) {
        return "";
      }
    }
    pcVar1 = (char *)(&DAT_007f0a68)[iVar2 * 2];
  }
  return pcVar1;
}


