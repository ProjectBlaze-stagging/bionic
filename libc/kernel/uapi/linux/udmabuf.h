/*
 * This file is auto-generated. Modifications will be lost.
 *
 * See https://android.googlesource.com/platform/bionic/+/master/libc/kernel/
 * for more information.
 */
#ifndef _UAPI_LINUX_UDMABUF_H
#define _UAPI_LINUX_UDMABUF_H
#include <linux/types.h>
#include <linux/ioctl.h>
#define UDMABUF_FLAGS_CLOEXEC 0x01
struct udmabuf_create {
  __u32 memfd;
  __u32 flags;
  __u64 offset;
  __u64 size;
};
struct udmabuf_create_item {
  __u32 memfd;
  __u32 __pad;
  __u64 offset;
  __u64 size;
};
struct udmabuf_create_list {
  __u32 flags;
  __u32 count;
  struct udmabuf_create_item list[];
};
#define UDMABUF_CREATE _IOW('u', 0x42, struct udmabuf_create)
#define UDMABUF_CREATE_LIST _IOW('u', 0x43, struct udmabuf_create_list)
#endif
