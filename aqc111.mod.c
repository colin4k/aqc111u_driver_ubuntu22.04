#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x32e21920, "module_layout" },
	{ 0x97077237, "ethtool_op_get_link" },
	{ 0x2afb3e4e, "usbnet_set_msglevel" },
	{ 0xa3958569, "usbnet_get_msglevel" },
	{ 0x132482fb, "dev_get_tstats64" },
	{ 0x37128315, "usbnet_tx_timeout" },
	{ 0x6ed54f1, "eth_validate_addr" },
	{ 0x8b16c5b4, "usbnet_start_xmit" },
	{ 0x8905f95a, "usbnet_stop" },
	{ 0xd70b0b54, "usbnet_open" },
	{ 0xdf1b965f, "usbnet_disconnect" },
	{ 0x8035205e, "usbnet_probe" },
	{ 0xdf85ea06, "usb_deregister" },
	{ 0xf63cc4cc, "usb_register_driver" },
	{ 0xbeb09e29, "usbnet_suspend" },
	{ 0xd0398296, "netif_carrier_on" },
	{ 0x862019aa, "netdev_info" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xf9a482f9, "msleep" },
	{ 0xed692d73, "usbnet_resume" },
	{ 0xb27d253c, "usbnet_read_cmd_nopm" },
	{ 0x354573ce, "usb_driver_set_configuration" },
	{ 0xf35141b2, "kmem_cache_alloc_trace" },
	{ 0x26087692, "kmalloc_caches" },
	{ 0xe5a60530, "usbnet_get_endpoints" },
	{ 0xba1cb977, "usb_reset_configuration" },
	{ 0xfbdc192a, "netif_carrier_off" },
	{ 0x5e967325, "usbnet_read_cmd" },
	{ 0x37a5a5c0, "eth_mac_addr" },
	{ 0xfe6eacd4, "usb_autopm_put_interface" },
	{ 0xb9cfdd06, "usb_autopm_get_interface" },
	{ 0x48a19068, "usbnet_skb_return" },
	{ 0xe375d1a8, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1105c36f, "__netdev_alloc_skb" },
	{ 0xfc13b0a0, "skb_trim" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3079968, "usbnet_write_cmd_async" },
	{ 0x65ad9ab0, "skb_put" },
	{ 0xafdfbc8a, "__dev_kfree_skb_any" },
	{ 0xc5aafd3c, "skb_copy_expand" },
	{ 0xa3a282dd, "__pskb_pull_tail" },
	{ 0x93f085ac, "skb_push" },
	{ 0x9c70a3ca, "netdev_warn" },
	{ 0x9ea47ef, "__dynamic_netdev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4afa9de, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0d22e05, "usbnet_get_drvinfo" },
	{ 0x53fb3b75, "usbnet_defer_kevent" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "FF16180BEFB89BFE0EB083C");
