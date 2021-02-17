
uint FUN_ffffffff80111b10(uint param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_ffffffff8011b310();
  uVar1 = *(ushort *)(lVar2 + 0x40);
  if (0x10 < uVar1) {
    if (uVar1 == 0x14) {
      return 0xffffffff;
    }
    if (0x14 < uVar1) {
      if (uVar1 != 0x4e22) {
        if (uVar1 < 0x4e23) {
          if (uVar1 == 0x2713) {
            if (param_1 == 2) {
              return 4;
            }
            return 0xffffffff;
          }
        }
        else {
          if (uVar1 == 0x4e23) {
            return 0xffffffff;
          }
          if (uVar1 == 0x4e24) {
            if (param_1 < 2) {
              return 0xffffffff;
            }
            if (param_1 == 2) {
              return 9;
            }
            return 0xffffffff;
          }
        }
        goto LAB_ffffffff80111b98;
      }
      if (param_1 == 0) {
        return 0x1e;
      }
      uVar3 = 8;
      goto joined_r0xffffffff80111d10;
    }
    if (0x12 < uVar1) {
      if (param_1 >= 4) {
        return 0xffffffff;
      }
      return param_1 + 2;
    }
    if (param_1 < 4) {
      return param_1 + 1;
    }
    uVar3 = param_1 - 0xb;
    goto joined_r0xffffffff80111d24;
  }
  if ((uVar1 < 0xf) && (uVar1 != 6)) {
    if (uVar1 < 7) {
      if (uVar1 == 2) goto LAB_ffffffff80111b40;
      if (uVar1 < 3) {
        if (uVar1 == 1) {
          return 0xffffffff;
        }
LAB_ffffffff80111b98:
        lVar2 = FUN_ffffffff8011b310();
        FUN_ffffffff80147f28
                  ("cvmx_helper_board_get_mii_address: Unknown board type %d\n",
                   *(undefined2 *)(lVar2 + 0x40));
        return 0xffffffff;
      }
      if (uVar1 != 3) {
        if (uVar1 == 5) {
          if (param_1 < 4) {
            return param_1;
          }
          if (param_1 - 0x10 < 4) {
            return param_1 - 0xc;
          }
          return 0xffffffff;
        }
        goto LAB_ffffffff80111b98;
      }
    }
    else {
      if (uVar1 < 0xd) {
        if (uVar1 < 9) {
          if (uVar1 == 8) {
            return 0xffffffff;
          }
          goto LAB_ffffffff80111b98;
        }
      }
      else {
        if (uVar1 != 0xe) goto LAB_ffffffff80111b98;
      }
    }
    if (param_1 == 0) {
      return 4;
    }
    uVar3 = 9;
joined_r0xffffffff80111d10:
    if (param_1 != 1) {
      return 0xffffffff;
    }
    return uVar3;
  }
LAB_ffffffff80111b40:
  uVar3 = param_1 - 0x10;
joined_r0xffffffff80111d24:
  if (3 < param_1 - 0x10) {
    return 0xffffffff;
  }
  return uVar3;
}
