/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef __BCM933XX_HCS_H
#define __BCM933XX_HCS_H
#include <linux/types.h>
struct bcm_hcs {
  __u16 magic;
  __u16 control;
  __u16 rev_maj;
  __u16 rev_min;
  __u32 build_date;
  __u32 filelen;
  __u32 ldaddress;
  char filename[64];
  __u16 hcs;
  __u16 her_znaet_chto;
  __u32 crc;
};
#endif
