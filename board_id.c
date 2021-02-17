
undefined * FUN_ffffffff80106890(void)

{
  ushort uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  uVar1 = *(ushort *)(DAT_ffffffff80801160 + 0x50);
  if (uVar1 == 0x10) {
    pcVar3 = "NICPRO2";
    goto LAB_ffffffff801069b8;
  }
  if (uVar1 < 0x11) {
    if (uVar1 == 7) {
      pcVar3 = "TRANTOR";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 < 8) {
      if (uVar1 == 3) {
        pcVar3 = "KODAMA";
      }
      else {
        if (uVar1 < 4) {
          if (uVar1 == 1) {
            pcVar3 = "SIM";
          }
          else {
            if (uVar1 < 2) {
              pcVar3 = "NULL";
            }
            else {
              pcVar3 = "EBT3000";
            }
          }
        }
        else {
          if (uVar1 == 5) {
            pcVar3 = "NAC38";
          }
          else {
            if (uVar1 < 6) {
              pcVar3 = "NIAGARA";
            }
            else {
              pcVar3 = "THUNDER";
            }
          }
        }
      }
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 == 0xb) {
      pcVar3 = "CN3010_EVB_HS5";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 < 0xc) {
      if (uVar1 == 9) {
        pcVar3 = "EBH3100";
      }
      else {
        if (uVar1 < 10) {
          pcVar3 = "EBH3000";
        }
        else {
          pcVar3 = "HIKARI";
        }
      }
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 == 0xd) {
      pcVar3 = "KBP";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 < 0xd) {
      pcVar3 = "CN3005_EVB_HS5";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 == 0xe) {
      pcVar3 = "CN3020_EVB_HS5";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 == 0xf) {
      pcVar3 = "EBT5800";
      goto LAB_ffffffff801069b8;
    }
  }
  else {
    if (uVar1 == 0x2712) {
      pcVar3 = "CUST_NS0216";
      goto LAB_ffffffff801069b8;
    }
    if (uVar1 < 0x2713) {
      if (uVar1 == 0x14) {
        pcVar3 = "BBGW_REF";
        goto LAB_ffffffff801069b8;
      }
      if (uVar1 < 0x15) {
        if (uVar1 == 0x12) {
          pcVar3 = "EBH5601";
        }
        else {
          if (uVar1 < 0x13) {
            pcVar3 = "EBH5600";
          }
          else {
            pcVar3 = "EBH5200";
          }
        }
        goto LAB_ffffffff801069b8;
      }
      if (uVar1 == 10000) {
        pcVar3 = "CUST_DEFINED_MIN";
        goto LAB_ffffffff801069b8;
      }
      if (10000 < uVar1) {
        pcVar3 = "CUST_WSX16";
        goto LAB_ffffffff801069b8;
      }
      if (uVar1 == 0x15) {
        pcVar3 = "MAX";
        goto LAB_ffffffff801069b8;
      }
    }
    else {
      if (uVar1 == 0x4e21) {
        pcVar3 = "CUST_PRIVATE_MIN";
        goto LAB_ffffffff801069b8;
      }
      if (uVar1 < 0x4e22) {
        if (uVar1 == 0x2714) {
          pcVar3 = "CUST_WMR500";
          goto LAB_ffffffff801069b8;
        }
        if (uVar1 < 0x2714) {
          pcVar3 = "CUST_NB5";
          goto LAB_ffffffff801069b8;
        }
        if (uVar1 == 20000) {
          pcVar3 = "CUST_DEFINED_MAX";
          goto LAB_ffffffff801069b8;
        }
      }
      else {
        if (uVar1 == 0x4e23) {
          pcVar3 = "CUST_UTM10";
          goto LAB_ffffffff801069b8;
        }
        if (uVar1 < 0x4e23) {
          pcVar3 = "CUST_SRXN3205";
          goto LAB_ffffffff801069b8;
        }
        if (uVar1 == 0x4e24) {
          pcVar3 = "CUST_UTM25";
          goto LAB_ffffffff801069b8;
        }
        if (uVar1 == 30000) {
          pcVar3 = "CUST_PRIVATE_MAX";
          goto LAB_ffffffff801069b8;
        }
      }
    }
  }
  pcVar3 = "Unsupported Board";
LAB_ffffffff801069b8:
  uVar2 = FUN_ffffffff8011c658(PRId);
  FUN_ffffffff8029dbc8(&DAT_ffffffff80801170,"%s (%s)",pcVar3,uVar2);
  return &DAT_ffffffff80801170;
}

