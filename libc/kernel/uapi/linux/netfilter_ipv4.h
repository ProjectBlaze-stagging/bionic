/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI__LINUX_IP_NETFILTER_H
#define _UAPI__LINUX_IP_NETFILTER_H
#include <linux/netfilter.h>
#include <limits.h>
#define NF_IP_PRE_ROUTING 0
#define NF_IP_LOCAL_IN 1
#define NF_IP_FORWARD 2
#define NF_IP_LOCAL_OUT 3
#define NF_IP_POST_ROUTING 4
#define NF_IP_NUMHOOKS 5
enum nf_ip_hook_priorities {
  NF_IP_PRI_FIRST = INT_MIN,
  NF_IP_PRI_RAW_BEFORE_DEFRAG = - 450,
  NF_IP_PRI_CONNTRACK_DEFRAG = - 400,
  NF_IP_PRI_RAW = - 300,
  NF_IP_PRI_SELINUX_FIRST = - 225,
  NF_IP_PRI_CONNTRACK = - 200,
  NF_IP_PRI_MANGLE = - 150,
  NF_IP_PRI_NAT_DST = - 100,
  NF_IP_PRI_FILTER = 0,
  NF_IP_PRI_SECURITY = 50,
  NF_IP_PRI_NAT_SRC = 100,
  NF_IP_PRI_SELINUX_LAST = 225,
  NF_IP_PRI_CONNTRACK_HELPER = 300,
  NF_IP_PRI_CONNTRACK_CONFIRM = INT_MAX,
  NF_IP_PRI_LAST = INT_MAX,
};
#define SO_ORIGINAL_DST 80
#endif
